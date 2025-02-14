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

void (*cal_data_init)(void) = NULL;
int (*cal_check_hiu_dvfs_id)(u32 id) = NULL;
