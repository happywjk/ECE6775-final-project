set moduleName top
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {top}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_data float 32 regular {array 12288 { 1 1 } 1 1 }  }
	{ output_data float 32 regular {array 4096 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_data", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_data","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 12287,"step" : 1}]}]}]} , 
 	{ "Name" : "output_data", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "output_data","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 4095,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_data_address0 sc_out sc_lv 14 signal 0 } 
	{ input_data_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_data_q0 sc_in sc_lv 32 signal 0 } 
	{ input_data_address1 sc_out sc_lv 14 signal 0 } 
	{ input_data_ce1 sc_out sc_logic 1 signal 0 } 
	{ input_data_q1 sc_in sc_lv 32 signal 0 } 
	{ output_data_address0 sc_out sc_lv 12 signal 1 } 
	{ output_data_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_data_we0 sc_out sc_logic 1 signal 1 } 
	{ output_data_d0 sc_out sc_lv 32 signal 1 } 
	{ output_data_address1 sc_out sc_lv 12 signal 1 } 
	{ output_data_ce1 sc_out sc_logic 1 signal 1 } 
	{ output_data_we1 sc_out sc_logic 1 signal 1 } 
	{ output_data_d1 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "input_data", "role": "address0" }} , 
 	{ "name": "input_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_data", "role": "ce0" }} , 
 	{ "name": "input_data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_data", "role": "q0" }} , 
 	{ "name": "input_data_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "input_data", "role": "address1" }} , 
 	{ "name": "input_data_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_data", "role": "ce1" }} , 
 	{ "name": "input_data_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_data", "role": "q1" }} , 
 	{ "name": "output_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "output_data", "role": "address0" }} , 
 	{ "name": "output_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_data", "role": "ce0" }} , 
 	{ "name": "output_data_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_data", "role": "we0" }} , 
 	{ "name": "output_data_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_data", "role": "d0" }} , 
 	{ "name": "output_data_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "output_data", "role": "address1" }} , 
 	{ "name": "output_data_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_data", "role": "ce1" }} , 
 	{ "name": "output_data_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_data", "role": "we1" }} , 
 	{ "name": "output_data_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_data", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "48", "49"],
		"CDFG" : "top",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "479500", "EstimateLatencyMax" : "479500",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_attention_fu_56"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_and_rearrange_q_fu_92"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_output_fu_122"}],
		"Port" : [
			{"Name" : "input_data", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "input_data"}]},
			{"Name" : "output_data", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_store_output_fu_122", "Port" : "output_data"}]},
			{"Name" : "Q_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "Q_0"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "Q_0"}]},
			{"Name" : "Q_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "Q_1"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "Q_1"}]},
			{"Name" : "Q_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "Q_2"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "Q_2"}]},
			{"Name" : "Q_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "Q_3"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "Q_3"}]},
			{"Name" : "K_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "K_0"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "K_0"}]},
			{"Name" : "K_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "K_1"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "K_1"}]},
			{"Name" : "K_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "K_2"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "K_2"}]},
			{"Name" : "K_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "K_3"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "K_3"}]},
			{"Name" : "V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "V_0"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "V_0"}]},
			{"Name" : "V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "V_1"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "V_1"}]},
			{"Name" : "V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "V_2"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "V_2"}]},
			{"Name" : "V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_load_and_rearrange_q_fu_92", "Port" : "V_3"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "V_3"}]},
			{"Name" : "OUT_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_store_output_fu_122", "Port" : "OUT_0"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "OUT_0"}]},
			{"Name" : "OUT_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_store_output_fu_122", "Port" : "OUT_1"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "OUT_1"}]},
			{"Name" : "OUT_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_store_output_fu_122", "Port" : "OUT_2"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "OUT_2"}]},
			{"Name" : "OUT_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_store_output_fu_122", "Port" : "OUT_3"},
					{"ID" : "17", "SubInstance" : "grp_compute_attention_fu_56", "Port" : "OUT_3"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Q_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Q_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Q_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Q_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K_1_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K_2_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.V_0_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.V_1_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.V_2_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.V_3_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OUT_0_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OUT_1_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OUT_2_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OUT_3_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56", "Parent" : "0", "Child" : ["18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47"],
		"CDFG" : "compute_attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "471297", "EstimateLatencyMax" : "471297",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Q_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Q_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Q_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Q_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "OUT_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "OUT_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "OUT_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "OUT_3", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_faddfsub_32nsbkb_U14", "Parent" : "17"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_fadd_32ns_32ncud_U15", "Parent" : "17"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_fmul_32ns_32ndEe_U16", "Parent" : "17"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_fmul_32ns_32ndEe_U17", "Parent" : "17"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_fmul_32ns_32ndEe_U18", "Parent" : "17"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_fdiv_32ns_32neOg_U19", "Parent" : "17"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_fcmp_32ns_32nfYi_U20", "Parent" : "17"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_fexp_32ns_32ng8j_U21", "Parent" : "17"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_42_32_1_1_U22", "Parent" : "17"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_42_32_1_1_U23", "Parent" : "17"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_42_32_1_1_U24", "Parent" : "17"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_42_32_1_1_U25", "Parent" : "17"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_42_32_1_1_U26", "Parent" : "17"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U27", "Parent" : "17"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U28", "Parent" : "17"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U29", "Parent" : "17"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U30", "Parent" : "17"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U31", "Parent" : "17"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U32", "Parent" : "17"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U33", "Parent" : "17"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U34", "Parent" : "17"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U35", "Parent" : "17"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U36", "Parent" : "17"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U37", "Parent" : "17"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U38", "Parent" : "17"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U39", "Parent" : "17"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U40", "Parent" : "17"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U41", "Parent" : "17"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U42", "Parent" : "17"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_attention_fu_56.top_mux_164_32_1_1_U43", "Parent" : "17"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_load_and_rearrange_q_fu_92", "Parent" : "0",
		"CDFG" : "load_and_rearrange_q",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6147", "EstimateLatencyMax" : "6147",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Q_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "K_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "K_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "K_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "K_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "V_3", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_store_output_fu_122", "Parent" : "0", "Child" : ["50", "51"],
		"CDFG" : "store_output",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2051", "EstimateLatencyMax" : "2051",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "output_data", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "OUT_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "OUT_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "OUT_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "OUT_3", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_fu_122.top_mux_42_32_1_1_U68", "Parent" : "49"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_fu_122.top_mux_42_32_1_1_U69", "Parent" : "49"}]}


set ArgLastReadFirstWriteLatency {
	top {
		input_data {Type I LastRead 98 FirstWrite -1}
		output_data {Type O LastRead -1 FirstWrite 3}
		Q_0 {Type IO LastRead -1 FirstWrite -1}
		Q_1 {Type IO LastRead -1 FirstWrite -1}
		Q_2 {Type IO LastRead -1 FirstWrite -1}
		Q_3 {Type IO LastRead -1 FirstWrite -1}
		K_0 {Type IO LastRead -1 FirstWrite -1}
		K_1 {Type IO LastRead -1 FirstWrite -1}
		K_2 {Type IO LastRead -1 FirstWrite -1}
		K_3 {Type IO LastRead -1 FirstWrite -1}
		V_0 {Type IO LastRead -1 FirstWrite -1}
		V_1 {Type IO LastRead -1 FirstWrite -1}
		V_2 {Type IO LastRead -1 FirstWrite -1}
		V_3 {Type IO LastRead -1 FirstWrite -1}
		OUT_0 {Type IO LastRead -1 FirstWrite -1}
		OUT_1 {Type IO LastRead -1 FirstWrite -1}
		OUT_2 {Type IO LastRead -1 FirstWrite -1}
		OUT_3 {Type IO LastRead -1 FirstWrite -1}}
	compute_attention {
		Q_0 {Type I LastRead 10 FirstWrite -1}
		Q_1 {Type I LastRead 10 FirstWrite -1}
		Q_2 {Type I LastRead 10 FirstWrite -1}
		Q_3 {Type I LastRead 10 FirstWrite -1}
		K_0 {Type I LastRead 10 FirstWrite -1}
		K_1 {Type I LastRead 10 FirstWrite -1}
		K_2 {Type I LastRead 10 FirstWrite -1}
		K_3 {Type I LastRead 10 FirstWrite -1}
		V_0 {Type I LastRead 138 FirstWrite -1}
		V_1 {Type I LastRead 138 FirstWrite -1}
		V_2 {Type I LastRead 138 FirstWrite -1}
		V_3 {Type I LastRead 138 FirstWrite -1}
		OUT_0 {Type O LastRead -1 FirstWrite 109}
		OUT_1 {Type O LastRead -1 FirstWrite 109}
		OUT_2 {Type O LastRead -1 FirstWrite 109}
		OUT_3 {Type O LastRead -1 FirstWrite 109}}
	load_and_rearrange_q {
		input_data {Type I LastRead 98 FirstWrite -1}
		Q_0 {Type O LastRead -1 FirstWrite 3}
		Q_1 {Type O LastRead -1 FirstWrite 11}
		Q_2 {Type O LastRead -1 FirstWrite 19}
		Q_3 {Type O LastRead -1 FirstWrite 27}
		K_0 {Type O LastRead -1 FirstWrite 35}
		K_1 {Type O LastRead -1 FirstWrite 43}
		K_2 {Type O LastRead -1 FirstWrite 51}
		K_3 {Type O LastRead -1 FirstWrite 59}
		V_0 {Type O LastRead -1 FirstWrite 67}
		V_1 {Type O LastRead -1 FirstWrite 75}
		V_2 {Type O LastRead -1 FirstWrite 83}
		V_3 {Type O LastRead -1 FirstWrite 91}}
	store_output {
		output_data {Type O LastRead -1 FirstWrite 3}
		OUT_0 {Type I LastRead 10 FirstWrite -1}
		OUT_1 {Type I LastRead 10 FirstWrite -1}
		OUT_2 {Type I LastRead 10 FirstWrite -1}
		OUT_3 {Type I LastRead 10 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "479500", "Max" : "479500"}
	, {"Name" : "Interval", "Min" : "479501", "Max" : "479501"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_data { ap_memory {  { input_data_address0 mem_address 1 14 }  { input_data_ce0 mem_ce 1 1 }  { input_data_q0 mem_dout 0 32 }  { input_data_address1 MemPortADDR2 1 14 }  { input_data_ce1 MemPortCE2 1 1 }  { input_data_q1 MemPortDOUT2 0 32 } } }
	output_data { ap_memory {  { output_data_address0 mem_address 1 12 }  { output_data_ce0 mem_ce 1 1 }  { output_data_we0 mem_we 1 1 }  { output_data_d0 mem_din 1 32 }  { output_data_address1 MemPortADDR2 1 12 }  { output_data_ce1 MemPortCE2 1 1 }  { output_data_we1 MemPortWE2 1 1 }  { output_data_d1 MemPortDIN2 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
