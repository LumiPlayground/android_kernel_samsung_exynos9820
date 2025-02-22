#include "../pmucal_common.h"
#include "../pmucal_cpu.h"
#include "../pmucal_local.h"
#include "../pmucal_rae.h"
#include "../pmucal_system.h"
#include "../pmucal_powermode.h"

#include "flexpmu_cal_cpu_exynos8895.h"
#include "flexpmu_cal_local_exynos8895.h"
#include "flexpmu_cal_p2vmap_exynos8895.h"
#include "flexpmu_cal_system_exynos8895.h"
#include "flexpmu_cal_powermode_exynos8895.h"

#include "../pmucal_cp.h"
#include "pmucal_cp_exynos8895.h"

#include "cmucal-node.c"
#include "cmucal-qch.c"
#include "cmucal-sfr.c"
#include "cmucal-vclk.c"
#include "cmucal-vclklut.c"

#include "clkout_exynos8895.c"
#include "acpm_dvfs_exynos8895.h"
#include "asv_exynos8895.h"

#if defined(CONFIG_SEC_DEBUG)
#include <soc/samsung/exynos-pm.h>
#endif

#if defined(CONFIG_SEC_DEBUG)
int asv_ids_information(enum ids_info id)
{
	int res;

	switch (id) {
	case tg:
		res = asv_get_table_ver();
		break;
	case lg:
		res = asv_get_grp(dvfs_cpucl1);
		break;
	case bg:
		res = asv_get_grp(dvfs_cpucl0);
		break;
	case g3dg:
		res = asv_get_grp(dvfs_g3d);
		break;
	case mifg:
		res = asv_get_grp(dvfs_mif);
		break;
	case lids:
		res = asv_get_ids_info(dvfs_cpucl1);
		break;
	case bids:
		res = asv_get_ids_info(dvfs_cpucl0);
		break;
	case gids:
		res = asv_get_ids_info(dvfs_g3d);
		break;
	default:
		res = 0;
		break;
	};
	return res;
}
#endif

void (*cal_data_init)(void) = NULL;
int (*cal_check_hiu_dvfs_id)(u32 id) = NULL;
