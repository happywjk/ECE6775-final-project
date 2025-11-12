set moduleName compute_attention
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
set C_modelName {compute_attention}
set C_modelType { void 0 }
set C_modelArgList {
	{ Q_0 float 32 regular {array 1024 { 1 1 } 1 1 } {global 0}  }
	{ Q_1 float 32 regular {array 1024 { 1 1 } 1 1 } {global 0}  }
	{ Q_2 float 32 regular {array 1024 { 1 1 } 1 1 } {global 0}  }
	{ Q_3 float 32 regular {array 1024 { 1 1 } 1 1 } {global 0}  }
	{ K_0 float 32 regular {array 1024 { 1 1 } 1 1 } {global 0}  }
	{ K_1 float 32 regular {array 1024 { 1 1 } 1 1 } {global 0}  }
	{ K_2 float 32 regular {array 1024 { 1 1 } 1 1 } {global 0}  }
	{ K_3 float 32 regular {array 1024 { 1 1 } 1 1 } {global 0}  }
	{ V_0 float 32 regular {array 1024 { 1 3 } 1 1 } {global 0}  }
	{ V_1 float 32 regular {array 1024 { 1 3 } 1 1 } {global 0}  }
	{ V_2 float 32 regular {array 1024 { 1 3 } 1 1 } {global 0}  }
	{ V_3 float 32 regular {array 1024 { 1 3 } 1 1 } {global 0}  }
	{ OUT_0 float 32 regular {array 1024 { 0 3 } 0 1 } {global 1}  }
	{ OUT_1 float 32 regular {array 1024 { 0 3 } 0 1 } {global 1}  }
	{ OUT_2 float 32 regular {array 1024 { 0 3 } 0 1 } {global 1}  }
	{ OUT_3 float 32 regular {array 1024 { 0 3 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "Q_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "Q_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "Q_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "Q_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "K_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "K_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "K_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "K_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "V_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "V_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "V_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "V_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "OUT_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "OUT_1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "OUT_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "OUT_3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 82
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ Q_0_address0 sc_out sc_lv 10 signal 0 } 
	{ Q_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ Q_0_q0 sc_in sc_lv 32 signal 0 } 
	{ Q_0_address1 sc_out sc_lv 10 signal 0 } 
	{ Q_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ Q_0_q1 sc_in sc_lv 32 signal 0 } 
	{ Q_1_address0 sc_out sc_lv 10 signal 1 } 
	{ Q_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ Q_1_q0 sc_in sc_lv 32 signal 1 } 
	{ Q_1_address1 sc_out sc_lv 10 signal 1 } 
	{ Q_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ Q_1_q1 sc_in sc_lv 32 signal 1 } 
	{ Q_2_address0 sc_out sc_lv 10 signal 2 } 
	{ Q_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ Q_2_q0 sc_in sc_lv 32 signal 2 } 
	{ Q_2_address1 sc_out sc_lv 10 signal 2 } 
	{ Q_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ Q_2_q1 sc_in sc_lv 32 signal 2 } 
	{ Q_3_address0 sc_out sc_lv 10 signal 3 } 
	{ Q_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ Q_3_q0 sc_in sc_lv 32 signal 3 } 
	{ Q_3_address1 sc_out sc_lv 10 signal 3 } 
	{ Q_3_ce1 sc_out sc_logic 1 signal 3 } 
	{ Q_3_q1 sc_in sc_lv 32 signal 3 } 
	{ K_0_address0 sc_out sc_lv 10 signal 4 } 
	{ K_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ K_0_q0 sc_in sc_lv 32 signal 4 } 
	{ K_0_address1 sc_out sc_lv 10 signal 4 } 
	{ K_0_ce1 sc_out sc_logic 1 signal 4 } 
	{ K_0_q1 sc_in sc_lv 32 signal 4 } 
	{ K_1_address0 sc_out sc_lv 10 signal 5 } 
	{ K_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ K_1_q0 sc_in sc_lv 32 signal 5 } 
	{ K_1_address1 sc_out sc_lv 10 signal 5 } 
	{ K_1_ce1 sc_out sc_logic 1 signal 5 } 
	{ K_1_q1 sc_in sc_lv 32 signal 5 } 
	{ K_2_address0 sc_out sc_lv 10 signal 6 } 
	{ K_2_ce0 sc_out sc_logic 1 signal 6 } 
	{ K_2_q0 sc_in sc_lv 32 signal 6 } 
	{ K_2_address1 sc_out sc_lv 10 signal 6 } 
	{ K_2_ce1 sc_out sc_logic 1 signal 6 } 
	{ K_2_q1 sc_in sc_lv 32 signal 6 } 
	{ K_3_address0 sc_out sc_lv 10 signal 7 } 
	{ K_3_ce0 sc_out sc_logic 1 signal 7 } 
	{ K_3_q0 sc_in sc_lv 32 signal 7 } 
	{ K_3_address1 sc_out sc_lv 10 signal 7 } 
	{ K_3_ce1 sc_out sc_logic 1 signal 7 } 
	{ K_3_q1 sc_in sc_lv 32 signal 7 } 
	{ V_0_address0 sc_out sc_lv 10 signal 8 } 
	{ V_0_ce0 sc_out sc_logic 1 signal 8 } 
	{ V_0_q0 sc_in sc_lv 32 signal 8 } 
	{ V_1_address0 sc_out sc_lv 10 signal 9 } 
	{ V_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ V_1_q0 sc_in sc_lv 32 signal 9 } 
	{ V_2_address0 sc_out sc_lv 10 signal 10 } 
	{ V_2_ce0 sc_out sc_logic 1 signal 10 } 
	{ V_2_q0 sc_in sc_lv 32 signal 10 } 
	{ V_3_address0 sc_out sc_lv 10 signal 11 } 
	{ V_3_ce0 sc_out sc_logic 1 signal 11 } 
	{ V_3_q0 sc_in sc_lv 32 signal 11 } 
	{ OUT_0_address0 sc_out sc_lv 10 signal 12 } 
	{ OUT_0_ce0 sc_out sc_logic 1 signal 12 } 
	{ OUT_0_we0 sc_out sc_logic 1 signal 12 } 
	{ OUT_0_d0 sc_out sc_lv 32 signal 12 } 
	{ OUT_1_address0 sc_out sc_lv 10 signal 13 } 
	{ OUT_1_ce0 sc_out sc_logic 1 signal 13 } 
	{ OUT_1_we0 sc_out sc_logic 1 signal 13 } 
	{ OUT_1_d0 sc_out sc_lv 32 signal 13 } 
	{ OUT_2_address0 sc_out sc_lv 10 signal 14 } 
	{ OUT_2_ce0 sc_out sc_logic 1 signal 14 } 
	{ OUT_2_we0 sc_out sc_logic 1 signal 14 } 
	{ OUT_2_d0 sc_out sc_lv 32 signal 14 } 
	{ OUT_3_address0 sc_out sc_lv 10 signal 15 } 
	{ OUT_3_ce0 sc_out sc_logic 1 signal 15 } 
	{ OUT_3_we0 sc_out sc_logic 1 signal 15 } 
	{ OUT_3_d0 sc_out sc_lv 32 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "Q_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_0", "role": "address0" }} , 
 	{ "name": "Q_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_0", "role": "ce0" }} , 
 	{ "name": "Q_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_0", "role": "q0" }} , 
 	{ "name": "Q_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_0", "role": "address1" }} , 
 	{ "name": "Q_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_0", "role": "ce1" }} , 
 	{ "name": "Q_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_0", "role": "q1" }} , 
 	{ "name": "Q_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_1", "role": "address0" }} , 
 	{ "name": "Q_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_1", "role": "ce0" }} , 
 	{ "name": "Q_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_1", "role": "q0" }} , 
 	{ "name": "Q_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_1", "role": "address1" }} , 
 	{ "name": "Q_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_1", "role": "ce1" }} , 
 	{ "name": "Q_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_1", "role": "q1" }} , 
 	{ "name": "Q_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_2", "role": "address0" }} , 
 	{ "name": "Q_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_2", "role": "ce0" }} , 
 	{ "name": "Q_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_2", "role": "q0" }} , 
 	{ "name": "Q_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_2", "role": "address1" }} , 
 	{ "name": "Q_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_2", "role": "ce1" }} , 
 	{ "name": "Q_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_2", "role": "q1" }} , 
 	{ "name": "Q_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_3", "role": "address0" }} , 
 	{ "name": "Q_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_3", "role": "ce0" }} , 
 	{ "name": "Q_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_3", "role": "q0" }} , 
 	{ "name": "Q_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Q_3", "role": "address1" }} , 
 	{ "name": "Q_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_3", "role": "ce1" }} , 
 	{ "name": "Q_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_3", "role": "q1" }} , 
 	{ "name": "K_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_0", "role": "address0" }} , 
 	{ "name": "K_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_0", "role": "ce0" }} , 
 	{ "name": "K_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_0", "role": "q0" }} , 
 	{ "name": "K_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_0", "role": "address1" }} , 
 	{ "name": "K_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_0", "role": "ce1" }} , 
 	{ "name": "K_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_0", "role": "q1" }} , 
 	{ "name": "K_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_1", "role": "address0" }} , 
 	{ "name": "K_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_1", "role": "ce0" }} , 
 	{ "name": "K_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_1", "role": "q0" }} , 
 	{ "name": "K_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_1", "role": "address1" }} , 
 	{ "name": "K_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_1", "role": "ce1" }} , 
 	{ "name": "K_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_1", "role": "q1" }} , 
 	{ "name": "K_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_2", "role": "address0" }} , 
 	{ "name": "K_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_2", "role": "ce0" }} , 
 	{ "name": "K_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_2", "role": "q0" }} , 
 	{ "name": "K_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_2", "role": "address1" }} , 
 	{ "name": "K_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_2", "role": "ce1" }} , 
 	{ "name": "K_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_2", "role": "q1" }} , 
 	{ "name": "K_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_3", "role": "address0" }} , 
 	{ "name": "K_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_3", "role": "ce0" }} , 
 	{ "name": "K_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_3", "role": "q0" }} , 
 	{ "name": "K_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "K_3", "role": "address1" }} , 
 	{ "name": "K_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "K_3", "role": "ce1" }} , 
 	{ "name": "K_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "K_3", "role": "q1" }} , 
 	{ "name": "V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_0", "role": "address0" }} , 
 	{ "name": "V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_0", "role": "ce0" }} , 
 	{ "name": "V_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_0", "role": "q0" }} , 
 	{ "name": "V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_1", "role": "address0" }} , 
 	{ "name": "V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_1", "role": "ce0" }} , 
 	{ "name": "V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_1", "role": "q0" }} , 
 	{ "name": "V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_2", "role": "address0" }} , 
 	{ "name": "V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_2", "role": "ce0" }} , 
 	{ "name": "V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_2", "role": "q0" }} , 
 	{ "name": "V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "V_3", "role": "address0" }} , 
 	{ "name": "V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "V_3", "role": "ce0" }} , 
 	{ "name": "V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "V_3", "role": "q0" }} , 
 	{ "name": "OUT_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "OUT_0", "role": "address0" }} , 
 	{ "name": "OUT_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_0", "role": "ce0" }} , 
 	{ "name": "OUT_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_0", "role": "we0" }} , 
 	{ "name": "OUT_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_0", "role": "d0" }} , 
 	{ "name": "OUT_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "OUT_1", "role": "address0" }} , 
 	{ "name": "OUT_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_1", "role": "ce0" }} , 
 	{ "name": "OUT_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_1", "role": "we0" }} , 
 	{ "name": "OUT_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_1", "role": "d0" }} , 
 	{ "name": "OUT_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "OUT_2", "role": "address0" }} , 
 	{ "name": "OUT_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_2", "role": "ce0" }} , 
 	{ "name": "OUT_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_2", "role": "we0" }} , 
 	{ "name": "OUT_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_2", "role": "d0" }} , 
 	{ "name": "OUT_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "OUT_3", "role": "address0" }} , 
 	{ "name": "OUT_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_3", "role": "ce0" }} , 
 	{ "name": "OUT_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_3", "role": "we0" }} , 
 	{ "name": "OUT_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_3", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_faddfsub_32nsbkb_U14", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_fadd_32ns_32ncud_U15", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_fmul_32ns_32ndEe_U16", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_fmul_32ns_32ndEe_U17", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_fmul_32ns_32ndEe_U18", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_fdiv_32ns_32neOg_U19", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_fcmp_32ns_32nfYi_U20", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_fexp_32ns_32ng8j_U21", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_42_32_1_1_U22", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_42_32_1_1_U23", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_42_32_1_1_U24", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_42_32_1_1_U25", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_42_32_1_1_U26", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U27", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U28", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U29", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U30", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U31", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U32", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U33", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U34", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U35", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U36", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U37", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U38", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U39", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U40", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U41", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U42", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_164_32_1_1_U43", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		OUT_3 {Type O LastRead -1 FirstWrite 109}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "471297", "Max" : "471297"}
	, {"Name" : "Interval", "Min" : "471297", "Max" : "471297"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
	{"Pipeline" : "7", "EnableSignal" : "ap_enable_pp7"}
	{"Pipeline" : "8", "EnableSignal" : "ap_enable_pp8"}
	{"Pipeline" : "9", "EnableSignal" : "ap_enable_pp9"}
	{"Pipeline" : "10", "EnableSignal" : "ap_enable_pp10"}
	{"Pipeline" : "11", "EnableSignal" : "ap_enable_pp11"}
	{"Pipeline" : "12", "EnableSignal" : "ap_enable_pp12"}
	{"Pipeline" : "13", "EnableSignal" : "ap_enable_pp13"}
	{"Pipeline" : "14", "EnableSignal" : "ap_enable_pp14"}
	{"Pipeline" : "15", "EnableSignal" : "ap_enable_pp15"}
	{"Pipeline" : "16", "EnableSignal" : "ap_enable_pp16"}
	{"Pipeline" : "17", "EnableSignal" : "ap_enable_pp17"}
]}

