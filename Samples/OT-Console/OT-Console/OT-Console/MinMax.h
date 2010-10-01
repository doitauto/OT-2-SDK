/*
	MinMax.h

	This is a typedef and table for Normalized PIDs for display

	Some of this is redundant with NameUnitStrings, but it is just copied
	from an application. The data is handy in this format for user display
*/

typedef struct {
	char	description[64];
	char  units[12];
	double min;
	double max;
} _NORM_PID;

static _NORM_PID NormPids[] = {
	"None - Inactive",							"Volts",		0.0,		5.0,
	"RPM - Engine RPM",							"RPM",		0.0,		10230.0,
	"TP - Throttle Position(abs)",			"%",			0.0,		100.0,
	"LOAD_PCT - Engine Load(calc)",			"%",			0.0,		100.0,
	"SPARKADV - Timing Advance(cyl1)",		"degBTDC",	-64.0,	63.5,
	"MAF - Mass Air Flow",						"g/s",		0.0,		655.35,
	"MAP - Manifold Abs. Presure",			"kPa",		0.0,		255.0,
	"VSS - Vehicle Speed Sensor",				"km/h",		0.0,		255.0,
	"ECT - Engine Coolant Temp",				"degC",		-40.0,	215.0,
	"IAT - Intake Air Temp",					"degC",		-40.0,	215.0,
	"PTO_STAT - PTO Status",					"PTO",		0.0,		1.0,
	"FUEL1_OL - Fuel Sys1 Open Loop",		"OL",			0.0,		1.0,
	"FUEL2_OL - Fuel Sys2 Open Loop",		"OL",			0.0,		1.0,
	"SHRTFT1 - Short Term Fuel Trim 1",		"%",			-100.0,	99.22,
	"LONGFT1 - Long Term Fuel Trim 1",		"%",			-100.0,	99.22,
	"SHRTFT2 - Short Term Fuel Trim 2",		"%",			-100.0,	99.22,
	"LONGFT2 - Long Term Fuel Trim 2",		"%",			-100.0,	99.22,
	"SHRTFT3 - Short Term Fuel Trim 3",		"%",			-100.0,	99.22,
	"LONGFT3 - Long Term Fuel Trim 3",		"%",			-100.0,	99.22,
	"SHRTFT4 - Short Term Fuel Trim 4",		"%",			-100.0,	99.22,
	"LONGFT4 - Long Term Fuel Trim 4",		"%",			-100.0,	99.22,
	"FRP - Fuel Rail Pressure",				"kPa",		0.0,		765.0,
	"FRP_MED - Fuel Rail Pressure",			"kPa",		0.0,		5177.27,
	"FRP_HIGH - Fuel Rail Pressure",			"kPa",		0.0,		655350.0,
	"EQ_RAT - Commanded Equiv. Ratio",		"lambda",	0.0,		1.999,
	"LOAD_ABS - Absolute Load Value",		"%",			0.0,		802.75,	// Clipped from 25700.0!
	"EGR_PCT - Commanded EGR",					"%",			0.0,		100.0,
	"EGR_ERR - EGR Error",						"%",			-100.0,	99.22,
	"TP_R - Throttle Position(rel)",			"%",			0.0,		100.0,
	"TP_B - Throttle Position B(abs)",		"%",			0.0,		100.0,
	"TP_C - Throttle Position C(abs)",		"%",			0.0,		100.0,
	"APP_D - Acc. Pedal Position D",			"%",			0.0,		100.0,
	"APP_E - Acc. Pedal Position D",			"%",			0.0,		100.0,
	"APP_F - Acc. Pedal Position D",			"%",			0.0,		100.0,
	"TAC_PCT - Commanded Throttle",			"%",			0.0,		100.0,
	"EVAP_PCT - Commanded Evap. Purge",		"%",			0.0,		100.0,
	"EVAP_VP - Evap. Vapor Pressure",		"Pa",			-8192.0,	8191.0,
	"AIR_UPS - Secondary Air DNS",			"UPS",		0.0,		1.0,
	"AIR_DNS - Secondary Air DNS",			"DNS",		0.0,		1.0,
	"AIR_OFF - Secondary Air DNS",			"OFF",		0.0,		1.0,
	"FLI - Fuel Level Indicator",				"%",			0.0,		100.0,
	"BARO - Barometric Pressure",				"kPa",		0.0,		255.0,
	"AAT - Ambient Air Temp",					"degC",		-40.0,	215.0,
	"VPWR - Control Module Voltage",			"Volts",		0.0,		65.535,
	"MIL - Malfunction Indicator Lamp",		"MIL",		0.0,		1.0,
	"DTC_CNT - DTC Count",						"DTCs",		0.0,		1023.0,
	"MIL_DIST - Distance MIL active",		"km",			0.0,		65535.0,
	"MIL_TIME - Hours MIL active",			"hours",		0.0,		1023.0,
	"CLR_DIST - Distance MIL clear",			"km",			0.0,		65535.0,
	"WARM_UPS - Warm Ups MIL clear",			"WUs",		0.0,		1023.0,
	"RUNTM - Run Time",							"mins",		0.0,		1023.0,
	"O2S11 - O2 Sensor(NB) 1-1",				"Volts",		0.0,		1.275,
	"SHRTFT11 - O2 Fuel Trim 1-1",			"%",			-100.0,	99.22,
	"O2S12 - O2 Sensor(NB) 1-2",				"Volts",		0.0,		1.275,
	"SHRTFT12 - O2 Fuel Trim 1-2",			"%",			-100.0,	99.22,
	"O2S21 - O2 Sensor(NB) 2-1",				"Volts",		0.0,		1.275,
	"SHRTFT21 - O2 Fuel Trim 2-1",			"%",			-100.0,	99.22,
	"O2S22 - O2 Sensor(NB) 2-2",				"Volts",		0.0,		1.275,
	"SHRTFT22 - O2 Fuel Trim 2-2",			"%",			-100.0,	99.22,
	"O2S31 - O2 Sensor(NB) 3-1",				"Volts",		0.0,		1.275,
	"SHRTFT31 - O2 Fuel Trim 3-1",			"%",			-100.0,	99.22,
	"O2S32 - O2 Sensor(NB) 3-2",				"Volts",		0.0,		1.275,
	"SHRTFT32 - O2 Fuel Trim 3-2",			"%",			-100.0,	99.22,
	"O2S41 - O2 Sensor(NB) 4-1",				"Volts",		0.0,		1.275,
	"SHRTFT41 - O2 Fuel Trim 4-1",			"%",			-100.0,	99.22,
	"O2S42 - O2 Sensor(NB) 4-2",				"Volts",		0.0,		1.275,
	"SHRTFT42 - O2 Fuel Trim 4-2",			"%",			-100.0,	99.22,
	"EQ_RAT11 - WideO2 Equiv-Ratio 1-1",	"lambda",	0.0,		1.999,
	"WO2S11 - WideO2 Voltage 1-1",			"Volts",		0.0,		7.999,
	"EQ_RAT12 - WideO2 Equiv-Ratio 1-2",	"lambda",	0.0,		1.999,
	"WO2S12 - WideO2 Voltage 1-2",			"Volts",		0.0,		7.999,
	"EQ_RAT21 - WideO2 Equiv-Ratio 2-1",	"lambda",	0.0,		1.999,
	"WO2S21 - WideO2 Voltage 2-1",			"Volts",		0.0,		7.999,
	"EQ_RAT22 - WideO2 Equiv-Ratio 2-2",	"lambda",	0.0,		1.999,
	"WO2S22 - WideO2 Voltage 2-2",			"Volts",		0.0,		7.999,
	"EQ_RAT31 - WideO2 Equiv-Ratio 3-1",	"lambda",	0.0,		1.999,
	"WO2S31 - WideO2 Voltage 3-1",			"Volts",		0.0,		7.999,
	"EQ_RAT32 - WideO2 Equiv-Ratio 3-2",	"lambda",	0.0,		1.999,
	"WO2S32 - WideO2 Voltage 3-2",			"Volts",		0.0,		7.999,
	"EQ_RAT41 - WideO2 Equiv-Ratio 4-1",	"lambda",	0.0,		1.999,
	"WO2S41 - WideO2 Voltage 4-1",			"Volts",		0.0,		7.999,
	"EQ_RAT42 - WideO2 Equiv-Ratio 4-2",	"lambda",	0.0,		1.999,
	"WO2S42 - WideO2 Voltage 4-2",			"Volts",		0.0,		7.999,
	"WBEQ_RAT11 - WB-O2 Equiv-Ratio 1-1",	"lambda",	0.0,		1.999,
	"WBO2S11 - WB-O2 Voltage 1-1",			"mA",			-128.0,	127.996,
	"WBEQ_RAT12 - WB-O2 Equiv-Ratio 1-2",	"lambda",	0.0,		1.999,
	"WBO2S12 - WB-O2 Voltage 1-2",			"mA",			-128.0,	127.996,
	"WBEQ_RAT21 - WB-O2 Equiv-Ratio 2-1",	"lambda",	0.0,		1.999,
	"WBO2S21 - WB-O2 Voltage 2-1",			"mA",			-128.0,	127.996,
	"WBEQ_RAT22 - WB-O2 Equiv-Ratio 2-2",	"lambda",	0.0,		1.999,
	"WBO2S22 - WB-O2 Voltage 2-2",			"mA",			-128.0,	127.996,
	"WBEQ_RAT31 - WB-O2 Equiv-Ratio 3-1",	"lambda",	0.0,		1.999,
	"WBO2S31 - WB-O2 Voltage 3-1",			"mA",			-128.0,	127.996,
	"WBEQ_RAT32 - WB-O2 Equiv-Ratio 3-2",	"lambda",	0.0,		1.999,
	"WBO2S32 - WB-O2 Voltage 3-2",			"mA",			-128.0,	127.996,
	"WBEQ_RAT41 - WB-O2 Equiv-Ratio 4-1",	"lambda",	0.0,		1.999,
	"WBO2S41 - WB-O2 Voltage 4-1",			"mA",			-128.0,	127.996,
	"WBEQ_RAT42 - WB-O2 Equiv-Ratio 4-2",	"lambda",	0.0,		1.999,
	"WBO2S42 - WB-O2 Voltage 4-2",			"mA",			-128.0,	127.996,
	"CATEMP11 - Catalyst Temp 1-1",			"degC",		-40.0,	6513.5,
	"CATEMP21 - Catalyst Temp 2-1",			"degC",		-40.0,	6513.5,
	"CATEMP12 - Catalyst Temp 1-2",			"degC",		-40.0,	6513.5,
	"CATEMP22 - Catalyst Temp 2-2",			"degC",		-40.0,	6513.5,
};
