
enum acpm_dvfs_id {
	dvfs_mif = ACPM_VCLK_TYPE,
	dvfs_int,
	dvfs_cpucl0,
	dvfs_cpucl1,
	dvfs_cpucl2,
	dvfs_npu,
	dvfs_disp,
	dvfs_score,
	dvfs_aud,
	dvs_cp,
	dvfs_g3d,
	dvfs_intcam,
	dvfs_cam,
	dvfs_iva,
	dvfs_mfc,
};

_Pragma("GCC diagnostic push")
_Pragma("GCC diagnostic ignored \"-Wsizeof-pointer-div\"")
struct vclk acpm_vclk_list[] = {
	CMUCAL_ACPM_VCLK(dvfs_mif, NULL, NULL, NULL, NULL, MARGIN_MIF),
	CMUCAL_ACPM_VCLK(dvfs_int, NULL, NULL, NULL, NULL, MARGIN_INT),
	CMUCAL_ACPM_VCLK(dvfs_cpucl0, NULL, NULL, NULL, NULL, MARGIN_LIT),
	CMUCAL_ACPM_VCLK(dvfs_cpucl1, NULL, NULL, NULL, NULL, MARGIN_MID),
	CMUCAL_ACPM_VCLK(dvfs_cpucl2, NULL, NULL, NULL, NULL, MARGIN_BIG),
	CMUCAL_ACPM_VCLK(dvfs_npu, NULL, NULL, NULL, NULL, MARGIN_NPU),
	CMUCAL_ACPM_VCLK(dvfs_disp, NULL, NULL, NULL, NULL, MARGIN_DISP),
	CMUCAL_ACPM_VCLK(dvfs_score, NULL, NULL, NULL, NULL, MARGIN_SCORE),
	CMUCAL_ACPM_VCLK(dvfs_aud, NULL, NULL, NULL, NULL, MARGIN_AUD),
	CMUCAL_ACPM_VCLK(dvs_cp, NULL, NULL, NULL, NULL, MARGIN_CP),
	CMUCAL_ACPM_VCLK(dvfs_g3d, NULL, NULL, NULL, NULL, MARGIN_G3D),
	CMUCAL_ACPM_VCLK(dvfs_intcam, NULL, NULL, NULL, NULL, MARGIN_INTCAM),
	CMUCAL_ACPM_VCLK(dvfs_cam, NULL, NULL, NULL, NULL, MARGIN_CAM),
	CMUCAL_ACPM_VCLK(dvfs_iva, NULL, NULL, NULL, NULL, MARGIN_IVA),
	CMUCAL_ACPM_VCLK(dvfs_mfc, NULL, NULL, NULL, NULL, MARGIN_MFC),
};
_Pragma("GCC diagnostic pop")

unsigned int acpm_vclk_size = ARRAY_SIZE(acpm_vclk_list);