set Spec2ImplPortList { 
	Q_0 { ap_memory {  { Q_0_address0 mem_address 1 10 }  { Q_0_ce0 mem_ce 1 1 }  { Q_0_q0 mem_dout 0 32 }  { Q_0_address1 MemPortADDR2 1 10 }  { Q_0_ce1 MemPortCE2 1 1 }  { Q_0_q1 MemPortDOUT2 0 32 } } }
	Q_1 { ap_memory {  { Q_1_address0 mem_address 1 10 }  { Q_1_ce0 mem_ce 1 1 }  { Q_1_q0 mem_dout 0 32 }  { Q_1_address1 MemPortADDR2 1 10 }  { Q_1_ce1 MemPortCE2 1 1 }  { Q_1_q1 MemPortDOUT2 0 32 } } }
	Q_2 { ap_memory {  { Q_2_address0 mem_address 1 10 }  { Q_2_ce0 mem_ce 1 1 }  { Q_2_q0 mem_dout 0 32 }  { Q_2_address1 MemPortADDR2 1 10 }  { Q_2_ce1 MemPortCE2 1 1 }  { Q_2_q1 MemPortDOUT2 0 32 } } }
	Q_3 { ap_memory {  { Q_3_address0 mem_address 1 10 }  { Q_3_ce0 mem_ce 1 1 }  { Q_3_q0 mem_dout 0 32 }  { Q_3_address1 MemPortADDR2 1 10 }  { Q_3_ce1 MemPortCE2 1 1 }  { Q_3_q1 MemPortDOUT2 0 32 } } }
	K_0 { ap_memory {  { K_0_address0 mem_address 1 10 }  { K_0_ce0 mem_ce 1 1 }  { K_0_q0 mem_dout 0 32 }  { K_0_address1 MemPortADDR2 1 10 }  { K_0_ce1 MemPortCE2 1 1 }  { K_0_q1 MemPortDOUT2 0 32 } } }
	K_1 { ap_memory {  { K_1_address0 mem_address 1 10 }  { K_1_ce0 mem_ce 1 1 }  { K_1_q0 mem_dout 0 32 }  { K_1_address1 MemPortADDR2 1 10 }  { K_1_ce1 MemPortCE2 1 1 }  { K_1_q1 MemPortDOUT2 0 32 } } }
	K_2 { ap_memory {  { K_2_address0 mem_address 1 10 }  { K_2_ce0 mem_ce 1 1 }  { K_2_q0 mem_dout 0 32 }  { K_2_address1 MemPortADDR2 1 10 }  { K_2_ce1 MemPortCE2 1 1 }  { K_2_q1 MemPortDOUT2 0 32 } } }
	K_3 { ap_memory {  { K_3_address0 mem_address 1 10 }  { K_3_ce0 mem_ce 1 1 }  { K_3_q0 mem_dout 0 32 }  { K_3_address1 MemPortADDR2 1 10 }  { K_3_ce1 MemPortCE2 1 1 }  { K_3_q1 MemPortDOUT2 0 32 } } }
	V_0 { ap_memory {  { V_0_address0 mem_address 1 10 }  { V_0_ce0 mem_ce 1 1 }  { V_0_q0 mem_dout 0 32 } } }
	V_1 { ap_memory {  { V_1_address0 mem_address 1 10 }  { V_1_ce0 mem_ce 1 1 }  { V_1_q0 mem_dout 0 32 } } }
	V_2 { ap_memory {  { V_2_address0 mem_address 1 10 }  { V_2_ce0 mem_ce 1 1 }  { V_2_q0 mem_dout 0 32 } } }
	V_3 { ap_memory {  { V_3_address0 mem_address 1 10 }  { V_3_ce0 mem_ce 1 1 }  { V_3_q0 mem_dout 0 32 } } }
	OUT_0 { ap_memory {  { OUT_0_address0 mem_address 1 10 }  { OUT_0_ce0 mem_ce 1 1 }  { OUT_0_we0 mem_we 1 1 }  { OUT_0_d0 mem_din 1 32 } } }
	OUT_1 { ap_memory {  { OUT_1_address0 mem_address 1 10 }  { OUT_1_ce0 mem_ce 1 1 }  { OUT_1_we0 mem_we 1 1 }  { OUT_1_d0 mem_din 1 32 } } }
	OUT_2 { ap_memory {  { OUT_2_address0 mem_address 1 10 }  { OUT_2_ce0 mem_ce 1 1 }  { OUT_2_we0 mem_we 1 1 }  { OUT_2_d0 mem_din 1 32 } } }
	OUT_3 { ap_memory {  { OUT_3_address0 mem_address 1 10 }  { OUT_3_ce0 mem_ce 1 1 }  { OUT_3_we0 mem_we 1 1 }  { OUT_3_d0 mem_din 1 32 } } }
}
