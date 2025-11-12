set moduleName load_and_rearrange_q
set isTopModule 0
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
set C_modelName {load_and_rearrange_q}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_data float 32 regular {array 12288 { 1 1 } 1 1 }  }
	{ Q_0 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ Q_1 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ Q_2 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ Q_3 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ K_0 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ K_1 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ K_2 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ K_3 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ V_0 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ V_1 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ V_2 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
	{ V_3 float 32 regular {array 1024 { 0 0 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_data", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Q_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "Q_1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "Q_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "Q_3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "K_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "K_1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "K_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "K_3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "V_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "V_1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "V_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "V_3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 108
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
	{ Q_0_address0 sc_out sc_lv 10 signal 1 } 
	{ Q_0_ce0 sc_out sc_logic 1 signal 1 } 
	{ Q_0_we0 sc_out sc_logic 1 signal 1 } 
	{ Q_0_d0 sc_out sc_lv 32 signal 1 } 
	{ Q_0_address1 sc_out sc_lv 10 signal 1 } 
	{ Q_0_ce1 sc_out sc_logic 1 signal 1 } 
	{ Q_0_we1 sc_out sc_logic 1 signal 1 } 
	{ Q_0_d1 sc_out sc_lv 32 signal 1 } 
	{ Q_1_address0 sc_out sc_lv 10 signal 2 } 
	{ Q_1_ce0 sc_out sc_logic 1 signal 2 } 
	{ Q_1_we0 sc_out sc_logic 1 signal 2 } 
	{ Q_1_d0 sc_out sc_lv 32 signal 2 } 
	{ Q_1_address1 sc_out sc_lv 10 signal 2 } 
	{ Q_1_ce1 sc_out sc_logic 1 signal 2 } 
	{ Q_1_we1 sc_out sc_logic 1 signal 2 } 
	{ Q_1_d1 sc_out sc_lv 32 signal 2 } 
	{ Q_2_address0 sc_out sc_lv 10 signal 3 } 
	{ Q_2_ce0 sc_out sc_logic 1 signal 3 } 
	{ Q_2_we0 sc_out sc_logic 1 signal 3 } 
	{ Q_2_d0 sc_out sc_lv 32 signal 3 } 
	{ Q_2_address1 sc_out sc_lv 10 signal 3 } 
	{ Q_2_ce1 sc_out sc_logic 1 signal 3 } 
	{ Q_2_we1 sc_out sc_logic 1 signal 3 } 
	{ Q_2_d1 sc_out sc_lv 32 signal 3 } 
	{ Q_3_address0 sc_out sc_lv 10 signal 4 } 
	{ Q_3_ce0 sc_out sc_logic 1 signal 4 } 
	{ Q_3_we0 sc_out sc_logic 1 signal 4 } 
	{ Q_3_d0 sc_out sc_lv 32 signal 4 } 
	{ Q_3_address1 sc_out sc_lv 10 signal 4 } 
	{ Q_3_ce1 sc_out sc_logic 1 signal 4 } 
	{ Q_3_we1 sc_out sc_logic 1 signal 4 } 
	{ Q_3_d1 sc_out sc_lv 32 signal 4 } 
	{ K_0_address0 sc_out sc_lv 10 signal 5 } 
	{ K_0_ce0 sc_out sc_logic 1 signal 5 } 
	{ K_0_we0 sc_out sc_logic 1 signal 5 } 
	{ K_0_d0 sc_out sc_lv 32 signal 5 } 
	{ K_0_address1 sc_out sc_lv 10 signal 5 } 
	{ K_0_ce1 sc_out sc_logic 1 signal 5 } 
	{ K_0_we1 sc_out sc_logic 1 signal 5 } 
	{ K_0_d1 sc_out sc_lv 32 signal 5 } 
	{ K_1_address0 sc_out sc_lv 10 signal 6 } 
	{ K_1_ce0 sc_out sc_logic 1 signal 6 } 
	{ K_1_we0 sc_out sc_logic 1 signal 6 } 
	{ K_1_d0 sc_out sc_lv 32 signal 6 } 
	{ K_1_address1 sc_out sc_lv 10 signal 6 } 
	{ K_1_ce1 sc_out sc_logic 1 signal 6 } 
	{ K_1_we1 sc_out sc_logic 1 signal 6 } 
	{ K_1_d1 sc_out sc_lv 32 signal 6 } 
	{ K_2_address0 sc_out sc_lv 10 signal 7 } 
	{ K_2_ce0 sc_out sc_logic 1 signal 7 } 
	{ K_2_we0 sc_out sc_logic 1 signal 7 } 
	{ K_2_d0 sc_out sc_lv 32 signal 7 } 
	{ K_2_address1 sc_out sc_lv 10 signal 7 } 
	{ K_2_ce1 sc_out sc_logic 1 signal 7 } 
	{ K_2_we1 sc_out sc_logic 1 signal 7 } 
	{ K_2_d1 sc_out sc_lv 32 signal 7 } 
	{ K_3_address0 sc_out sc_lv 10 signal 8 } 
	{ K_3_ce0 sc_out sc_logic 1 signal 8 } 
	{ K_3_we0 sc_out sc_logic 1 signal 8 } 
	{ K_3_d0 sc_out sc_lv 32 signal 8 } 
	{ K_3_address1 sc_out sc_lv 10 signal 8 } 
	{ K_3_ce1 sc_out sc_logic 1 signal 8 } 
	{ K_3_we1 sc_out sc_logic 1 signal 8 } 
	{ K_3_d1 sc_out sc_lv 32 signal 8 } 
	{ V_0_address0 sc_out sc_lv 10 signal 9 } 
	{ V_0_ce0 sc_out sc_logic 1 signal 9 } 
	{ V_0_we0 sc_out sc_logic 1 signal 9 } 
	{ V_0_d0 sc_out sc_lv 32 signal 9 } 
	{ V_0_address1 sc_out sc_lv 10 signal 9 } 
	{ V_0_ce1 sc_out sc_logic 1 signal 9 } 
	{ V_0_we1 sc_out sc_logic 1 signal 9 } 
	{ V_0_d1 sc_out sc_lv 32 signal 9 } 
	{ V_1_address0 sc_out sc_lv 10 signal 10 } 
	{ V_1_ce0 sc_out sc_logic 1 signal 10 } 
	{ V_1_we0 sc_out sc_logic 1 signal 10 } 
	{ V_1_d0 sc_out sc_lv 32 signal 10 } 
	{ V_1_address1 sc_out sc_lv 10 signal 10 } 
	{ V_1_ce1 sc_out sc_logic 1 signal 10 } 
	{ V_1_we1 sc_out sc_logic 1 signal 10 } 
	{ V_1_d1 sc_out sc_lv 32 signal 10 } 
	{ V_2_address0 sc_out sc_lv 10 signal 11 } 
	{ V_2_ce0 sc_out sc_logic 1 signal 11 } 
	{ V_2_we0 sc_out sc_logic 1 signal 11 } 
	{ V_2_d0 sc_out sc_lv 32 signal 11 } 
	{ V_2_address1 sc_out sc_lv 10 signal 11 } 
	{ V_2_ce1 sc_out sc_logic 1 signal 11 } 
	{ V_2_we1 sc_out sc_logic 1 signal 11 } 
	{ V_2_d1 sc_out sc_lv 32 signal 11 } 
	{ V_3_address0 sc_out sc_lv 10 signal 12 } 
	{ V_3_ce0 sc_out sc_logic 1 signal 12 } 
	{ V_3_we0 sc_out sc_logic 1 signal 12 } 
	{ V_3_d0 sc_out sc_lv 32 signal 12 } 
	{ V_3_address1 sc_out sc_lv 10 signal 12 } 
	{ V_3_ce1 sc_out sc_logic 1 signal 12 } 
	{ V_3_we1 sc_out sc_logic 1 signal 12 } 
	{ V_3_d1 sc_out sc_lv 32 signal 12 } 
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
 	{ "name": "Q_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_0", "role": "address0" }} , 
 	{ "name": "Q_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_0", "role": "ce0" }} , 
 	{ "name": "Q_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_0", "role": "we0" }} , 
 	{ "name": "Q_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_0", "role": "d0" }} , 
 	{ "name": "Q_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_0", "role": "address1" }} , 
 	{ "name": "Q_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_0", "role": "ce1" }} , 
 	{ "name": "Q_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_0", "role": "we1" }} , 
 	{ "name": "Q_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_0", "role": "d1" }} , 
 	{ "name": "Q_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_1", "role": "address0" }} , 
 	{ "name": "Q_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_1", "role": "ce0" }} , 
 	{ "name": "Q_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_1", "role": "we0" }} , 
 	{ "name": "Q_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_1", "role": "d0" }} , 
 	{ "name": "Q_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_1", "role": "address1" }} , 
 	{ "name": "Q_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_1", "role": "ce1" }} , 
 	{ "name": "Q_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_1", "role": "we1" }} , 
 	{ "name": "Q_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_1", "role": "d1" }} , 
 	{ "name": "Q_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_2", "role": "address0" }} , 
 	{ "name": "Q_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_2", "role": "ce0" }} , 
 	{ "name": "Q_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_2", "role": "we0" }} , 
 	{ "name": "Q_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_2", "role": "d0" }} , 
 	{ "name": "Q_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_2", "role": "address1" }} , 
 	{ "name": "Q_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_2", "role": "ce1" }} , 
 	{ "name": "Q_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_2", "role": "we1" }} , 
 	{ "name": "Q_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_2", "role": "d1" }} , 
 	{ "name": "Q_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_3", "role": "address0" }} , 
 	{ "name": "Q_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_3", "role": "ce0" }} , 
 	{ "name": "Q_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_3", "role": "we0" }} , 
 	{ "name": "Q_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_3", "role": "d0" }} , 
 	{ "name": "Q_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_3", "role": "address1" }} , 
 	{ "name": "Q_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_3", "role": "ce1" }} , 
 	{ "name": "Q_3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_3", "role": "we1" }} , 
 	{ "name": "Q_3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_3", "role": "d1" }} , 
 	{ "name": "K_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_0", "role": "address0" }} , 
 	{ "name": "K_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_0", "role": "ce0" }} , 
 	{ "name": "K_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_0", "role": "we0" }} , 
 	{ "name": "K_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_0", "role": "d0" }} , 
 	{ "name": "K_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_0", "role": "address1" }} , 
 	{ "name": "K_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_0", "role": "ce1" }} , 
 	{ "name": "K_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_0", "role": "we1" }} , 
 	{ "name": "K_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_0", "role": "d1" }} , 
 	{ "name": "K_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_1", "role": "address0" }} , 
 	{ "name": "K_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_1", "role": "ce0" }} , 
 	{ "name": "K_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_1", "role": "we0" }} , 
 	{ "name": "K_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_1", "role": "d0" }} , 
 	{ "name": "K_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_1", "role": "address1" }} , 
 	{ "name": "K_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_1", "role": "ce1" }} , 
 	{ "name": "K_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_1", "role": "we1" }} , 
 	{ "name": "K_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_1", "role": "d1" }} , 
 	{ "name": "K_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_2", "role": "address0" }} , 
 	{ "name": "K_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_2", "role": "ce0" }} , 
 	{ "name": "K_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_2", "role": "we0" }} , 
 	{ "name": "K_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_2", "role": "d0" }} , 
 	{ "name": "K_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_2", "role": "address1" }} , 
 	{ "name": "K_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_2", "role": "ce1" }} , 
 	{ "name": "K_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_2", "role": "we1" }} , 
 	{ "name": "K_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_2", "role": "d1" }} , 
 	{ "name": "K_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_3", "role": "address0" }} , 
 	{ "name": "K_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_3", "role": "ce0" }} , 
 	{ "name": "K_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_3", "role": "we0" }} , 
 	{ "name": "K_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_3", "role": "d0" }} , 
 	{ "name": "K_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_3", "role": "address1" }} , 
 	{ "name": "K_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_3", "role": "ce1" }} , 
 	{ "name": "K_3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_3", "role": "we1" }} , 
 	{ "name": "K_3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_3", "role": "d1" }} , 
 	{ "name": "V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_0", "role": "address0" }} , 
 	{ "name": "V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_0", "role": "ce0" }} , 
 	{ "name": "V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_0", "role": "we0" }} , 
 	{ "name": "V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_0", "role": "d0" }} , 
 	{ "name": "V_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_0", "role": "address1" }} , 
 	{ "name": "V_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_0", "role": "ce1" }} , 
 	{ "name": "V_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_0", "role": "we1" }} , 
 	{ "name": "V_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_0", "role": "d1" }} , 
 	{ "name": "V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_1", "role": "address0" }} , 
 	{ "name": "V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_1", "role": "ce0" }} , 
 	{ "name": "V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_1", "role": "we0" }} , 
 	{ "name": "V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_1", "role": "d0" }} , 
 	{ "name": "V_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_1", "role": "address1" }} , 
 	{ "name": "V_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_1", "role": "ce1" }} , 
 	{ "name": "V_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_1", "role": "we1" }} , 
 	{ "name": "V_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_1", "role": "d1" }} , 
 	{ "name": "V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_2", "role": "address0" }} , 
 	{ "name": "V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_2", "role": "ce0" }} , 
 	{ "name": "V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_2", "role": "we0" }} , 
 	{ "name": "V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_2", "role": "d0" }} , 
 	{ "name": "V_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_2", "role": "address1" }} , 
 	{ "name": "V_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_2", "role": "ce1" }} , 
 	{ "name": "V_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_2", "role": "we1" }} , 
 	{ "name": "V_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_2", "role": "d1" }} , 
 	{ "name": "V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_3", "role": "address0" }} , 
 	{ "name": "V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_3", "role": "ce0" }} , 
 	{ "name": "V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_3", "role": "we0" }} , 
 	{ "name": "V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_3", "role": "d0" }} , 
 	{ "name": "V_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_3", "role": "address1" }} , 
 	{ "name": "V_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_3", "role": "ce1" }} , 
 	{ "name": "V_3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_3", "role": "we1" }} , 
 	{ "name": "V_3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_3", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "V_3", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
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
		V_3 {Type O LastRead -1 FirstWrite 91}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6147", "Max" : "6147"}
	, {"Name" : "Interval", "Min" : "6147", "Max" : "6147"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	input_data { ap_memory {  { input_data_address0 mem_address 1 14 }  { input_data_ce0 mem_ce 1 1 }  { input_data_q0 mem_dout 0 32 }  { input_data_address1 MemPortADDR2 1 14 }  { input_data_ce1 MemPortCE2 1 1 }  { input_data_q1 MemPortDOUT2 0 32 } } }
	Q_0 { ap_memory {  { Q_0_address0 mem_address 1 10 }  { Q_0_ce0 mem_ce 1 1 }  { Q_0_we0 mem_we 1 1 }  { Q_0_d0 mem_din 1 32 }  { Q_0_address1 MemPortADDR2 1 10 }  { Q_0_ce1 MemPortCE2 1 1 }  { Q_0_we1 MemPortWE2 1 1 }  { Q_0_d1 MemPortDIN2 1 32 } } }
	Q_1 { ap_memory {  { Q_1_address0 mem_address 1 10 }  { Q_1_ce0 mem_ce 1 1 }  { Q_1_we0 mem_we 1 1 }  { Q_1_d0 mem_din 1 32 }  { Q_1_address1 MemPortADDR2 1 10 }  { Q_1_ce1 MemPortCE2 1 1 }  { Q_1_we1 MemPortWE2 1 1 }  { Q_1_d1 MemPortDIN2 1 32 } } }
	Q_2 { ap_memory {  { Q_2_address0 mem_address 1 10 }  { Q_2_ce0 mem_ce 1 1 }  { Q_2_we0 mem_we 1 1 }  { Q_2_d0 mem_din 1 32 }  { Q_2_address1 MemPortADDR2 1 10 }  { Q_2_ce1 MemPortCE2 1 1 }  { Q_2_we1 MemPortWE2 1 1 }  { Q_2_d1 MemPortDIN2 1 32 } } }
	Q_3 { ap_memory {  { Q_3_address0 mem_address 1 10 }  { Q_3_ce0 mem_ce 1 1 }  { Q_3_we0 mem_we 1 1 }  { Q_3_d0 mem_din 1 32 }  { Q_3_address1 MemPortADDR2 1 10 }  { Q_3_ce1 MemPortCE2 1 1 }  { Q_3_we1 MemPortWE2 1 1 }  { Q_3_d1 MemPortDIN2 1 32 } } }
	K_0 { ap_memory {  { K_0_address0 mem_address 1 10 }  { K_0_ce0 mem_ce 1 1 }  { K_0_we0 mem_we 1 1 }  { K_0_d0 mem_din 1 32 }  { K_0_address1 MemPortADDR2 1 10 }  { K_0_ce1 MemPortCE2 1 1 }  { K_0_we1 MemPortWE2 1 1 }  { K_0_d1 MemPortDIN2 1 32 } } }
	K_1 { ap_memory {  { K_1_address0 mem_address 1 10 }  { K_1_ce0 mem_ce 1 1 }  { K_1_we0 mem_we 1 1 }  { K_1_d0 mem_din 1 32 }  { K_1_address1 MemPortADDR2 1 10 }  { K_1_ce1 MemPortCE2 1 1 }  { K_1_we1 MemPortWE2 1 1 }  { K_1_d1 MemPortDIN2 1 32 } } }
	K_2 { ap_memory {  { K_2_address0 mem_address 1 10 }  { K_2_ce0 mem_ce 1 1 }  { K_2_we0 mem_we 1 1 }  { K_2_d0 mem_din 1 32 }  { K_2_address1 MemPortADDR2 1 10 }  { K_2_ce1 MemPortCE2 1 1 }  { K_2_we1 MemPortWE2 1 1 }  { K_2_d1 MemPortDIN2 1 32 } } }
	K_3 { ap_memory {  { K_3_address0 mem_address 1 10 }  { K_3_ce0 mem_ce 1 1 }  { K_3_we0 mem_we 1 1 }  { K_3_d0 mem_din 1 32 }  { K_3_address1 MemPortADDR2 1 10 }  { K_3_ce1 MemPortCE2 1 1 }  { K_3_we1 MemPortWE2 1 1 }  { K_3_d1 MemPortDIN2 1 32 } } }
	V_0 { ap_memory {  { V_0_address0 mem_address 1 10 }  { V_0_ce0 mem_ce 1 1 }  { V_0_we0 mem_we 1 1 }  { V_0_d0 mem_din 1 32 }  { V_0_address1 MemPortADDR2 1 10 }  { V_0_ce1 MemPortCE2 1 1 }  { V_0_we1 MemPortWE2 1 1 }  { V_0_d1 MemPortDIN2 1 32 } } }
	V_1 { ap_memory {  { V_1_address0 mem_address 1 10 }  { V_1_ce0 mem_ce 1 1 }  { V_1_we0 mem_we 1 1 }  { V_1_d0 mem_din 1 32 }  { V_1_address1 MemPortADDR2 1 10 }  { V_1_ce1 MemPortCE2 1 1 }  { V_1_we1 MemPortWE2 1 1 }  { V_1_d1 MemPortDIN2 1 32 } } }
	V_2 { ap_memory {  { V_2_address0 mem_address 1 10 }  { V_2_ce0 mem_ce 1 1 }  { V_2_we0 mem_we 1 1 }  { V_2_d0 mem_din 1 32 }  { V_2_address1 MemPortADDR2 1 10 }  { V_2_ce1 MemPortCE2 1 1 }  { V_2_we1 MemPortWE2 1 1 }  { V_2_d1 MemPortDIN2 1 32 } } }
	V_3 { ap_memory {  { V_3_address0 mem_address 1 10 }  { V_3_ce0 mem_ce 1 1 }  { V_3_we0 mem_we 1 1 }  { V_3_d0 mem_din 1 32 }  { V_3_address1 MemPortADDR2 1 10 }  { V_3_ce1 MemPortCE2 1 1 }  { V_3_we1 MemPortWE2 1 1 }  { V_3_d1 MemPortDIN2 1 32 } } }
}
