# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1 \
    name input_data \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_data \
    op interface \
    ports { input_data_address0 { O 14 vector } input_data_ce0 { O 1 bit } input_data_q0 { I 32 vector } input_data_address1 { O 14 vector } input_data_ce1 { O 1 bit } input_data_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_data'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2 \
    name Q_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename Q_0 \
    op interface \
    ports { Q_0_address0 { O 10 vector } Q_0_ce0 { O 1 bit } Q_0_we0 { O 1 bit } Q_0_d0 { O 32 vector } Q_0_address1 { O 10 vector } Q_0_ce1 { O 1 bit } Q_0_we1 { O 1 bit } Q_0_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'Q_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3 \
    name Q_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename Q_1 \
    op interface \
    ports { Q_1_address0 { O 10 vector } Q_1_ce0 { O 1 bit } Q_1_we0 { O 1 bit } Q_1_d0 { O 32 vector } Q_1_address1 { O 10 vector } Q_1_ce1 { O 1 bit } Q_1_we1 { O 1 bit } Q_1_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'Q_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 4 \
    name Q_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename Q_2 \
    op interface \
    ports { Q_2_address0 { O 10 vector } Q_2_ce0 { O 1 bit } Q_2_we0 { O 1 bit } Q_2_d0 { O 32 vector } Q_2_address1 { O 10 vector } Q_2_ce1 { O 1 bit } Q_2_we1 { O 1 bit } Q_2_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'Q_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 5 \
    name Q_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename Q_3 \
    op interface \
    ports { Q_3_address0 { O 10 vector } Q_3_ce0 { O 1 bit } Q_3_we0 { O 1 bit } Q_3_d0 { O 32 vector } Q_3_address1 { O 10 vector } Q_3_ce1 { O 1 bit } Q_3_we1 { O 1 bit } Q_3_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'Q_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name K_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename K_0 \
    op interface \
    ports { K_0_address0 { O 10 vector } K_0_ce0 { O 1 bit } K_0_we0 { O 1 bit } K_0_d0 { O 32 vector } K_0_address1 { O 10 vector } K_0_ce1 { O 1 bit } K_0_we1 { O 1 bit } K_0_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'K_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name K_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename K_1 \
    op interface \
    ports { K_1_address0 { O 10 vector } K_1_ce0 { O 1 bit } K_1_we0 { O 1 bit } K_1_d0 { O 32 vector } K_1_address1 { O 10 vector } K_1_ce1 { O 1 bit } K_1_we1 { O 1 bit } K_1_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'K_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name K_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename K_2 \
    op interface \
    ports { K_2_address0 { O 10 vector } K_2_ce0 { O 1 bit } K_2_we0 { O 1 bit } K_2_d0 { O 32 vector } K_2_address1 { O 10 vector } K_2_ce1 { O 1 bit } K_2_we1 { O 1 bit } K_2_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'K_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name K_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename K_3 \
    op interface \
    ports { K_3_address0 { O 10 vector } K_3_ce0 { O 1 bit } K_3_we0 { O 1 bit } K_3_d0 { O 32 vector } K_3_address1 { O 10 vector } K_3_ce1 { O 1 bit } K_3_we1 { O 1 bit } K_3_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'K_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name V_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename V_0 \
    op interface \
    ports { V_0_address0 { O 10 vector } V_0_ce0 { O 1 bit } V_0_we0 { O 1 bit } V_0_d0 { O 32 vector } V_0_address1 { O 10 vector } V_0_ce1 { O 1 bit } V_0_we1 { O 1 bit } V_0_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'V_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name V_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename V_1 \
    op interface \
    ports { V_1_address0 { O 10 vector } V_1_ce0 { O 1 bit } V_1_we0 { O 1 bit } V_1_d0 { O 32 vector } V_1_address1 { O 10 vector } V_1_ce1 { O 1 bit } V_1_we1 { O 1 bit } V_1_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'V_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name V_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename V_2 \
    op interface \
    ports { V_2_address0 { O 10 vector } V_2_ce0 { O 1 bit } V_2_we0 { O 1 bit } V_2_d0 { O 32 vector } V_2_address1 { O 10 vector } V_2_ce1 { O 1 bit } V_2_we1 { O 1 bit } V_2_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'V_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name V_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename V_3 \
    op interface \
    ports { V_3_address0 { O 10 vector } V_3_ce0 { O 1 bit } V_3_we0 { O 1 bit } V_3_d0 { O 32 vector } V_3_address1 { O 10 vector } V_3_ce1 { O 1 bit } V_3_we1 { O 1 bit } V_3_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'V_3'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


