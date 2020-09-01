#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mt-plat/battery_meter.h>

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R	16900
#define RBAT_PULL_DOWN_R	27000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R	61900
#define RBAT_PULL_DOWN_R	100000
#endif
#define RBAT_PULL_UP_VOLT	1800



/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 68237},
		{-15, 53650},
		{-10, 42506},
		{ -5, 33892},
		{  0, 27219},
		{  5, 22021},
		{ 10, 17926},
		{ 15, 14674},
		{ 20, 12081},
		{ 25, 10000},
		{ 30, 8315},
		{ 35, 6948},
		{ 40, 5834},
		{ 45, 4917},
		{ 50, 4161},
		{ 55, 3535},
		{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	};
#endif

/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
	{0, 4111},
	{7, 4091},
	{13, 4077},
	{20, 4065},
	{27, 4058},
	{33, 4050},
	{40, 4043},
	{47, 4035},
	{53, 4028},
	{60, 4020},
	{67, 4011},
	{73, 4005},
	{80, 3998},
	{86, 3990},
	{93, 3984},
	{100, 3977},
	{106, 3969},
	{113, 3964},
	{120, 3957},
	{126, 3951},
	{133, 3944},
	{140, 3937},
	{146, 3928},
	{153, 3919},
	{160, 3910},
	{166, 3891},
	{173, 3833},
	{180, 3762},
	{183, 3748},
	{187, 3737},
	{190, 3731},
	{192, 3724},
	{194, 3720},
	{196, 3714},
	{198, 3710},
	{200, 3706},
	{201, 3703},
	{202, 3699},
	{203, 3694},
	{204, 3692},
	{205, 3688},
	{206, 3687},
	{206, 3683},
	{207, 3681},
	{207, 3679},
	{208, 3677},
	{209, 3674},
	{209, 3673},
	{209, 3671},
	{210, 3669},
	{210, 3667},
	{211, 3666},
	{211, 3664},
	{211, 3663},
	{212, 3661},
	{212, 3660},
	{212, 3657},
	{212, 3658},
	{212, 3654},
	{213, 3655},
	{213, 3653},
	{213, 3653},
	{213, 3651},
	{213, 3650},
	{213, 3649},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647},
	{214, 3647}
};

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
	{0, 4153},
	{4, 4131},
	{8, 4113},
	{13, 4098},
	{17, 4085},
	{21, 4075},
	{25, 4067},
	{29, 4059},
	{33, 4051},
	{38, 4044},
	{42, 4038},
	{46, 4030},
	{50, 4022},
	{54, 4014},
	{58, 4007},
	{62, 4001},
	{66, 3994},
	{71, 3986},
	{75, 3981},
	{79, 3974},
	{83, 3968},
	{87, 3960},
	{91, 3950},
	{96, 3939},
	{100, 3923},
	{104, 3891},
	{108, 3835},
	{112, 3821},
	{116, 3811},
	{121, 3803},
	{125, 3797},
	{129, 3790},
	{133, 3781},
	{137, 3775},
	{141, 3766},
	{146, 3758},
	{150, 3747},
	{154, 3737},
	{158, 3727},
	{162, 3718},
	{166, 3711},
	{170, 3700},
	{175, 3690},
	{179, 3674},
	{183, 3649},
	{187, 3615},
	{191, 3561},
	{194, 3517},
	{195, 3485},
	{196, 3460},
	{197, 3441},
	{198, 3424},
	{198, 3412},
	{199, 3402},
	{199, 3396},
	{199, 3391},
	{199, 3386},
	{199, 3382},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377},
	{199, 3377}
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
	{0, 4092},
	{1, 4072},
	{3, 4031},
	{4, 4014},
	{6, 3983},
	{7, 3972},
	{9, 3951},
	{10, 3941},
	{11, 3932},
	{13, 3911},
	{14, 3904},
	{16, 3882},
	{17, 3875},
	{19, 3858},
	{20, 3848},
	{21, 3840},
	{23, 3821},
	{24, 3812},
	{26, 3793},
	{27, 3785},
	{29, 3766},
	{30, 3758},
	{31, 3750},
	{33, 3731},
	{34, 3725},
	{36, 3708},
	{37, 3703},
	{39, 3686},
	{40, 3678},
	{41, 3671},
	{43, 3657},
	{44, 3649},
	{46, 3636},
	{47, 3630},
	{49, 3617},
	{50, 3611},
	{51, 3606},
	{53, 3595},
	{54, 3590},
	{56, 3580},
	{57, 3576},
	{59, 3568},
	{60, 3563},
	{61, 3560},
	{63, 3553},
	{64, 3549},
	{66, 3543},
	{67, 3538},
	{69, 3532},
	{70, 3529},
	{71, 3526},
	{73, 3519},
	{74, 3517},
	{76, 3509},
	{77, 3507},
	{79, 3500},
	{80, 3497},
	{81, 3493},
	{83, 3486},
	{84, 3481},
	{86, 3473},
	{87, 3470},
	{89, 3461},
	{90, 3456},
	{91, 3450},
	{93, 3441},
	{94, 3436},
	{96, 3424},
	{97, 3418},
	{99, 3404},
	{100, 3400},
	{101, 3389},
	{103, 3369},
	{104, 3358},
	{105, 3346},
	{105, 3246},
	{105, 3146}
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
	{0, 4173},
	{1, 4155},
	{3, 4142},
	{4, 4127},
	{6, 4115},
	{7, 4102},
	{8, 4091},
	{10, 4078},
	{11, 4066},
	{13, 4055},
	{14, 4045},
	{15, 4034},
	{17, 4023},
	{18, 4012},
	{19, 4002},
	{21, 3992},
	{22, 3984},
	{24, 3975},
	{25, 3966},
	{26, 3957},
	{28, 3949},
	{29, 3940},
	{31, 3932},
	{32, 3924},
	{33, 3917},
	{35, 3910},
	{36, 3903},
	{38, 3896},
	{39, 3888},
	{40, 3880},
	{42, 3870},
	{43, 3857},
	{44, 3845},
	{46, 3836},
	{47, 3830},
	{49, 3822},
	{50, 3818},
	{51, 3813},
	{53, 3809},
	{54, 3805},
	{56, 3801},
	{57, 3797},
	{58, 3792},
	{60, 3789},
	{61, 3787},
	{62, 3784},
	{64, 3781},
	{65, 3780},
	{67, 3776},
	{68, 3774},
	{69, 3772},
	{71, 3768},
	{72, 3764},
	{74, 3759},
	{75, 3751},
	{76, 3749},
	{78, 3745},
	{79, 3741},
	{81, 3735},
	{82, 3731},
	{83, 3725},
	{85, 3720},
	{86, 3712},
	{87, 3703},
	{89, 3697},
	{90, 3685},
	{92, 3677},
	{93, 3675},
	{94, 3675},
	{96, 3672},
	{97, 3669},
	{99, 3655},
	{100, 3612},
	{101, 3545},
	{103, 3449},
	{104, 3279},
	{105, 3091}
};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = {
	{680, 4111},
	{680, 4091},
	{680, 4077},
	{683, 4065},
	{698, 4058},
	{705, 4050},
	{718, 4043},
	{735, 4035},
	{748, 4028},
	{763, 4020},
	{758, 4011},
	{775, 4005},
	{778, 3998},
	{783, 3990},
	{795, 3984},
	{800, 3977},
	{813, 3969},
	{843, 3964},
	{870, 3957},
	{928, 3951},
	{1003, 3944},
	{1093, 3937},
	{1220, 3928},
	{1450, 3919},
	{1745, 3910},
	{2063, 3891},
	{2283, 3833},
	{2383, 3762},
	{2373, 3748},
	{2345, 3737},
	{2330, 3731},
	{2315, 3724},
	{2303, 3720},
	{2288, 3714},
	{2280, 3710},
	{2268, 3706},
	{2260, 3703},
	{2250, 3699},
	{2238, 3694},
	{2238, 3692},
	{2228, 3688},
	{2225, 3687},
	{2210, 3683},
	{2208, 3681},
	{2203, 3679},
	{2195, 3677},
	{2188, 3674},
	{2185, 3673},
	{2178, 3671},
	{2180, 3669},
	{2175, 3667},
	{2173, 3666},
	{2160, 3664},
	{2158, 3663},
	{2155, 3661},
	{2163, 3660},
	{2150, 3657},
	{2150, 3658},
	{2143, 3654},
	{2145, 3655},
	{2140, 3653},
	{2148, 3653},
	{2128, 3651},
	{2148, 3650},
	{2128, 3649},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647},
	{2130, 3647}
};

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = {
	{340, 4153},
	{340, 4131},
	{340, 4113},
	{335, 4098},
	{333, 4085},
	{328, 4075},
	{330, 4067},
	{338, 4059},
	{343, 4051},
	{348, 4044},
	{350, 4038},
	{353, 4030},
	{350, 4022},
	{353, 4014},
	{355, 4007},
	{363, 4001},
	{363, 3994},
	{365, 3986},
	{383, 3981},
	{390, 3974},
	{413, 3968},
	{448, 3960},
	{503, 3950},
	{598, 3939},
	{800, 3923},
	{1085, 3891},
	{1328, 3835},
	{1365, 3821},
	{1378, 3811},
	{1360, 3803},
	{1383, 3797},
	{1373, 3790},
	{1383, 3781},
	{1383, 3775},
	{1395, 3766},
	{1390, 3758},
	{1410, 3747},
	{1418, 3737},
	{1433, 3727},
	{1463, 3718},
	{1478, 3711},
	{1520, 3700},
	{1565, 3690},
	{1605, 3674},
	{1678, 3649},
	{1738, 3615},
	{1823, 3561},
	{1795, 3517},
	{1715, 3485},
	{1658, 3460},
	{1610, 3441},
	{1568, 3424},
	{1545, 3412},
	{1513, 3402},
	{1498, 3396},
	{1490, 3391},
	{1473, 3386},
	{1463, 3382},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377},
	{1448, 3377}
};

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = {
	{208, 4167},
	{208, 4148},
	{215, 4131},
	{215, 4116},
	{220, 4103},
	{223, 4089},
	{223, 4075},
	{223, 4063},
	{225, 4051},
	{238, 4041},
	{233, 4029},
	{230, 4017},
	{238, 4008},
	{243, 3998},
	{240, 3987},
	{248, 3978},
	{253, 3970},
	{253, 3960},
	{260, 3952},
	{263, 3945},
	{263, 3935},
	{268, 3928},
	{265, 3920},
	{265, 3912},
	{273, 3905},
	{268, 3896},
	{268, 3889},
	{263, 3878},
	{250, 3866},
	{240, 3855},
	{233, 3844},
	{225, 3836},
	{223, 3830},
	{220, 3823},
	{218, 3818},
	{220, 3814},
	{218, 3807},
	{223, 3804},
	{225, 3801},
	{225, 3797},
	{223, 3793},
	{225, 3791},
	{225, 3787},
	{228, 3785},
	{228, 3782},
	{233, 3781},
	{233, 3777},
	{240, 3777},
	{238, 3775},
	{238, 3773},
	{243, 3772},
	{240, 3769},
	{238, 3766},
	{235, 3761},
	{235, 3757},
	{235, 3753},
	{230, 3746},
	{233, 3741},
	{238, 3736},
	{235, 3728},
	{233, 3719},
	{240, 3712},
	{240, 3701},
	{233, 3689},
	{233, 3684},
	{238, 3681},
	{240, 3675},
	{258, 3671},
	{275, 3665},
	{298, 3650},
	{298, 3599},
	{325, 3526},
	{375, 3416},
	{585, 3205},
	{710, 3078},
	{625, 3031},
	{545, 3013}
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = {
	{188, 4173},
	{188, 4155},
	{195, 4142},
	{195, 4127},
	{198, 4115},
	{198, 4102},
	{200, 4091},
	{203, 4078},
	{200, 4066},
	{203, 4055},
	{208, 4045},
	{208, 4034},
	{208, 4023},
	{210, 4012},
	{210, 4002},
	{213, 3992},
	{215, 3984},
	{220, 3975},
	{220, 3966},
	{223, 3957},
	{228, 3949},
	{225, 3940},
	{228, 3932},
	{230, 3924},
	{233, 3917},
	{235, 3910},
	{235, 3903},
	{240, 3896},
	{243, 3888},
	{238, 3880},
	{230, 3870},
	{220, 3857},
	{208, 3845},
	{203, 3836},
	{200, 3830},
	{198, 3822},
	{198, 3818},
	{203, 3813},
	{203, 3809},
	{205, 3805},
	{203, 3801},
	{208, 3797},
	{203, 3792},
	{203, 3789},
	{208, 3787},
	{210, 3784},
	{213, 3781},
	{218, 3780},
	{210, 3776},
	{213, 3774},
	{215, 3772},
	{210, 3768},
	{208, 3764},
	{205, 3759},
	{195, 3751},
	{203, 3749},
	{200, 3745},
	{205, 3741},
	{203, 3735},
	{203, 3731},
	{203, 3725},
	{208, 3720},
	{205, 3712},
	{205, 3703},
	{213, 3697},
	{205, 3685},
	{203, 3677},
	{208, 3675},
	{215, 3675},
	{223, 3672},
	{238, 3669},
	{240, 3655},
	{233, 3612},
	{240, 3545},
	{265, 3449},
	{325, 3279},
	{788, 3091}
};

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif

