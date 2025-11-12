#include "compute_attention.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void compute_attention::thread_K_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            K_0_address0 =  (sc_lv<10>) (zext_ln89_16_fu_5931_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            K_0_address0 =  (sc_lv<10>) (zext_ln89_14_fu_5905_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            K_0_address0 =  (sc_lv<10>) (zext_ln89_12_fu_5879_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            K_0_address0 =  (sc_lv<10>) (zext_ln89_10_fu_5853_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            K_0_address0 =  (sc_lv<10>) (zext_ln89_8_fu_5827_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            K_0_address0 =  (sc_lv<10>) (zext_ln89_6_fu_5801_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            K_0_address0 =  (sc_lv<10>) (zext_ln89_4_fu_5775_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            K_0_address0 =  (sc_lv<10>) (zext_ln89_2_fu_5744_p1.read());
        } else {
            K_0_address0 = "XXXXXXXXXX";
        }
    } else {
        K_0_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_K_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            K_0_address1 =  (sc_lv<10>) (zext_ln89_17_fu_5944_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            K_0_address1 =  (sc_lv<10>) (zext_ln89_15_fu_5918_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            K_0_address1 =  (sc_lv<10>) (zext_ln89_13_fu_5892_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            K_0_address1 =  (sc_lv<10>) (zext_ln89_11_fu_5866_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            K_0_address1 =  (sc_lv<10>) (zext_ln89_9_fu_5840_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            K_0_address1 =  (sc_lv<10>) (zext_ln89_7_fu_5814_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            K_0_address1 =  (sc_lv<10>) (zext_ln89_5_fu_5788_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            K_0_address1 =  (sc_lv<10>) (zext_ln89_3_fu_5758_p1.read());
        } else {
            K_0_address1 = "XXXXXXXXXX";
        }
    } else {
        K_0_address1 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_K_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        K_0_ce0 = ap_const_logic_1;
    } else {
        K_0_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_K_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        K_0_ce1 = ap_const_logic_1;
    } else {
        K_0_ce1 = ap_const_logic_0;
    }
}

void compute_attention::thread_K_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            K_1_address0 =  (sc_lv<10>) (zext_ln89_16_fu_5931_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            K_1_address0 =  (sc_lv<10>) (zext_ln89_14_fu_5905_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            K_1_address0 =  (sc_lv<10>) (zext_ln89_12_fu_5879_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            K_1_address0 =  (sc_lv<10>) (zext_ln89_10_fu_5853_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            K_1_address0 =  (sc_lv<10>) (zext_ln89_8_fu_5827_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            K_1_address0 =  (sc_lv<10>) (zext_ln89_6_fu_5801_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            K_1_address0 =  (sc_lv<10>) (zext_ln89_4_fu_5775_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            K_1_address0 =  (sc_lv<10>) (zext_ln89_2_fu_5744_p1.read());
        } else {
            K_1_address0 = "XXXXXXXXXX";
        }
    } else {
        K_1_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_K_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            K_1_address1 =  (sc_lv<10>) (zext_ln89_17_fu_5944_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            K_1_address1 =  (sc_lv<10>) (zext_ln89_15_fu_5918_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            K_1_address1 =  (sc_lv<10>) (zext_ln89_13_fu_5892_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            K_1_address1 =  (sc_lv<10>) (zext_ln89_11_fu_5866_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            K_1_address1 =  (sc_lv<10>) (zext_ln89_9_fu_5840_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            K_1_address1 =  (sc_lv<10>) (zext_ln89_7_fu_5814_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            K_1_address1 =  (sc_lv<10>) (zext_ln89_5_fu_5788_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            K_1_address1 =  (sc_lv<10>) (zext_ln89_3_fu_5758_p1.read());
        } else {
            K_1_address1 = "XXXXXXXXXX";
        }
    } else {
        K_1_address1 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_K_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        K_1_ce0 = ap_const_logic_1;
    } else {
        K_1_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_K_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        K_1_ce1 = ap_const_logic_1;
    } else {
        K_1_ce1 = ap_const_logic_0;
    }
}

void compute_attention::thread_K_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            K_2_address0 =  (sc_lv<10>) (zext_ln89_16_fu_5931_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            K_2_address0 =  (sc_lv<10>) (zext_ln89_14_fu_5905_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            K_2_address0 =  (sc_lv<10>) (zext_ln89_12_fu_5879_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            K_2_address0 =  (sc_lv<10>) (zext_ln89_10_fu_5853_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            K_2_address0 =  (sc_lv<10>) (zext_ln89_8_fu_5827_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            K_2_address0 =  (sc_lv<10>) (zext_ln89_6_fu_5801_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            K_2_address0 =  (sc_lv<10>) (zext_ln89_4_fu_5775_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            K_2_address0 =  (sc_lv<10>) (zext_ln89_2_fu_5744_p1.read());
        } else {
            K_2_address0 = "XXXXXXXXXX";
        }
    } else {
        K_2_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_K_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            K_2_address1 =  (sc_lv<10>) (zext_ln89_17_fu_5944_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            K_2_address1 =  (sc_lv<10>) (zext_ln89_15_fu_5918_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            K_2_address1 =  (sc_lv<10>) (zext_ln89_13_fu_5892_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            K_2_address1 =  (sc_lv<10>) (zext_ln89_11_fu_5866_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            K_2_address1 =  (sc_lv<10>) (zext_ln89_9_fu_5840_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            K_2_address1 =  (sc_lv<10>) (zext_ln89_7_fu_5814_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            K_2_address1 =  (sc_lv<10>) (zext_ln89_5_fu_5788_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            K_2_address1 =  (sc_lv<10>) (zext_ln89_3_fu_5758_p1.read());
        } else {
            K_2_address1 = "XXXXXXXXXX";
        }
    } else {
        K_2_address1 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_K_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        K_2_ce0 = ap_const_logic_1;
    } else {
        K_2_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_K_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        K_2_ce1 = ap_const_logic_1;
    } else {
        K_2_ce1 = ap_const_logic_0;
    }
}

void compute_attention::thread_K_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            K_3_address0 =  (sc_lv<10>) (zext_ln89_16_fu_5931_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            K_3_address0 =  (sc_lv<10>) (zext_ln89_14_fu_5905_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            K_3_address0 =  (sc_lv<10>) (zext_ln89_12_fu_5879_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            K_3_address0 =  (sc_lv<10>) (zext_ln89_10_fu_5853_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            K_3_address0 =  (sc_lv<10>) (zext_ln89_8_fu_5827_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            K_3_address0 =  (sc_lv<10>) (zext_ln89_6_fu_5801_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            K_3_address0 =  (sc_lv<10>) (zext_ln89_4_fu_5775_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            K_3_address0 =  (sc_lv<10>) (zext_ln89_2_fu_5744_p1.read());
        } else {
            K_3_address0 = "XXXXXXXXXX";
        }
    } else {
        K_3_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_K_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            K_3_address1 =  (sc_lv<10>) (zext_ln89_17_fu_5944_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            K_3_address1 =  (sc_lv<10>) (zext_ln89_15_fu_5918_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            K_3_address1 =  (sc_lv<10>) (zext_ln89_13_fu_5892_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            K_3_address1 =  (sc_lv<10>) (zext_ln89_11_fu_5866_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            K_3_address1 =  (sc_lv<10>) (zext_ln89_9_fu_5840_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            K_3_address1 =  (sc_lv<10>) (zext_ln89_7_fu_5814_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            K_3_address1 =  (sc_lv<10>) (zext_ln89_5_fu_5788_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            K_3_address1 =  (sc_lv<10>) (zext_ln89_3_fu_5758_p1.read());
        } else {
            K_3_address1 = "XXXXXXXXXX";
        }
    } else {
        K_3_address1 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_K_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        K_3_ce0 = ap_const_logic_1;
    } else {
        K_3_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_K_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        K_3_ce1 = ap_const_logic_1;
    } else {
        K_3_ce1 = ap_const_logic_0;
    }
}

void compute_attention::thread_OUT_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        OUT_0_address0 = OUT_0_addr_15_reg_7617.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        OUT_0_address0 = OUT_0_addr_14_reg_7612.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        OUT_0_address0 = OUT_0_addr_13_reg_7607.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        OUT_0_address0 = OUT_0_addr_12_reg_7602.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        OUT_0_address0 = OUT_0_addr_11_reg_7597.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        OUT_0_address0 = OUT_0_addr_10_reg_7592.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        OUT_0_address0 = OUT_0_addr_9_reg_7587.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        OUT_0_address0 = OUT_0_addr_8_reg_7582.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        OUT_0_address0 = OUT_0_addr_7_reg_7577.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        OUT_0_address0 = OUT_0_addr_6_reg_7572.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        OUT_0_address0 = OUT_0_addr_5_reg_7567.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        OUT_0_address0 = OUT_0_addr_4_reg_7562.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        OUT_0_address0 = OUT_0_addr_3_reg_7557.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        OUT_0_address0 = OUT_0_addr_2_reg_7552.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        OUT_0_address0 = OUT_0_addr_1_reg_7547.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        OUT_0_address0 = OUT_0_addr_reg_7542.read();
    } else {
        OUT_0_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_OUT_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()))) {
        OUT_0_ce0 = ap_const_logic_1;
    } else {
        OUT_0_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_OUT_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        OUT_0_d0 = acc_0_15_reg_5009.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        OUT_0_d0 = acc_0_14_reg_4982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        OUT_0_d0 = acc_0_13_reg_4955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        OUT_0_d0 = acc_0_12_reg_4928.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        OUT_0_d0 = acc_0_11_reg_4901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        OUT_0_d0 = acc_0_10_reg_4874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        OUT_0_d0 = acc_0_9_reg_4847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        OUT_0_d0 = acc_0_8_reg_4820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        OUT_0_d0 = acc_0_7_reg_4793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        OUT_0_d0 = acc_0_6_reg_4766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        OUT_0_d0 = acc_0_5_reg_4739.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        OUT_0_d0 = acc_0_4_reg_4712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        OUT_0_d0 = acc_0_3_reg_4685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        OUT_0_d0 = acc_0_2_reg_4658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        OUT_0_d0 = acc_0_1_reg_4631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        OUT_0_d0 = acc_0_0_reg_4604.read();
    } else {
        OUT_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_OUT_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_0)))) {
        OUT_0_we0 = ap_const_logic_1;
    } else {
        OUT_0_we0 = ap_const_logic_0;
    }
}

void compute_attention::thread_OUT_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        OUT_1_address0 = OUT_1_addr_15_reg_7697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        OUT_1_address0 = OUT_1_addr_14_reg_7692.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        OUT_1_address0 = OUT_1_addr_13_reg_7687.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        OUT_1_address0 = OUT_1_addr_12_reg_7682.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        OUT_1_address0 = OUT_1_addr_11_reg_7677.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        OUT_1_address0 = OUT_1_addr_10_reg_7672.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        OUT_1_address0 = OUT_1_addr_9_reg_7667.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        OUT_1_address0 = OUT_1_addr_8_reg_7662.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        OUT_1_address0 = OUT_1_addr_7_reg_7657.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        OUT_1_address0 = OUT_1_addr_6_reg_7652.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        OUT_1_address0 = OUT_1_addr_5_reg_7647.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        OUT_1_address0 = OUT_1_addr_4_reg_7642.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        OUT_1_address0 = OUT_1_addr_3_reg_7637.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        OUT_1_address0 = OUT_1_addr_2_reg_7632.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        OUT_1_address0 = OUT_1_addr_1_reg_7627.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        OUT_1_address0 = OUT_1_addr_reg_7622.read();
    } else {
        OUT_1_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_OUT_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()))) {
        OUT_1_ce0 = ap_const_logic_1;
    } else {
        OUT_1_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_OUT_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        OUT_1_d0 = acc_0_15_reg_5009.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        OUT_1_d0 = acc_0_14_reg_4982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        OUT_1_d0 = acc_0_13_reg_4955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        OUT_1_d0 = acc_0_12_reg_4928.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        OUT_1_d0 = acc_0_11_reg_4901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        OUT_1_d0 = acc_0_10_reg_4874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        OUT_1_d0 = acc_0_9_reg_4847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        OUT_1_d0 = acc_0_8_reg_4820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        OUT_1_d0 = acc_0_7_reg_4793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        OUT_1_d0 = acc_0_6_reg_4766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        OUT_1_d0 = acc_0_5_reg_4739.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        OUT_1_d0 = acc_0_4_reg_4712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        OUT_1_d0 = acc_0_3_reg_4685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        OUT_1_d0 = acc_0_2_reg_4658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        OUT_1_d0 = acc_0_1_reg_4631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        OUT_1_d0 = acc_0_0_reg_4604.read();
    } else {
        OUT_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_OUT_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_1)))) {
        OUT_1_we0 = ap_const_logic_1;
    } else {
        OUT_1_we0 = ap_const_logic_0;
    }
}

void compute_attention::thread_OUT_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        OUT_2_address0 = OUT_2_addr_15_reg_7777.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        OUT_2_address0 = OUT_2_addr_14_reg_7772.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        OUT_2_address0 = OUT_2_addr_13_reg_7767.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        OUT_2_address0 = OUT_2_addr_12_reg_7762.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        OUT_2_address0 = OUT_2_addr_11_reg_7757.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        OUT_2_address0 = OUT_2_addr_10_reg_7752.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        OUT_2_address0 = OUT_2_addr_9_reg_7747.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        OUT_2_address0 = OUT_2_addr_8_reg_7742.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        OUT_2_address0 = OUT_2_addr_7_reg_7737.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        OUT_2_address0 = OUT_2_addr_6_reg_7732.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        OUT_2_address0 = OUT_2_addr_5_reg_7727.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        OUT_2_address0 = OUT_2_addr_4_reg_7722.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        OUT_2_address0 = OUT_2_addr_3_reg_7717.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        OUT_2_address0 = OUT_2_addr_2_reg_7712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        OUT_2_address0 = OUT_2_addr_1_reg_7707.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        OUT_2_address0 = OUT_2_addr_reg_7702.read();
    } else {
        OUT_2_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_OUT_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()))) {
        OUT_2_ce0 = ap_const_logic_1;
    } else {
        OUT_2_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_OUT_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        OUT_2_d0 = acc_0_15_reg_5009.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        OUT_2_d0 = acc_0_14_reg_4982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        OUT_2_d0 = acc_0_13_reg_4955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        OUT_2_d0 = acc_0_12_reg_4928.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        OUT_2_d0 = acc_0_11_reg_4901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        OUT_2_d0 = acc_0_10_reg_4874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        OUT_2_d0 = acc_0_9_reg_4847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        OUT_2_d0 = acc_0_8_reg_4820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        OUT_2_d0 = acc_0_7_reg_4793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        OUT_2_d0 = acc_0_6_reg_4766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        OUT_2_d0 = acc_0_5_reg_4739.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        OUT_2_d0 = acc_0_4_reg_4712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        OUT_2_d0 = acc_0_3_reg_4685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        OUT_2_d0 = acc_0_2_reg_4658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        OUT_2_d0 = acc_0_1_reg_4631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        OUT_2_d0 = acc_0_0_reg_4604.read();
    } else {
        OUT_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_OUT_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_2)))) {
        OUT_2_we0 = ap_const_logic_1;
    } else {
        OUT_2_we0 = ap_const_logic_0;
    }
}

void compute_attention::thread_OUT_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        OUT_3_address0 = OUT_3_addr_15_reg_7857.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        OUT_3_address0 = OUT_3_addr_14_reg_7852.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        OUT_3_address0 = OUT_3_addr_13_reg_7847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        OUT_3_address0 = OUT_3_addr_12_reg_7842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        OUT_3_address0 = OUT_3_addr_11_reg_7837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        OUT_3_address0 = OUT_3_addr_10_reg_7832.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        OUT_3_address0 = OUT_3_addr_9_reg_7827.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        OUT_3_address0 = OUT_3_addr_8_reg_7822.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        OUT_3_address0 = OUT_3_addr_7_reg_7817.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        OUT_3_address0 = OUT_3_addr_6_reg_7812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        OUT_3_address0 = OUT_3_addr_5_reg_7807.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        OUT_3_address0 = OUT_3_addr_4_reg_7802.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        OUT_3_address0 = OUT_3_addr_3_reg_7797.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        OUT_3_address0 = OUT_3_addr_2_reg_7792.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        OUT_3_address0 = OUT_3_addr_1_reg_7787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        OUT_3_address0 = OUT_3_addr_reg_7782.read();
    } else {
        OUT_3_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_OUT_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()))) {
        OUT_3_ce0 = ap_const_logic_1;
    } else {
        OUT_3_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_OUT_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        OUT_3_d0 = acc_0_15_reg_5009.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        OUT_3_d0 = acc_0_14_reg_4982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        OUT_3_d0 = acc_0_13_reg_4955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        OUT_3_d0 = acc_0_12_reg_4928.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        OUT_3_d0 = acc_0_11_reg_4901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        OUT_3_d0 = acc_0_10_reg_4874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        OUT_3_d0 = acc_0_9_reg_4847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        OUT_3_d0 = acc_0_8_reg_4820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        OUT_3_d0 = acc_0_7_reg_4793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        OUT_3_d0 = acc_0_6_reg_4766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        OUT_3_d0 = acc_0_5_reg_4739.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        OUT_3_d0 = acc_0_4_reg_4712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        OUT_3_d0 = acc_0_3_reg_4685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        OUT_3_d0 = acc_0_2_reg_4658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        OUT_3_d0 = acc_0_1_reg_4631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        OUT_3_d0 = acc_0_0_reg_4604.read();
    } else {
        OUT_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_OUT_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()) && 
          esl_seteq<1,2,2>(select_ln89_4_reg_7528.read(), ap_const_lv2_3)))) {
        OUT_3_we0 = ap_const_logic_1;
    } else {
        OUT_3_we0 = ap_const_logic_0;
    }
}

void compute_attention::thread_Q_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            Q_0_address0 = Q_0_addr_29_reg_7932.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            Q_0_address0 = Q_0_addr_27_reg_7922.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            Q_0_address0 = Q_0_addr_25_reg_7912.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            Q_0_address0 = Q_0_addr_23_reg_7902.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            Q_0_address0 = Q_0_addr_21_reg_7892.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            Q_0_address0 = Q_0_addr_19_reg_7882.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            Q_0_address0 = Q_0_addr_17_reg_7872.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            Q_0_address0 = Q_0_addr_reg_7862.read();
        } else {
            Q_0_address0 = "XXXXXXXXXX";
        }
    } else {
        Q_0_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_Q_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            Q_0_address1 = Q_0_addr_30_reg_7937.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            Q_0_address1 = Q_0_addr_28_reg_7927.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            Q_0_address1 = Q_0_addr_26_reg_7917.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            Q_0_address1 = Q_0_addr_24_reg_7907.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            Q_0_address1 = Q_0_addr_22_reg_7897.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            Q_0_address1 = Q_0_addr_20_reg_7887.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            Q_0_address1 = Q_0_addr_18_reg_7877.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            Q_0_address1 = Q_0_addr_16_reg_7867.read();
        } else {
            Q_0_address1 = "XXXXXXXXXX";
        }
    } else {
        Q_0_address1 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_Q_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        Q_0_ce0 = ap_const_logic_1;
    } else {
        Q_0_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_Q_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        Q_0_ce1 = ap_const_logic_1;
    } else {
        Q_0_ce1 = ap_const_logic_0;
    }
}

void compute_attention::thread_Q_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            Q_1_address0 = Q_1_addr_29_reg_8012.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            Q_1_address0 = Q_1_addr_27_reg_8002.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            Q_1_address0 = Q_1_addr_25_reg_7992.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            Q_1_address0 = Q_1_addr_23_reg_7982.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            Q_1_address0 = Q_1_addr_21_reg_7972.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            Q_1_address0 = Q_1_addr_19_reg_7962.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            Q_1_address0 = Q_1_addr_17_reg_7952.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            Q_1_address0 = Q_1_addr_reg_7942.read();
        } else {
            Q_1_address0 = "XXXXXXXXXX";
        }
    } else {
        Q_1_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_Q_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            Q_1_address1 = Q_1_addr_30_reg_8017.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            Q_1_address1 = Q_1_addr_28_reg_8007.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            Q_1_address1 = Q_1_addr_26_reg_7997.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            Q_1_address1 = Q_1_addr_24_reg_7987.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            Q_1_address1 = Q_1_addr_22_reg_7977.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            Q_1_address1 = Q_1_addr_20_reg_7967.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            Q_1_address1 = Q_1_addr_18_reg_7957.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            Q_1_address1 = Q_1_addr_16_reg_7947.read();
        } else {
            Q_1_address1 = "XXXXXXXXXX";
        }
    } else {
        Q_1_address1 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_Q_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        Q_1_ce0 = ap_const_logic_1;
    } else {
        Q_1_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_Q_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        Q_1_ce1 = ap_const_logic_1;
    } else {
        Q_1_ce1 = ap_const_logic_0;
    }
}

void compute_attention::thread_Q_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            Q_2_address0 = Q_2_addr_29_reg_8092.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            Q_2_address0 = Q_2_addr_27_reg_8082.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            Q_2_address0 = Q_2_addr_25_reg_8072.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            Q_2_address0 = Q_2_addr_23_reg_8062.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            Q_2_address0 = Q_2_addr_21_reg_8052.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            Q_2_address0 = Q_2_addr_19_reg_8042.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            Q_2_address0 = Q_2_addr_17_reg_8032.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            Q_2_address0 = Q_2_addr_reg_8022.read();
        } else {
            Q_2_address0 = "XXXXXXXXXX";
        }
    } else {
        Q_2_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_Q_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            Q_2_address1 = Q_2_addr_30_reg_8097.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            Q_2_address1 = Q_2_addr_28_reg_8087.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            Q_2_address1 = Q_2_addr_26_reg_8077.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            Q_2_address1 = Q_2_addr_24_reg_8067.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            Q_2_address1 = Q_2_addr_22_reg_8057.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            Q_2_address1 = Q_2_addr_20_reg_8047.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            Q_2_address1 = Q_2_addr_18_reg_8037.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            Q_2_address1 = Q_2_addr_16_reg_8027.read();
        } else {
            Q_2_address1 = "XXXXXXXXXX";
        }
    } else {
        Q_2_address1 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_Q_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        Q_2_ce0 = ap_const_logic_1;
    } else {
        Q_2_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_Q_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        Q_2_ce1 = ap_const_logic_1;
    } else {
        Q_2_ce1 = ap_const_logic_0;
    }
}

void compute_attention::thread_Q_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            Q_3_address0 = Q_3_addr_29_reg_8172.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            Q_3_address0 = Q_3_addr_27_reg_8162.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            Q_3_address0 = Q_3_addr_25_reg_8152.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            Q_3_address0 = Q_3_addr_23_reg_8142.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            Q_3_address0 = Q_3_addr_21_reg_8132.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            Q_3_address0 = Q_3_addr_19_reg_8122.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            Q_3_address0 = Q_3_addr_17_reg_8112.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            Q_3_address0 = Q_3_addr_reg_8102.read();
        } else {
            Q_3_address0 = "XXXXXXXXXX";
        }
    } else {
        Q_3_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_Q_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            Q_3_address1 = Q_3_addr_30_reg_8177.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            Q_3_address1 = Q_3_addr_28_reg_8167.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            Q_3_address1 = Q_3_addr_26_reg_8157.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            Q_3_address1 = Q_3_addr_24_reg_8147.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            Q_3_address1 = Q_3_addr_22_reg_8137.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            Q_3_address1 = Q_3_addr_20_reg_8127.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            Q_3_address1 = Q_3_addr_18_reg_8117.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            Q_3_address1 = Q_3_addr_16_reg_8107.read();
        } else {
            Q_3_address1 = "XXXXXXXXXX";
        }
    } else {
        Q_3_address1 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_Q_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        Q_3_ce0 = ap_const_logic_1;
    } else {
        Q_3_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_Q_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        Q_3_ce1 = ap_const_logic_1;
    } else {
        Q_3_ce1 = ap_const_logic_0;
    }
}

void compute_attention::thread_V_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_31_fu_7414_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_29_fu_7328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_27_fu_7242_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_25_fu_7156_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_23_fu_7070_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_21_fu_6984_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_19_fu_6898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_17_fu_6812_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_15_fu_6726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_13_fu_6640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_11_fu_6554_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_9_fu_6468_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_7_fu_6382_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_5_fu_6296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_3_fu_6210_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        V_0_address0 =  (sc_lv<10>) (zext_ln111_1_fu_6124_p1.read());
    } else {
        V_0_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_V_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)))) {
        V_0_ce0 = ap_const_logic_1;
    } else {
        V_0_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_31_fu_7414_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_29_fu_7328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_27_fu_7242_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_25_fu_7156_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_23_fu_7070_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_21_fu_6984_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_19_fu_6898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_17_fu_6812_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_15_fu_6726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_13_fu_6640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_11_fu_6554_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_9_fu_6468_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_7_fu_6382_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_5_fu_6296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_3_fu_6210_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        V_1_address0 =  (sc_lv<10>) (zext_ln111_1_fu_6124_p1.read());
    } else {
        V_1_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_V_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)))) {
        V_1_ce0 = ap_const_logic_1;
    } else {
        V_1_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_V_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_31_fu_7414_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_29_fu_7328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_27_fu_7242_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_25_fu_7156_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_23_fu_7070_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_21_fu_6984_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_19_fu_6898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_17_fu_6812_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_15_fu_6726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_13_fu_6640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_11_fu_6554_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_9_fu_6468_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_7_fu_6382_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_5_fu_6296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_3_fu_6210_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        V_2_address0 =  (sc_lv<10>) (zext_ln111_1_fu_6124_p1.read());
    } else {
        V_2_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_V_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)))) {
        V_2_ce0 = ap_const_logic_1;
    } else {
        V_2_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_V_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_31_fu_7414_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_29_fu_7328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_27_fu_7242_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_25_fu_7156_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_23_fu_7070_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_21_fu_6984_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_19_fu_6898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_17_fu_6812_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_15_fu_6726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_13_fu_6640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_11_fu_6554_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_9_fu_6468_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_7_fu_6382_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_5_fu_6296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_3_fu_6210_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        V_3_address0 =  (sc_lv<10>) (zext_ln111_1_fu_6124_p1.read());
    } else {
        V_3_address0 = "XXXXXXXXXX";
    }
}

void compute_attention::thread_V_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)))) {
        V_3_ce0 = ap_const_logic_1;
    } else {
        V_3_ce0 = ap_const_logic_0;
    }
}

void compute_attention::thread_add_ln108_10_fu_6955_p2() {
    add_ln108_10_fu_6955_p2 = (!ap_phi_mux_tk3_0_10_phi_fu_4894_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_10_phi_fu_4894_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_11_fu_7041_p2() {
    add_ln108_11_fu_7041_p2 = (!ap_phi_mux_tk3_0_11_phi_fu_4921_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_11_phi_fu_4921_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_12_fu_7127_p2() {
    add_ln108_12_fu_7127_p2 = (!ap_phi_mux_tk3_0_12_phi_fu_4948_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_12_phi_fu_4948_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_13_fu_7213_p2() {
    add_ln108_13_fu_7213_p2 = (!ap_phi_mux_tk3_0_13_phi_fu_4975_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_13_phi_fu_4975_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_14_fu_7299_p2() {
    add_ln108_14_fu_7299_p2 = (!ap_phi_mux_tk3_0_14_phi_fu_5002_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_14_phi_fu_5002_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_15_fu_7385_p2() {
    add_ln108_15_fu_7385_p2 = (!ap_phi_mux_tk3_0_15_phi_fu_5029_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_15_phi_fu_5029_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_1_fu_6181_p2() {
    add_ln108_1_fu_6181_p2 = (!ap_phi_mux_tk3_0_1_phi_fu_4651_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_1_phi_fu_4651_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_2_fu_6267_p2() {
    add_ln108_2_fu_6267_p2 = (!ap_phi_mux_tk3_0_2_phi_fu_4678_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_2_phi_fu_4678_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_3_fu_6353_p2() {
    add_ln108_3_fu_6353_p2 = (!ap_phi_mux_tk3_0_3_phi_fu_4705_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_3_phi_fu_4705_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_4_fu_6439_p2() {
    add_ln108_4_fu_6439_p2 = (!ap_phi_mux_tk3_0_4_phi_fu_4732_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_4_phi_fu_4732_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_5_fu_6525_p2() {
    add_ln108_5_fu_6525_p2 = (!ap_phi_mux_tk3_0_5_phi_fu_4759_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_5_phi_fu_4759_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_6_fu_6611_p2() {
    add_ln108_6_fu_6611_p2 = (!ap_phi_mux_tk3_0_6_phi_fu_4786_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_6_phi_fu_4786_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_7_fu_6697_p2() {
    add_ln108_7_fu_6697_p2 = (!ap_phi_mux_tk3_0_7_phi_fu_4813_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_7_phi_fu_4813_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_8_fu_6783_p2() {
    add_ln108_8_fu_6783_p2 = (!ap_phi_mux_tk3_0_8_phi_fu_4840_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_8_phi_fu_4840_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_9_fu_6869_p2() {
    add_ln108_9_fu_6869_p2 = (!ap_phi_mux_tk3_0_9_phi_fu_4867_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_9_phi_fu_4867_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln108_fu_6101_p2() {
    add_ln108_fu_6101_p2 = (!ap_phi_mux_tk3_0_0_phi_fu_4624_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_tk3_0_0_phi_fu_4624_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compute_attention::thread_add_ln111_10_fu_6965_p2() {
    add_ln111_10_fu_6965_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_20_fu_6961_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_20_fu_6961_p1.read()));
}

void compute_attention::thread_add_ln111_11_fu_7051_p2() {
    add_ln111_11_fu_7051_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_22_fu_7047_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_22_fu_7047_p1.read()));
}

void compute_attention::thread_add_ln111_12_fu_7137_p2() {
    add_ln111_12_fu_7137_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_24_fu_7133_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_24_fu_7133_p1.read()));
}

void compute_attention::thread_add_ln111_13_fu_7223_p2() {
    add_ln111_13_fu_7223_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_26_fu_7219_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_26_fu_7219_p1.read()));
}

void compute_attention::thread_add_ln111_14_fu_7309_p2() {
    add_ln111_14_fu_7309_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_28_fu_7305_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_28_fu_7305_p1.read()));
}

void compute_attention::thread_add_ln111_15_fu_7395_p2() {
    add_ln111_15_fu_7395_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_30_fu_7391_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_30_fu_7391_p1.read()));
}

void compute_attention::thread_add_ln111_1_fu_6191_p2() {
    add_ln111_1_fu_6191_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_2_fu_6187_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_2_fu_6187_p1.read()));
}

void compute_attention::thread_add_ln111_2_fu_6277_p2() {
    add_ln111_2_fu_6277_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_4_fu_6273_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_4_fu_6273_p1.read()));
}

void compute_attention::thread_add_ln111_3_fu_6363_p2() {
    add_ln111_3_fu_6363_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_6_fu_6359_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_6_fu_6359_p1.read()));
}

void compute_attention::thread_add_ln111_4_fu_6449_p2() {
    add_ln111_4_fu_6449_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_8_fu_6445_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_8_fu_6445_p1.read()));
}

void compute_attention::thread_add_ln111_5_fu_6535_p2() {
    add_ln111_5_fu_6535_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_10_fu_6531_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_10_fu_6531_p1.read()));
}

void compute_attention::thread_add_ln111_6_fu_6621_p2() {
    add_ln111_6_fu_6621_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_12_fu_6617_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_12_fu_6617_p1.read()));
}

void compute_attention::thread_add_ln111_7_fu_6707_p2() {
    add_ln111_7_fu_6707_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_14_fu_6703_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_14_fu_6703_p1.read()));
}

void compute_attention::thread_add_ln111_8_fu_6793_p2() {
    add_ln111_8_fu_6793_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_16_fu_6789_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_16_fu_6789_p1.read()));
}

void compute_attention::thread_add_ln111_9_fu_6879_p2() {
    add_ln111_9_fu_6879_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_18_fu_6875_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_18_fu_6875_p1.read()));
}

void compute_attention::thread_add_ln111_fu_6111_p2() {
    add_ln111_fu_6111_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln111_fu_6107_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln111_fu_6107_p1.read()));
}

void compute_attention::thread_add_ln113_fu_5419_p2() {
    add_ln113_fu_5419_p2 = (!zext_ln89_fu_5341_p1.read().is_01() || !zext_ln113_fu_5415_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_fu_5341_p1.read()) + sc_biguint<8>(zext_ln113_fu_5415_p1.read()));
}

void compute_attention::thread_add_ln80_fu_5299_p2() {
    add_ln80_fu_5299_p2 = (!indvar_flatten45_reg_2214.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar_flatten45_reg_2214.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void compute_attention::thread_add_ln81_1_fu_7470_p2() {
    add_ln81_1_fu_7470_p2 = (!indvar_flatten_reg_2236.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten_reg_2236.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void compute_attention::thread_add_ln89_fu_5731_p2() {
    add_ln89_fu_5731_p2 = (!zext_ln89_reg_7502.read().is_01() || !zext_ln89_1_fu_5727_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln89_reg_7502.read()) + sc_biguint<8>(zext_ln89_1_fu_5727_p1.read()));
}

void compute_attention::thread_and_ln89_fu_5369_p2() {
    and_ln89_fu_5369_p2 = (icmp_ln82_fu_5363_p2.read() & xor_ln89_fu_5357_p2.read());
}

void compute_attention::thread_and_ln93_1_fu_6027_p2() {
    and_ln93_1_fu_6027_p2 = (and_ln93_fu_6021_p2.read() & grp_fu_5098_p2.read());
}

void compute_attention::thread_and_ln93_fu_6021_p2() {
    and_ln93_fu_6021_p2 = (or_ln93_fu_6011_p2.read() & or_ln93_1_fu_6017_p2.read());
}

void compute_attention::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void compute_attention::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[3];
}

void compute_attention::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[4];
}

void compute_attention::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[5];
}

void compute_attention::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[6];
}

void compute_attention::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[7];
}

void compute_attention::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[8];
}

void compute_attention::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[9];
}

void compute_attention::thread_ap_CS_fsm_pp10_stage0() {
    ap_CS_fsm_pp10_stage0 = ap_CS_fsm.read()[91];
}

void compute_attention::thread_ap_CS_fsm_pp10_stage1() {
    ap_CS_fsm_pp10_stage1 = ap_CS_fsm.read()[92];
}

void compute_attention::thread_ap_CS_fsm_pp10_stage2() {
    ap_CS_fsm_pp10_stage2 = ap_CS_fsm.read()[93];
}

void compute_attention::thread_ap_CS_fsm_pp10_stage3() {
    ap_CS_fsm_pp10_stage3 = ap_CS_fsm.read()[94];
}

void compute_attention::thread_ap_CS_fsm_pp10_stage4() {
    ap_CS_fsm_pp10_stage4 = ap_CS_fsm.read()[95];
}

void compute_attention::thread_ap_CS_fsm_pp11_stage0() {
    ap_CS_fsm_pp11_stage0 = ap_CS_fsm.read()[97];
}

void compute_attention::thread_ap_CS_fsm_pp11_stage1() {
    ap_CS_fsm_pp11_stage1 = ap_CS_fsm.read()[98];
}

void compute_attention::thread_ap_CS_fsm_pp11_stage2() {
    ap_CS_fsm_pp11_stage2 = ap_CS_fsm.read()[99];
}

void compute_attention::thread_ap_CS_fsm_pp11_stage3() {
    ap_CS_fsm_pp11_stage3 = ap_CS_fsm.read()[100];
}

void compute_attention::thread_ap_CS_fsm_pp11_stage4() {
    ap_CS_fsm_pp11_stage4 = ap_CS_fsm.read()[101];
}

void compute_attention::thread_ap_CS_fsm_pp12_stage0() {
    ap_CS_fsm_pp12_stage0 = ap_CS_fsm.read()[103];
}

void compute_attention::thread_ap_CS_fsm_pp12_stage1() {
    ap_CS_fsm_pp12_stage1 = ap_CS_fsm.read()[104];
}

void compute_attention::thread_ap_CS_fsm_pp12_stage2() {
    ap_CS_fsm_pp12_stage2 = ap_CS_fsm.read()[105];
}

void compute_attention::thread_ap_CS_fsm_pp12_stage3() {
    ap_CS_fsm_pp12_stage3 = ap_CS_fsm.read()[106];
}

void compute_attention::thread_ap_CS_fsm_pp12_stage4() {
    ap_CS_fsm_pp12_stage4 = ap_CS_fsm.read()[107];
}

void compute_attention::thread_ap_CS_fsm_pp13_stage0() {
    ap_CS_fsm_pp13_stage0 = ap_CS_fsm.read()[109];
}

void compute_attention::thread_ap_CS_fsm_pp13_stage1() {
    ap_CS_fsm_pp13_stage1 = ap_CS_fsm.read()[110];
}

void compute_attention::thread_ap_CS_fsm_pp13_stage2() {
    ap_CS_fsm_pp13_stage2 = ap_CS_fsm.read()[111];
}

void compute_attention::thread_ap_CS_fsm_pp13_stage3() {
    ap_CS_fsm_pp13_stage3 = ap_CS_fsm.read()[112];
}

void compute_attention::thread_ap_CS_fsm_pp13_stage4() {
    ap_CS_fsm_pp13_stage4 = ap_CS_fsm.read()[113];
}

void compute_attention::thread_ap_CS_fsm_pp14_stage0() {
    ap_CS_fsm_pp14_stage0 = ap_CS_fsm.read()[115];
}

void compute_attention::thread_ap_CS_fsm_pp14_stage1() {
    ap_CS_fsm_pp14_stage1 = ap_CS_fsm.read()[116];
}

void compute_attention::thread_ap_CS_fsm_pp14_stage2() {
    ap_CS_fsm_pp14_stage2 = ap_CS_fsm.read()[117];
}

void compute_attention::thread_ap_CS_fsm_pp14_stage3() {
    ap_CS_fsm_pp14_stage3 = ap_CS_fsm.read()[118];
}

void compute_attention::thread_ap_CS_fsm_pp14_stage4() {
    ap_CS_fsm_pp14_stage4 = ap_CS_fsm.read()[119];
}

void compute_attention::thread_ap_CS_fsm_pp15_stage0() {
    ap_CS_fsm_pp15_stage0 = ap_CS_fsm.read()[121];
}

void compute_attention::thread_ap_CS_fsm_pp15_stage1() {
    ap_CS_fsm_pp15_stage1 = ap_CS_fsm.read()[122];
}

void compute_attention::thread_ap_CS_fsm_pp15_stage2() {
    ap_CS_fsm_pp15_stage2 = ap_CS_fsm.read()[123];
}

void compute_attention::thread_ap_CS_fsm_pp15_stage3() {
    ap_CS_fsm_pp15_stage3 = ap_CS_fsm.read()[124];
}

void compute_attention::thread_ap_CS_fsm_pp15_stage4() {
    ap_CS_fsm_pp15_stage4 = ap_CS_fsm.read()[125];
}

void compute_attention::thread_ap_CS_fsm_pp16_stage0() {
    ap_CS_fsm_pp16_stage0 = ap_CS_fsm.read()[127];
}

void compute_attention::thread_ap_CS_fsm_pp16_stage1() {
    ap_CS_fsm_pp16_stage1 = ap_CS_fsm.read()[128];
}

void compute_attention::thread_ap_CS_fsm_pp16_stage2() {
    ap_CS_fsm_pp16_stage2 = ap_CS_fsm.read()[129];
}

void compute_attention::thread_ap_CS_fsm_pp16_stage3() {
    ap_CS_fsm_pp16_stage3 = ap_CS_fsm.read()[130];
}

void compute_attention::thread_ap_CS_fsm_pp16_stage4() {
    ap_CS_fsm_pp16_stage4 = ap_CS_fsm.read()[131];
}

void compute_attention::thread_ap_CS_fsm_pp17_stage0() {
    ap_CS_fsm_pp17_stage0 = ap_CS_fsm.read()[133];
}

void compute_attention::thread_ap_CS_fsm_pp17_stage1() {
    ap_CS_fsm_pp17_stage1 = ap_CS_fsm.read()[134];
}

void compute_attention::thread_ap_CS_fsm_pp17_stage2() {
    ap_CS_fsm_pp17_stage2 = ap_CS_fsm.read()[135];
}

void compute_attention::thread_ap_CS_fsm_pp17_stage3() {
    ap_CS_fsm_pp17_stage3 = ap_CS_fsm.read()[136];
}

void compute_attention::thread_ap_CS_fsm_pp17_stage4() {
    ap_CS_fsm_pp17_stage4 = ap_CS_fsm.read()[137];
}

void compute_attention::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[11];
}

void compute_attention::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[12];
}

void compute_attention::thread_ap_CS_fsm_pp1_stage10() {
    ap_CS_fsm_pp1_stage10 = ap_CS_fsm.read()[21];
}

void compute_attention::thread_ap_CS_fsm_pp1_stage4() {
    ap_CS_fsm_pp1_stage4 = ap_CS_fsm.read()[15];
}

void compute_attention::thread_ap_CS_fsm_pp1_stage5() {
    ap_CS_fsm_pp1_stage5 = ap_CS_fsm.read()[16];
}

void compute_attention::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[43];
}

void compute_attention::thread_ap_CS_fsm_pp2_stage1() {
    ap_CS_fsm_pp2_stage1 = ap_CS_fsm.read()[44];
}

void compute_attention::thread_ap_CS_fsm_pp2_stage2() {
    ap_CS_fsm_pp2_stage2 = ap_CS_fsm.read()[45];
}

void compute_attention::thread_ap_CS_fsm_pp2_stage3() {
    ap_CS_fsm_pp2_stage3 = ap_CS_fsm.read()[46];
}

void compute_attention::thread_ap_CS_fsm_pp2_stage4() {
    ap_CS_fsm_pp2_stage4 = ap_CS_fsm.read()[47];
}

void compute_attention::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[49];
}

void compute_attention::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[50];
}

void compute_attention::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[51];
}

void compute_attention::thread_ap_CS_fsm_pp3_stage3() {
    ap_CS_fsm_pp3_stage3 = ap_CS_fsm.read()[52];
}

void compute_attention::thread_ap_CS_fsm_pp3_stage4() {
    ap_CS_fsm_pp3_stage4 = ap_CS_fsm.read()[53];
}

void compute_attention::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[55];
}

void compute_attention::thread_ap_CS_fsm_pp4_stage1() {
    ap_CS_fsm_pp4_stage1 = ap_CS_fsm.read()[56];
}

void compute_attention::thread_ap_CS_fsm_pp4_stage2() {
    ap_CS_fsm_pp4_stage2 = ap_CS_fsm.read()[57];
}

void compute_attention::thread_ap_CS_fsm_pp4_stage3() {
    ap_CS_fsm_pp4_stage3 = ap_CS_fsm.read()[58];
}

void compute_attention::thread_ap_CS_fsm_pp4_stage4() {
    ap_CS_fsm_pp4_stage4 = ap_CS_fsm.read()[59];
}

void compute_attention::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[61];
}

void compute_attention::thread_ap_CS_fsm_pp5_stage1() {
    ap_CS_fsm_pp5_stage1 = ap_CS_fsm.read()[62];
}

void compute_attention::thread_ap_CS_fsm_pp5_stage2() {
    ap_CS_fsm_pp5_stage2 = ap_CS_fsm.read()[63];
}

void compute_attention::thread_ap_CS_fsm_pp5_stage3() {
    ap_CS_fsm_pp5_stage3 = ap_CS_fsm.read()[64];
}

void compute_attention::thread_ap_CS_fsm_pp5_stage4() {
    ap_CS_fsm_pp5_stage4 = ap_CS_fsm.read()[65];
}

void compute_attention::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[67];
}

void compute_attention::thread_ap_CS_fsm_pp6_stage1() {
    ap_CS_fsm_pp6_stage1 = ap_CS_fsm.read()[68];
}

void compute_attention::thread_ap_CS_fsm_pp6_stage2() {
    ap_CS_fsm_pp6_stage2 = ap_CS_fsm.read()[69];
}

void compute_attention::thread_ap_CS_fsm_pp6_stage3() {
    ap_CS_fsm_pp6_stage3 = ap_CS_fsm.read()[70];
}

void compute_attention::thread_ap_CS_fsm_pp6_stage4() {
    ap_CS_fsm_pp6_stage4 = ap_CS_fsm.read()[71];
}

void compute_attention::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[73];
}

void compute_attention::thread_ap_CS_fsm_pp7_stage1() {
    ap_CS_fsm_pp7_stage1 = ap_CS_fsm.read()[74];
}

void compute_attention::thread_ap_CS_fsm_pp7_stage2() {
    ap_CS_fsm_pp7_stage2 = ap_CS_fsm.read()[75];
}

void compute_attention::thread_ap_CS_fsm_pp7_stage3() {
    ap_CS_fsm_pp7_stage3 = ap_CS_fsm.read()[76];
}

void compute_attention::thread_ap_CS_fsm_pp7_stage4() {
    ap_CS_fsm_pp7_stage4 = ap_CS_fsm.read()[77];
}

void compute_attention::thread_ap_CS_fsm_pp8_stage0() {
    ap_CS_fsm_pp8_stage0 = ap_CS_fsm.read()[79];
}

void compute_attention::thread_ap_CS_fsm_pp8_stage1() {
    ap_CS_fsm_pp8_stage1 = ap_CS_fsm.read()[80];
}

void compute_attention::thread_ap_CS_fsm_pp8_stage2() {
    ap_CS_fsm_pp8_stage2 = ap_CS_fsm.read()[81];
}

void compute_attention::thread_ap_CS_fsm_pp8_stage3() {
    ap_CS_fsm_pp8_stage3 = ap_CS_fsm.read()[82];
}

void compute_attention::thread_ap_CS_fsm_pp8_stage4() {
    ap_CS_fsm_pp8_stage4 = ap_CS_fsm.read()[83];
}

void compute_attention::thread_ap_CS_fsm_pp9_stage0() {
    ap_CS_fsm_pp9_stage0 = ap_CS_fsm.read()[85];
}

void compute_attention::thread_ap_CS_fsm_pp9_stage1() {
    ap_CS_fsm_pp9_stage1 = ap_CS_fsm.read()[86];
}

void compute_attention::thread_ap_CS_fsm_pp9_stage2() {
    ap_CS_fsm_pp9_stage2 = ap_CS_fsm.read()[87];
}

void compute_attention::thread_ap_CS_fsm_pp9_stage3() {
    ap_CS_fsm_pp9_stage3 = ap_CS_fsm.read()[88];
}

void compute_attention::thread_ap_CS_fsm_pp9_stage4() {
    ap_CS_fsm_pp9_stage4 = ap_CS_fsm.read()[89];
}

void compute_attention::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void compute_attention::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[22];
}

void compute_attention::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[26];
}

void compute_attention::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[27];
}

void compute_attention::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[42];
}

void compute_attention::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[48];
}

void compute_attention::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[54];
}

void compute_attention::thread_ap_CS_fsm_state175() {
    ap_CS_fsm_state175 = ap_CS_fsm.read()[60];
}

void compute_attention::thread_ap_CS_fsm_state189() {
    ap_CS_fsm_state189 = ap_CS_fsm.read()[66];
}

void compute_attention::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void compute_attention::thread_ap_CS_fsm_state203() {
    ap_CS_fsm_state203 = ap_CS_fsm.read()[72];
}

void compute_attention::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[78];
}

void compute_attention::thread_ap_CS_fsm_state231() {
    ap_CS_fsm_state231 = ap_CS_fsm.read()[84];
}

void compute_attention::thread_ap_CS_fsm_state245() {
    ap_CS_fsm_state245 = ap_CS_fsm.read()[90];
}

void compute_attention::thread_ap_CS_fsm_state259() {
    ap_CS_fsm_state259 = ap_CS_fsm.read()[96];
}

void compute_attention::thread_ap_CS_fsm_state273() {
    ap_CS_fsm_state273 = ap_CS_fsm.read()[102];
}

void compute_attention::thread_ap_CS_fsm_state287() {
    ap_CS_fsm_state287 = ap_CS_fsm.read()[108];
}

void compute_attention::thread_ap_CS_fsm_state301() {
    ap_CS_fsm_state301 = ap_CS_fsm.read()[114];
}

void compute_attention::thread_ap_CS_fsm_state315() {
    ap_CS_fsm_state315 = ap_CS_fsm.read()[120];
}

void compute_attention::thread_ap_CS_fsm_state329() {
    ap_CS_fsm_state329 = ap_CS_fsm.read()[126];
}

void compute_attention::thread_ap_CS_fsm_state343() {
    ap_CS_fsm_state343 = ap_CS_fsm.read()[132];
}

void compute_attention::thread_ap_CS_fsm_state357() {
    ap_CS_fsm_state357 = ap_CS_fsm.read()[138];
}

void compute_attention::thread_ap_CS_fsm_state95() {
    ap_CS_fsm_state95 = ap_CS_fsm.read()[10];
}

void compute_attention::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage0_00001() {
    ap_block_pp0_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage1_00001() {
    ap_block_pp0_stage1_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage2_00001() {
    ap_block_pp0_stage2_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage3_00001() {
    ap_block_pp0_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage4_00001() {
    ap_block_pp0_stage4_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage5_00001() {
    ap_block_pp0_stage5_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage6_00001() {
    ap_block_pp0_stage6_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage7_00001() {
    ap_block_pp0_stage7_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage0() {
    ap_block_pp10_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage0_11001() {
    ap_block_pp10_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage0_subdone() {
    ap_block_pp10_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage1() {
    ap_block_pp10_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage1_11001() {
    ap_block_pp10_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage1_subdone() {
    ap_block_pp10_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage2_11001() {
    ap_block_pp10_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage2_subdone() {
    ap_block_pp10_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage3() {
    ap_block_pp10_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage3_00001() {
    ap_block_pp10_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage3_11001() {
    ap_block_pp10_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage3_subdone() {
    ap_block_pp10_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage4() {
    ap_block_pp10_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp10_stage4_subdone() {
    ap_block_pp10_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage0() {
    ap_block_pp11_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage0_11001() {
    ap_block_pp11_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage0_subdone() {
    ap_block_pp11_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage1() {
    ap_block_pp11_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage1_11001() {
    ap_block_pp11_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage1_subdone() {
    ap_block_pp11_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage2_11001() {
    ap_block_pp11_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage2_subdone() {
    ap_block_pp11_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage3() {
    ap_block_pp11_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage3_00001() {
    ap_block_pp11_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage3_11001() {
    ap_block_pp11_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage3_subdone() {
    ap_block_pp11_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage4() {
    ap_block_pp11_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp11_stage4_subdone() {
    ap_block_pp11_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage0() {
    ap_block_pp12_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage0_11001() {
    ap_block_pp12_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage0_subdone() {
    ap_block_pp12_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage1() {
    ap_block_pp12_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage1_11001() {
    ap_block_pp12_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage1_subdone() {
    ap_block_pp12_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage2_11001() {
    ap_block_pp12_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage2_subdone() {
    ap_block_pp12_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage3() {
    ap_block_pp12_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage3_00001() {
    ap_block_pp12_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage3_11001() {
    ap_block_pp12_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage3_subdone() {
    ap_block_pp12_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage4() {
    ap_block_pp12_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp12_stage4_subdone() {
    ap_block_pp12_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage0() {
    ap_block_pp13_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage0_11001() {
    ap_block_pp13_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage0_subdone() {
    ap_block_pp13_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage1() {
    ap_block_pp13_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage1_11001() {
    ap_block_pp13_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage1_subdone() {
    ap_block_pp13_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage2_11001() {
    ap_block_pp13_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage2_subdone() {
    ap_block_pp13_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage3() {
    ap_block_pp13_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage3_00001() {
    ap_block_pp13_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage3_11001() {
    ap_block_pp13_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage3_subdone() {
    ap_block_pp13_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage4() {
    ap_block_pp13_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp13_stage4_subdone() {
    ap_block_pp13_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage0() {
    ap_block_pp14_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage0_11001() {
    ap_block_pp14_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage0_subdone() {
    ap_block_pp14_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage1() {
    ap_block_pp14_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage1_11001() {
    ap_block_pp14_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage1_subdone() {
    ap_block_pp14_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage2_11001() {
    ap_block_pp14_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage2_subdone() {
    ap_block_pp14_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage3() {
    ap_block_pp14_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage3_00001() {
    ap_block_pp14_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage3_11001() {
    ap_block_pp14_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage3_subdone() {
    ap_block_pp14_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage4() {
    ap_block_pp14_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp14_stage4_subdone() {
    ap_block_pp14_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage0() {
    ap_block_pp15_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage0_11001() {
    ap_block_pp15_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage0_subdone() {
    ap_block_pp15_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage1() {
    ap_block_pp15_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage1_11001() {
    ap_block_pp15_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage1_subdone() {
    ap_block_pp15_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage2_11001() {
    ap_block_pp15_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage2_subdone() {
    ap_block_pp15_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage3() {
    ap_block_pp15_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage3_00001() {
    ap_block_pp15_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage3_11001() {
    ap_block_pp15_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage3_subdone() {
    ap_block_pp15_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage4() {
    ap_block_pp15_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp15_stage4_subdone() {
    ap_block_pp15_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage0() {
    ap_block_pp16_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage0_11001() {
    ap_block_pp16_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage0_subdone() {
    ap_block_pp16_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage1() {
    ap_block_pp16_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage1_11001() {
    ap_block_pp16_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage1_subdone() {
    ap_block_pp16_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage2_11001() {
    ap_block_pp16_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage2_subdone() {
    ap_block_pp16_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage3() {
    ap_block_pp16_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage3_00001() {
    ap_block_pp16_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage3_11001() {
    ap_block_pp16_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage3_subdone() {
    ap_block_pp16_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage4() {
    ap_block_pp16_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp16_stage4_subdone() {
    ap_block_pp16_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage0() {
    ap_block_pp17_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage0_11001() {
    ap_block_pp17_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage0_subdone() {
    ap_block_pp17_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage1() {
    ap_block_pp17_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage1_11001() {
    ap_block_pp17_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage1_subdone() {
    ap_block_pp17_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage2_11001() {
    ap_block_pp17_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage2_subdone() {
    ap_block_pp17_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage3() {
    ap_block_pp17_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage3_00001() {
    ap_block_pp17_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage3_11001() {
    ap_block_pp17_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage3_subdone() {
    ap_block_pp17_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage4() {
    ap_block_pp17_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp17_stage4_subdone() {
    ap_block_pp17_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage0_00001() {
    ap_block_pp1_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage1() {
    ap_block_pp1_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage10_subdone() {
    ap_block_pp1_stage10_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage1_00001() {
    ap_block_pp1_stage1_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage1_subdone() {
    ap_block_pp1_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage2_subdone() {
    ap_block_pp1_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage3_subdone() {
    ap_block_pp1_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage4() {
    ap_block_pp1_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage4_11001() {
    ap_block_pp1_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage4_subdone() {
    ap_block_pp1_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage5_11001() {
    ap_block_pp1_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage5_subdone() {
    ap_block_pp1_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage6_subdone() {
    ap_block_pp1_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage7_subdone() {
    ap_block_pp1_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage8_subdone() {
    ap_block_pp1_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp1_stage9_subdone() {
    ap_block_pp1_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage1() {
    ap_block_pp2_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage1_11001() {
    ap_block_pp2_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage1_subdone() {
    ap_block_pp2_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage2_11001() {
    ap_block_pp2_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage2_subdone() {
    ap_block_pp2_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage3() {
    ap_block_pp2_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage3_00001() {
    ap_block_pp2_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage3_11001() {
    ap_block_pp2_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage3_subdone() {
    ap_block_pp2_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage4() {
    ap_block_pp2_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp2_stage4_subdone() {
    ap_block_pp2_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage1() {
    ap_block_pp3_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage1_11001() {
    ap_block_pp3_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage1_subdone() {
    ap_block_pp3_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage2_11001() {
    ap_block_pp3_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage2_subdone() {
    ap_block_pp3_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage3() {
    ap_block_pp3_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage3_00001() {
    ap_block_pp3_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage3_11001() {
    ap_block_pp3_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage3_subdone() {
    ap_block_pp3_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage4() {
    ap_block_pp3_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp3_stage4_subdone() {
    ap_block_pp3_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage1() {
    ap_block_pp4_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage1_11001() {
    ap_block_pp4_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage1_subdone() {
    ap_block_pp4_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage2_11001() {
    ap_block_pp4_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage2_subdone() {
    ap_block_pp4_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage3() {
    ap_block_pp4_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage3_00001() {
    ap_block_pp4_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage3_11001() {
    ap_block_pp4_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage3_subdone() {
    ap_block_pp4_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage4() {
    ap_block_pp4_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp4_stage4_subdone() {
    ap_block_pp4_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage0() {
    ap_block_pp5_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage0_11001() {
    ap_block_pp5_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage0_subdone() {
    ap_block_pp5_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage1() {
    ap_block_pp5_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage1_11001() {
    ap_block_pp5_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage1_subdone() {
    ap_block_pp5_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage2_11001() {
    ap_block_pp5_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage2_subdone() {
    ap_block_pp5_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage3() {
    ap_block_pp5_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage3_00001() {
    ap_block_pp5_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage3_11001() {
    ap_block_pp5_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage3_subdone() {
    ap_block_pp5_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage4() {
    ap_block_pp5_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp5_stage4_subdone() {
    ap_block_pp5_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage1() {
    ap_block_pp6_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage1_11001() {
    ap_block_pp6_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage1_subdone() {
    ap_block_pp6_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage2_11001() {
    ap_block_pp6_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage2_subdone() {
    ap_block_pp6_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage3() {
    ap_block_pp6_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage3_00001() {
    ap_block_pp6_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage3_11001() {
    ap_block_pp6_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage3_subdone() {
    ap_block_pp6_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage4() {
    ap_block_pp6_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp6_stage4_subdone() {
    ap_block_pp6_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage0() {
    ap_block_pp7_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage0_11001() {
    ap_block_pp7_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage0_subdone() {
    ap_block_pp7_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage1() {
    ap_block_pp7_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage1_11001() {
    ap_block_pp7_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage1_subdone() {
    ap_block_pp7_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage2_11001() {
    ap_block_pp7_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage2_subdone() {
    ap_block_pp7_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage3() {
    ap_block_pp7_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage3_00001() {
    ap_block_pp7_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage3_11001() {
    ap_block_pp7_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage3_subdone() {
    ap_block_pp7_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage4() {
    ap_block_pp7_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp7_stage4_subdone() {
    ap_block_pp7_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage0() {
    ap_block_pp8_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage0_11001() {
    ap_block_pp8_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage0_subdone() {
    ap_block_pp8_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage1() {
    ap_block_pp8_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage1_11001() {
    ap_block_pp8_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage1_subdone() {
    ap_block_pp8_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage2_11001() {
    ap_block_pp8_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage2_subdone() {
    ap_block_pp8_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage3() {
    ap_block_pp8_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage3_00001() {
    ap_block_pp8_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage3_11001() {
    ap_block_pp8_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage3_subdone() {
    ap_block_pp8_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage4() {
    ap_block_pp8_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp8_stage4_subdone() {
    ap_block_pp8_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage0() {
    ap_block_pp9_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage0_11001() {
    ap_block_pp9_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage0_subdone() {
    ap_block_pp9_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage1() {
    ap_block_pp9_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage1_11001() {
    ap_block_pp9_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage1_subdone() {
    ap_block_pp9_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage2_11001() {
    ap_block_pp9_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage2_subdone() {
    ap_block_pp9_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage3() {
    ap_block_pp9_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage3_00001() {
    ap_block_pp9_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage3_11001() {
    ap_block_pp9_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage3_subdone() {
    ap_block_pp9_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage4() {
    ap_block_pp9_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_pp9_stage4_subdone() {
    ap_block_pp9_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state100_pp1_stage4_iter0() {
    ap_block_state100_pp1_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state101_pp1_stage5_iter0() {
    ap_block_state101_pp1_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state102_pp1_stage6_iter0() {
    ap_block_state102_pp1_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state103_pp1_stage7_iter0() {
    ap_block_state103_pp1_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state104_pp1_stage8_iter0() {
    ap_block_state104_pp1_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state105_pp1_stage9_iter0() {
    ap_block_state105_pp1_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state106_pp1_stage10_iter0() {
    ap_block_state106_pp1_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state107_pp1_stage0_iter1() {
    ap_block_state107_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state108_pp1_stage1_iter1() {
    ap_block_state108_pp1_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state109_pp1_stage2_iter1() {
    ap_block_state109_pp1_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state10_pp0_stage7_iter0() {
    ap_block_state10_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state110_pp1_stage3_iter1() {
    ap_block_state110_pp1_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state111_pp1_stage4_iter1() {
    ap_block_state111_pp1_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state112_pp1_stage5_iter1() {
    ap_block_state112_pp1_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state11_pp0_stage0_iter1() {
    ap_block_state11_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state12_pp0_stage1_iter1() {
    ap_block_state12_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state134_pp2_stage0_iter0() {
    ap_block_state134_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state135_pp2_stage1_iter0() {
    ap_block_state135_pp2_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state136_pp2_stage2_iter0() {
    ap_block_state136_pp2_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state137_pp2_stage3_iter0() {
    ap_block_state137_pp2_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state138_pp2_stage4_iter0() {
    ap_block_state138_pp2_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state139_pp2_stage0_iter1() {
    ap_block_state139_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state13_pp0_stage2_iter1() {
    ap_block_state13_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state140_pp2_stage1_iter1() {
    ap_block_state140_pp2_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state141_pp2_stage2_iter1() {
    ap_block_state141_pp2_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state142_pp2_stage3_iter1() {
    ap_block_state142_pp2_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state143_pp2_stage4_iter1() {
    ap_block_state143_pp2_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state144_pp2_stage0_iter2() {
    ap_block_state144_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state145_pp2_stage1_iter2() {
    ap_block_state145_pp2_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state146_pp2_stage2_iter2() {
    ap_block_state146_pp2_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state148_pp3_stage0_iter0() {
    ap_block_state148_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state149_pp3_stage1_iter0() {
    ap_block_state149_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state14_pp0_stage3_iter1() {
    ap_block_state14_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state150_pp3_stage2_iter0() {
    ap_block_state150_pp3_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state151_pp3_stage3_iter0() {
    ap_block_state151_pp3_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state152_pp3_stage4_iter0() {
    ap_block_state152_pp3_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state153_pp3_stage0_iter1() {
    ap_block_state153_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state154_pp3_stage1_iter1() {
    ap_block_state154_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state155_pp3_stage2_iter1() {
    ap_block_state155_pp3_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state156_pp3_stage3_iter1() {
    ap_block_state156_pp3_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state157_pp3_stage4_iter1() {
    ap_block_state157_pp3_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state158_pp3_stage0_iter2() {
    ap_block_state158_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state159_pp3_stage1_iter2() {
    ap_block_state159_pp3_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state15_pp0_stage4_iter1() {
    ap_block_state15_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state160_pp3_stage2_iter2() {
    ap_block_state160_pp3_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state162_pp4_stage0_iter0() {
    ap_block_state162_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state163_pp4_stage1_iter0() {
    ap_block_state163_pp4_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state164_pp4_stage2_iter0() {
    ap_block_state164_pp4_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state165_pp4_stage3_iter0() {
    ap_block_state165_pp4_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state166_pp4_stage4_iter0() {
    ap_block_state166_pp4_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state167_pp4_stage0_iter1() {
    ap_block_state167_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state168_pp4_stage1_iter1() {
    ap_block_state168_pp4_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state169_pp4_stage2_iter1() {
    ap_block_state169_pp4_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state16_pp0_stage5_iter1() {
    ap_block_state16_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state170_pp4_stage3_iter1() {
    ap_block_state170_pp4_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state171_pp4_stage4_iter1() {
    ap_block_state171_pp4_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state172_pp4_stage0_iter2() {
    ap_block_state172_pp4_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state173_pp4_stage1_iter2() {
    ap_block_state173_pp4_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state174_pp4_stage2_iter2() {
    ap_block_state174_pp4_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state176_pp5_stage0_iter0() {
    ap_block_state176_pp5_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state177_pp5_stage1_iter0() {
    ap_block_state177_pp5_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state178_pp5_stage2_iter0() {
    ap_block_state178_pp5_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state179_pp5_stage3_iter0() {
    ap_block_state179_pp5_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state17_pp0_stage6_iter1() {
    ap_block_state17_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state180_pp5_stage4_iter0() {
    ap_block_state180_pp5_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state181_pp5_stage0_iter1() {
    ap_block_state181_pp5_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state182_pp5_stage1_iter1() {
    ap_block_state182_pp5_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state183_pp5_stage2_iter1() {
    ap_block_state183_pp5_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state184_pp5_stage3_iter1() {
    ap_block_state184_pp5_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state185_pp5_stage4_iter1() {
    ap_block_state185_pp5_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state186_pp5_stage0_iter2() {
    ap_block_state186_pp5_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state187_pp5_stage1_iter2() {
    ap_block_state187_pp5_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state188_pp5_stage2_iter2() {
    ap_block_state188_pp5_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state18_pp0_stage7_iter1() {
    ap_block_state18_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state190_pp6_stage0_iter0() {
    ap_block_state190_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state191_pp6_stage1_iter0() {
    ap_block_state191_pp6_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state192_pp6_stage2_iter0() {
    ap_block_state192_pp6_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state193_pp6_stage3_iter0() {
    ap_block_state193_pp6_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state194_pp6_stage4_iter0() {
    ap_block_state194_pp6_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state195_pp6_stage0_iter1() {
    ap_block_state195_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state196_pp6_stage1_iter1() {
    ap_block_state196_pp6_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state197_pp6_stage2_iter1() {
    ap_block_state197_pp6_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state198_pp6_stage3_iter1() {
    ap_block_state198_pp6_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state199_pp6_stage4_iter1() {
    ap_block_state199_pp6_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state19_pp0_stage0_iter2() {
    ap_block_state19_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state200_pp6_stage0_iter2() {
    ap_block_state200_pp6_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state201_pp6_stage1_iter2() {
    ap_block_state201_pp6_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state202_pp6_stage2_iter2() {
    ap_block_state202_pp6_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state204_pp7_stage0_iter0() {
    ap_block_state204_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state205_pp7_stage1_iter0() {
    ap_block_state205_pp7_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state206_pp7_stage2_iter0() {
    ap_block_state206_pp7_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state207_pp7_stage3_iter0() {
    ap_block_state207_pp7_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state208_pp7_stage4_iter0() {
    ap_block_state208_pp7_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state209_pp7_stage0_iter1() {
    ap_block_state209_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state20_pp0_stage1_iter2() {
    ap_block_state20_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state210_pp7_stage1_iter1() {
    ap_block_state210_pp7_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state211_pp7_stage2_iter1() {
    ap_block_state211_pp7_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state212_pp7_stage3_iter1() {
    ap_block_state212_pp7_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state213_pp7_stage4_iter1() {
    ap_block_state213_pp7_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state214_pp7_stage0_iter2() {
    ap_block_state214_pp7_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state215_pp7_stage1_iter2() {
    ap_block_state215_pp7_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state216_pp7_stage2_iter2() {
    ap_block_state216_pp7_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state218_pp8_stage0_iter0() {
    ap_block_state218_pp8_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state219_pp8_stage1_iter0() {
    ap_block_state219_pp8_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state21_pp0_stage2_iter2() {
    ap_block_state21_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state220_pp8_stage2_iter0() {
    ap_block_state220_pp8_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state221_pp8_stage3_iter0() {
    ap_block_state221_pp8_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state222_pp8_stage4_iter0() {
    ap_block_state222_pp8_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state223_pp8_stage0_iter1() {
    ap_block_state223_pp8_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state224_pp8_stage1_iter1() {
    ap_block_state224_pp8_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state225_pp8_stage2_iter1() {
    ap_block_state225_pp8_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state226_pp8_stage3_iter1() {
    ap_block_state226_pp8_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state227_pp8_stage4_iter1() {
    ap_block_state227_pp8_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state228_pp8_stage0_iter2() {
    ap_block_state228_pp8_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state229_pp8_stage1_iter2() {
    ap_block_state229_pp8_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state22_pp0_stage3_iter2() {
    ap_block_state22_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state230_pp8_stage2_iter2() {
    ap_block_state230_pp8_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state232_pp9_stage0_iter0() {
    ap_block_state232_pp9_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state233_pp9_stage1_iter0() {
    ap_block_state233_pp9_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state234_pp9_stage2_iter0() {
    ap_block_state234_pp9_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state235_pp9_stage3_iter0() {
    ap_block_state235_pp9_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state236_pp9_stage4_iter0() {
    ap_block_state236_pp9_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state237_pp9_stage0_iter1() {
    ap_block_state237_pp9_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state238_pp9_stage1_iter1() {
    ap_block_state238_pp9_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state239_pp9_stage2_iter1() {
    ap_block_state239_pp9_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state23_pp0_stage4_iter2() {
    ap_block_state23_pp0_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state240_pp9_stage3_iter1() {
    ap_block_state240_pp9_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state241_pp9_stage4_iter1() {
    ap_block_state241_pp9_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state242_pp9_stage0_iter2() {
    ap_block_state242_pp9_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state243_pp9_stage1_iter2() {
    ap_block_state243_pp9_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state244_pp9_stage2_iter2() {
    ap_block_state244_pp9_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state246_pp10_stage0_iter0() {
    ap_block_state246_pp10_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state247_pp10_stage1_iter0() {
    ap_block_state247_pp10_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state248_pp10_stage2_iter0() {
    ap_block_state248_pp10_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state249_pp10_stage3_iter0() {
    ap_block_state249_pp10_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state24_pp0_stage5_iter2() {
    ap_block_state24_pp0_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state250_pp10_stage4_iter0() {
    ap_block_state250_pp10_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state251_pp10_stage0_iter1() {
    ap_block_state251_pp10_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state252_pp10_stage1_iter1() {
    ap_block_state252_pp10_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state253_pp10_stage2_iter1() {
    ap_block_state253_pp10_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state254_pp10_stage3_iter1() {
    ap_block_state254_pp10_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state255_pp10_stage4_iter1() {
    ap_block_state255_pp10_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state256_pp10_stage0_iter2() {
    ap_block_state256_pp10_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state257_pp10_stage1_iter2() {
    ap_block_state257_pp10_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state258_pp10_stage2_iter2() {
    ap_block_state258_pp10_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state25_pp0_stage6_iter2() {
    ap_block_state25_pp0_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state260_pp11_stage0_iter0() {
    ap_block_state260_pp11_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state261_pp11_stage1_iter0() {
    ap_block_state261_pp11_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state262_pp11_stage2_iter0() {
    ap_block_state262_pp11_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state263_pp11_stage3_iter0() {
    ap_block_state263_pp11_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state264_pp11_stage4_iter0() {
    ap_block_state264_pp11_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state265_pp11_stage0_iter1() {
    ap_block_state265_pp11_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state266_pp11_stage1_iter1() {
    ap_block_state266_pp11_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state267_pp11_stage2_iter1() {
    ap_block_state267_pp11_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state268_pp11_stage3_iter1() {
    ap_block_state268_pp11_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state269_pp11_stage4_iter1() {
    ap_block_state269_pp11_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state26_pp0_stage7_iter2() {
    ap_block_state26_pp0_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state270_pp11_stage0_iter2() {
    ap_block_state270_pp11_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state271_pp11_stage1_iter2() {
    ap_block_state271_pp11_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state272_pp11_stage2_iter2() {
    ap_block_state272_pp11_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state274_pp12_stage0_iter0() {
    ap_block_state274_pp12_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state275_pp12_stage1_iter0() {
    ap_block_state275_pp12_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state276_pp12_stage2_iter0() {
    ap_block_state276_pp12_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state277_pp12_stage3_iter0() {
    ap_block_state277_pp12_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state278_pp12_stage4_iter0() {
    ap_block_state278_pp12_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state279_pp12_stage0_iter1() {
    ap_block_state279_pp12_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state27_pp0_stage0_iter3() {
    ap_block_state27_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state280_pp12_stage1_iter1() {
    ap_block_state280_pp12_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state281_pp12_stage2_iter1() {
    ap_block_state281_pp12_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state282_pp12_stage3_iter1() {
    ap_block_state282_pp12_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state283_pp12_stage4_iter1() {
    ap_block_state283_pp12_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state284_pp12_stage0_iter2() {
    ap_block_state284_pp12_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state285_pp12_stage1_iter2() {
    ap_block_state285_pp12_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state286_pp12_stage2_iter2() {
    ap_block_state286_pp12_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state288_pp13_stage0_iter0() {
    ap_block_state288_pp13_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state289_pp13_stage1_iter0() {
    ap_block_state289_pp13_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state28_pp0_stage1_iter3() {
    ap_block_state28_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state290_pp13_stage2_iter0() {
    ap_block_state290_pp13_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state291_pp13_stage3_iter0() {
    ap_block_state291_pp13_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state292_pp13_stage4_iter0() {
    ap_block_state292_pp13_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state293_pp13_stage0_iter1() {
    ap_block_state293_pp13_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state294_pp13_stage1_iter1() {
    ap_block_state294_pp13_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state295_pp13_stage2_iter1() {
    ap_block_state295_pp13_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state296_pp13_stage3_iter1() {
    ap_block_state296_pp13_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state297_pp13_stage4_iter1() {
    ap_block_state297_pp13_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state298_pp13_stage0_iter2() {
    ap_block_state298_pp13_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state299_pp13_stage1_iter2() {
    ap_block_state299_pp13_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state29_pp0_stage2_iter3() {
    ap_block_state29_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state300_pp13_stage2_iter2() {
    ap_block_state300_pp13_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state302_pp14_stage0_iter0() {
    ap_block_state302_pp14_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state303_pp14_stage1_iter0() {
    ap_block_state303_pp14_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state304_pp14_stage2_iter0() {
    ap_block_state304_pp14_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state305_pp14_stage3_iter0() {
    ap_block_state305_pp14_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state306_pp14_stage4_iter0() {
    ap_block_state306_pp14_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state307_pp14_stage0_iter1() {
    ap_block_state307_pp14_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state308_pp14_stage1_iter1() {
    ap_block_state308_pp14_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state309_pp14_stage2_iter1() {
    ap_block_state309_pp14_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state30_pp0_stage3_iter3() {
    ap_block_state30_pp0_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state310_pp14_stage3_iter1() {
    ap_block_state310_pp14_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state311_pp14_stage4_iter1() {
    ap_block_state311_pp14_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state312_pp14_stage0_iter2() {
    ap_block_state312_pp14_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state313_pp14_stage1_iter2() {
    ap_block_state313_pp14_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state314_pp14_stage2_iter2() {
    ap_block_state314_pp14_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state316_pp15_stage0_iter0() {
    ap_block_state316_pp15_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state317_pp15_stage1_iter0() {
    ap_block_state317_pp15_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state318_pp15_stage2_iter0() {
    ap_block_state318_pp15_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state319_pp15_stage3_iter0() {
    ap_block_state319_pp15_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state31_pp0_stage4_iter3() {
    ap_block_state31_pp0_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state320_pp15_stage4_iter0() {
    ap_block_state320_pp15_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state321_pp15_stage0_iter1() {
    ap_block_state321_pp15_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state322_pp15_stage1_iter1() {
    ap_block_state322_pp15_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state323_pp15_stage2_iter1() {
    ap_block_state323_pp15_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state324_pp15_stage3_iter1() {
    ap_block_state324_pp15_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state325_pp15_stage4_iter1() {
    ap_block_state325_pp15_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state326_pp15_stage0_iter2() {
    ap_block_state326_pp15_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state327_pp15_stage1_iter2() {
    ap_block_state327_pp15_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state328_pp15_stage2_iter2() {
    ap_block_state328_pp15_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state32_pp0_stage5_iter3() {
    ap_block_state32_pp0_stage5_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state330_pp16_stage0_iter0() {
    ap_block_state330_pp16_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state331_pp16_stage1_iter0() {
    ap_block_state331_pp16_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state332_pp16_stage2_iter0() {
    ap_block_state332_pp16_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state333_pp16_stage3_iter0() {
    ap_block_state333_pp16_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state334_pp16_stage4_iter0() {
    ap_block_state334_pp16_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state335_pp16_stage0_iter1() {
    ap_block_state335_pp16_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state336_pp16_stage1_iter1() {
    ap_block_state336_pp16_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state337_pp16_stage2_iter1() {
    ap_block_state337_pp16_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state338_pp16_stage3_iter1() {
    ap_block_state338_pp16_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state339_pp16_stage4_iter1() {
    ap_block_state339_pp16_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state33_pp0_stage6_iter3() {
    ap_block_state33_pp0_stage6_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state340_pp16_stage0_iter2() {
    ap_block_state340_pp16_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state341_pp16_stage1_iter2() {
    ap_block_state341_pp16_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state342_pp16_stage2_iter2() {
    ap_block_state342_pp16_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state344_pp17_stage0_iter0() {
    ap_block_state344_pp17_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state345_pp17_stage1_iter0() {
    ap_block_state345_pp17_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state346_pp17_stage2_iter0() {
    ap_block_state346_pp17_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state347_pp17_stage3_iter0() {
    ap_block_state347_pp17_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state348_pp17_stage4_iter0() {
    ap_block_state348_pp17_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state349_pp17_stage0_iter1() {
    ap_block_state349_pp17_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state34_pp0_stage7_iter3() {
    ap_block_state34_pp0_stage7_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state350_pp17_stage1_iter1() {
    ap_block_state350_pp17_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state351_pp17_stage2_iter1() {
    ap_block_state351_pp17_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state352_pp17_stage3_iter1() {
    ap_block_state352_pp17_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state353_pp17_stage4_iter1() {
    ap_block_state353_pp17_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state354_pp17_stage0_iter2() {
    ap_block_state354_pp17_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state355_pp17_stage1_iter2() {
    ap_block_state355_pp17_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state356_pp17_stage2_iter2() {
    ap_block_state356_pp17_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state35_pp0_stage0_iter4() {
    ap_block_state35_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state36_pp0_stage1_iter4() {
    ap_block_state36_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state37_pp0_stage2_iter4() {
    ap_block_state37_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state38_pp0_stage3_iter4() {
    ap_block_state38_pp0_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state39_pp0_stage4_iter4() {
    ap_block_state39_pp0_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state40_pp0_stage5_iter4() {
    ap_block_state40_pp0_stage5_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state41_pp0_stage6_iter4() {
    ap_block_state41_pp0_stage6_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state42_pp0_stage7_iter4() {
    ap_block_state42_pp0_stage7_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state43_pp0_stage0_iter5() {
    ap_block_state43_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state44_pp0_stage1_iter5() {
    ap_block_state44_pp0_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state45_pp0_stage2_iter5() {
    ap_block_state45_pp0_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state46_pp0_stage3_iter5() {
    ap_block_state46_pp0_stage3_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state47_pp0_stage4_iter5() {
    ap_block_state47_pp0_stage4_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state48_pp0_stage5_iter5() {
    ap_block_state48_pp0_stage5_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state49_pp0_stage6_iter5() {
    ap_block_state49_pp0_stage6_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state4_pp0_stage1_iter0() {
    ap_block_state4_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state50_pp0_stage7_iter5() {
    ap_block_state50_pp0_stage7_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state51_pp0_stage0_iter6() {
    ap_block_state51_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state52_pp0_stage1_iter6() {
    ap_block_state52_pp0_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state53_pp0_stage2_iter6() {
    ap_block_state53_pp0_stage2_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state54_pp0_stage3_iter6() {
    ap_block_state54_pp0_stage3_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state55_pp0_stage4_iter6() {
    ap_block_state55_pp0_stage4_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state56_pp0_stage5_iter6() {
    ap_block_state56_pp0_stage5_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state57_pp0_stage6_iter6() {
    ap_block_state57_pp0_stage6_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state58_pp0_stage7_iter6() {
    ap_block_state58_pp0_stage7_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state59_pp0_stage0_iter7() {
    ap_block_state59_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state5_pp0_stage2_iter0() {
    ap_block_state5_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state60_pp0_stage1_iter7() {
    ap_block_state60_pp0_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state61_pp0_stage2_iter7() {
    ap_block_state61_pp0_stage2_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state62_pp0_stage3_iter7() {
    ap_block_state62_pp0_stage3_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state63_pp0_stage4_iter7() {
    ap_block_state63_pp0_stage4_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state64_pp0_stage5_iter7() {
    ap_block_state64_pp0_stage5_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state65_pp0_stage6_iter7() {
    ap_block_state65_pp0_stage6_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state66_pp0_stage7_iter7() {
    ap_block_state66_pp0_stage7_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state67_pp0_stage0_iter8() {
    ap_block_state67_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state68_pp0_stage1_iter8() {
    ap_block_state68_pp0_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state69_pp0_stage2_iter8() {
    ap_block_state69_pp0_stage2_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state6_pp0_stage3_iter0() {
    ap_block_state6_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state70_pp0_stage3_iter8() {
    ap_block_state70_pp0_stage3_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state71_pp0_stage4_iter8() {
    ap_block_state71_pp0_stage4_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state72_pp0_stage5_iter8() {
    ap_block_state72_pp0_stage5_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state73_pp0_stage6_iter8() {
    ap_block_state73_pp0_stage6_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state74_pp0_stage7_iter8() {
    ap_block_state74_pp0_stage7_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state75_pp0_stage0_iter9() {
    ap_block_state75_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state76_pp0_stage1_iter9() {
    ap_block_state76_pp0_stage1_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state77_pp0_stage2_iter9() {
    ap_block_state77_pp0_stage2_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state78_pp0_stage3_iter9() {
    ap_block_state78_pp0_stage3_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state79_pp0_stage4_iter9() {
    ap_block_state79_pp0_stage4_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state7_pp0_stage4_iter0() {
    ap_block_state7_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state80_pp0_stage5_iter9() {
    ap_block_state80_pp0_stage5_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state81_pp0_stage6_iter9() {
    ap_block_state81_pp0_stage6_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state82_pp0_stage7_iter9() {
    ap_block_state82_pp0_stage7_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state83_pp0_stage0_iter10() {
    ap_block_state83_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state84_pp0_stage1_iter10() {
    ap_block_state84_pp0_stage1_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state85_pp0_stage2_iter10() {
    ap_block_state85_pp0_stage2_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state86_pp0_stage3_iter10() {
    ap_block_state86_pp0_stage3_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state87_pp0_stage4_iter10() {
    ap_block_state87_pp0_stage4_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state88_pp0_stage5_iter10() {
    ap_block_state88_pp0_stage5_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state89_pp0_stage6_iter10() {
    ap_block_state89_pp0_stage6_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state8_pp0_stage5_iter0() {
    ap_block_state8_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state90_pp0_stage7_iter10() {
    ap_block_state90_pp0_stage7_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state91_pp0_stage0_iter11() {
    ap_block_state91_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state92_pp0_stage1_iter11() {
    ap_block_state92_pp0_stage1_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state93_pp0_stage2_iter11() {
    ap_block_state93_pp0_stage2_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state94_pp0_stage3_iter11() {
    ap_block_state94_pp0_stage3_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state96_pp1_stage0_iter0() {
    ap_block_state96_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state97_pp1_stage1_iter0() {
    ap_block_state97_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state98_pp1_stage2_iter0() {
    ap_block_state98_pp1_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state99_pp1_stage3_iter0() {
    ap_block_state99_pp1_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_block_state9_pp0_stage6_iter0() {
    ap_block_state9_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void compute_attention::thread_ap_condition_pp0_exit_iter10_state85() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter10.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter9.read(), ap_const_logic_0))) {
        ap_condition_pp0_exit_iter10_state85 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter10_state85 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp10_exit_iter0_state246() {
    if (esl_seteq<1,1,1>(icmp_ln108_8_fu_6777_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp10_exit_iter0_state246 = ap_const_logic_1;
    } else {
        ap_condition_pp10_exit_iter0_state246 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp11_exit_iter0_state260() {
    if (esl_seteq<1,1,1>(icmp_ln108_9_fu_6863_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp11_exit_iter0_state260 = ap_const_logic_1;
    } else {
        ap_condition_pp11_exit_iter0_state260 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp12_exit_iter0_state274() {
    if (esl_seteq<1,1,1>(icmp_ln108_10_fu_6949_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp12_exit_iter0_state274 = ap_const_logic_1;
    } else {
        ap_condition_pp12_exit_iter0_state274 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp13_exit_iter0_state288() {
    if (esl_seteq<1,1,1>(icmp_ln108_11_fu_7035_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp13_exit_iter0_state288 = ap_const_logic_1;
    } else {
        ap_condition_pp13_exit_iter0_state288 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp14_exit_iter0_state302() {
    if (esl_seteq<1,1,1>(icmp_ln108_12_fu_7121_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp14_exit_iter0_state302 = ap_const_logic_1;
    } else {
        ap_condition_pp14_exit_iter0_state302 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp15_exit_iter0_state316() {
    if (esl_seteq<1,1,1>(icmp_ln108_13_fu_7207_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp15_exit_iter0_state316 = ap_const_logic_1;
    } else {
        ap_condition_pp15_exit_iter0_state316 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp16_exit_iter0_state330() {
    if (esl_seteq<1,1,1>(icmp_ln108_14_fu_7293_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp16_exit_iter0_state330 = ap_const_logic_1;
    } else {
        ap_condition_pp16_exit_iter0_state330 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp17_exit_iter0_state344() {
    if (esl_seteq<1,1,1>(icmp_ln108_15_fu_7379_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp17_exit_iter0_state344 = ap_const_logic_1;
    } else {
        ap_condition_pp17_exit_iter0_state344 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp1_exit_iter0_state96() {
    if (esl_seteq<1,1,1>(icmp_ln97_fu_6040_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state96 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state96 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp2_exit_iter0_state134() {
    if (esl_seteq<1,1,1>(icmp_ln108_fu_6095_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state134 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state134 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp3_exit_iter0_state148() {
    if (esl_seteq<1,1,1>(icmp_ln108_1_fu_6175_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state148 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state148 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp4_exit_iter0_state162() {
    if (esl_seteq<1,1,1>(icmp_ln108_2_fu_6261_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp4_exit_iter0_state162 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state162 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp5_exit_iter0_state176() {
    if (esl_seteq<1,1,1>(icmp_ln108_3_fu_6347_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp5_exit_iter0_state176 = ap_const_logic_1;
    } else {
        ap_condition_pp5_exit_iter0_state176 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp6_exit_iter0_state190() {
    if (esl_seteq<1,1,1>(icmp_ln108_4_fu_6433_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp6_exit_iter0_state190 = ap_const_logic_1;
    } else {
        ap_condition_pp6_exit_iter0_state190 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp7_exit_iter0_state204() {
    if (esl_seteq<1,1,1>(icmp_ln108_5_fu_6519_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp7_exit_iter0_state204 = ap_const_logic_1;
    } else {
        ap_condition_pp7_exit_iter0_state204 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp8_exit_iter0_state218() {
    if (esl_seteq<1,1,1>(icmp_ln108_6_fu_6605_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp8_exit_iter0_state218 = ap_const_logic_1;
    } else {
        ap_condition_pp8_exit_iter0_state218 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_condition_pp9_exit_iter0_state232() {
    if (esl_seteq<1,1,1>(icmp_ln108_7_fu_6691_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp9_exit_iter0_state232 = ap_const_logic_1;
    } else {
        ap_condition_pp9_exit_iter0_state232 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln80_fu_5293_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp10() {
    ap_enable_pp10 = (ap_idle_pp10.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp11() {
    ap_enable_pp11 = (ap_idle_pp11.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp12() {
    ap_enable_pp12 = (ap_idle_pp12.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp13() {
    ap_enable_pp13 = (ap_idle_pp13.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp14() {
    ap_enable_pp14 = (ap_idle_pp14.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp15() {
    ap_enable_pp15 = (ap_idle_pp15.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp16() {
    ap_enable_pp16 = (ap_idle_pp16.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp17() {
    ap_enable_pp17 = (ap_idle_pp17.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp7() {
    ap_enable_pp7 = (ap_idle_pp7.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp8() {
    ap_enable_pp8 = (ap_idle_pp8.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_enable_pp9() {
    ap_enable_pp9 = (ap_idle_pp9.read() ^ ap_const_logic_1);
}

void compute_attention::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp10() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter2.read()))) {
        ap_idle_pp10 = ap_const_logic_1;
    } else {
        ap_idle_pp10 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp11() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter2.read()))) {
        ap_idle_pp11 = ap_const_logic_1;
    } else {
        ap_idle_pp11 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp12() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter2.read()))) {
        ap_idle_pp12 = ap_const_logic_1;
    } else {
        ap_idle_pp12 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp13() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter2.read()))) {
        ap_idle_pp13 = ap_const_logic_1;
    } else {
        ap_idle_pp13 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp14() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter2.read()))) {
        ap_idle_pp14 = ap_const_logic_1;
    } else {
        ap_idle_pp14 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp15() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter2.read()))) {
        ap_idle_pp15 = ap_const_logic_1;
    } else {
        ap_idle_pp15 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp16() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter2.read()))) {
        ap_idle_pp16 = ap_const_logic_1;
    } else {
        ap_idle_pp16 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp17() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter2.read()))) {
        ap_idle_pp17 = ap_const_logic_1;
    } else {
        ap_idle_pp17 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter2.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter2.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter2.read()))) {
        ap_idle_pp7 = ap_const_logic_1;
    } else {
        ap_idle_pp7 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter2.read()))) {
        ap_idle_pp8 = ap_const_logic_1;
    } else {
        ap_idle_pp8 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_idle_pp9() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter2.read()))) {
        ap_idle_pp9 = ap_const_logic_1;
    } else {
        ap_idle_pp9 = ap_const_logic_0;
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_0_5_phi_fu_3709_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_0_5_phi_fu_3709_p4 = ap_phi_mux_attn_row_0_6_phi_fu_4554_p32.read();
    } else {
        ap_phi_mux_attn_row_0_5_phi_fu_3709_p4 = attn_row_0_5_reg_3705.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_0_6_phi_fu_4554_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0))) {
        ap_phi_mux_attn_row_0_6_phi_fu_4554_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)))) {
        ap_phi_mux_attn_row_0_6_phi_fu_4554_p32 = attn_row_0_5_reg_3705.read();
    } else {
        ap_phi_mux_attn_row_0_6_phi_fu_4554_p32 = ap_phi_reg_pp1_iter1_attn_row_0_6_reg_4550.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_10_5_phi_fu_3589_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_10_5_phi_fu_3589_p4 = ap_phi_mux_attn_row_10_6_phi_fu_4014_p32.read();
    } else {
        ap_phi_mux_attn_row_10_5_phi_fu_3589_p4 = attn_row_10_5_reg_3585.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_10_6_phi_fu_4014_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A))) {
        ap_phi_mux_attn_row_10_6_phi_fu_4014_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_10_6_phi_fu_4014_p32 = attn_row_10_5_reg_3585.read();
    } else {
        ap_phi_mux_attn_row_10_6_phi_fu_4014_p32 = ap_phi_reg_pp1_iter1_attn_row_10_6_reg_4010.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_11_5_phi_fu_3577_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_11_5_phi_fu_3577_p4 = ap_phi_mux_attn_row_11_6_phi_fu_3960_p32.read();
    } else {
        ap_phi_mux_attn_row_11_5_phi_fu_3577_p4 = attn_row_11_5_reg_3573.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_11_6_phi_fu_3960_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B))) {
        ap_phi_mux_attn_row_11_6_phi_fu_3960_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_11_6_phi_fu_3960_p32 = attn_row_11_5_reg_3573.read();
    } else {
        ap_phi_mux_attn_row_11_6_phi_fu_3960_p32 = ap_phi_reg_pp1_iter1_attn_row_11_6_reg_3956.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_12_5_phi_fu_3565_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_12_5_phi_fu_3565_p4 = ap_phi_mux_attn_row_12_6_phi_fu_3906_p32.read();
    } else {
        ap_phi_mux_attn_row_12_5_phi_fu_3565_p4 = attn_row_12_5_reg_3561.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_12_6_phi_fu_3906_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C))) {
        ap_phi_mux_attn_row_12_6_phi_fu_3906_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_12_6_phi_fu_3906_p32 = attn_row_12_5_reg_3561.read();
    } else {
        ap_phi_mux_attn_row_12_6_phi_fu_3906_p32 = ap_phi_reg_pp1_iter1_attn_row_12_6_reg_3902.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_13_5_phi_fu_3553_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_13_5_phi_fu_3553_p4 = ap_phi_mux_attn_row_13_6_phi_fu_3852_p32.read();
    } else {
        ap_phi_mux_attn_row_13_5_phi_fu_3553_p4 = attn_row_13_5_reg_3549.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_13_6_phi_fu_3852_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D))) {
        ap_phi_mux_attn_row_13_6_phi_fu_3852_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_13_6_phi_fu_3852_p32 = attn_row_13_5_reg_3549.read();
    } else {
        ap_phi_mux_attn_row_13_6_phi_fu_3852_p32 = ap_phi_reg_pp1_iter1_attn_row_13_6_reg_3848.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_14_5_phi_fu_3541_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_14_5_phi_fu_3541_p4 = ap_phi_mux_attn_row_14_6_phi_fu_3798_p32.read();
    } else {
        ap_phi_mux_attn_row_14_5_phi_fu_3541_p4 = attn_row_14_5_reg_3537.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_14_6_phi_fu_3798_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E))) {
        ap_phi_mux_attn_row_14_6_phi_fu_3798_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_14_6_phi_fu_3798_p32 = attn_row_14_5_reg_3537.read();
    } else {
        ap_phi_mux_attn_row_14_6_phi_fu_3798_p32 = ap_phi_reg_pp1_iter1_attn_row_14_6_reg_3794.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_15_5_phi_fu_3529_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_15_5_phi_fu_3529_p4 = ap_phi_mux_attn_row_15_6_phi_fu_3744_p32.read();
    } else {
        ap_phi_mux_attn_row_15_5_phi_fu_3529_p4 = attn_row_15_5_reg_3525.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_15_6_phi_fu_3744_p32() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
          esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_15_6_phi_fu_3744_p32 = attn_row_15_5_reg_3525.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F))) {
        ap_phi_mux_attn_row_15_6_phi_fu_3744_p32 = grp_fu_5103_p2.read();
    } else {
        ap_phi_mux_attn_row_15_6_phi_fu_3744_p32 = ap_phi_reg_pp1_iter1_attn_row_15_6_reg_3740.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_1_5_phi_fu_3697_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_1_5_phi_fu_3697_p4 = ap_phi_mux_attn_row_1_6_phi_fu_4500_p32.read();
    } else {
        ap_phi_mux_attn_row_1_5_phi_fu_3697_p4 = attn_row_1_5_reg_3693.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_1_6_phi_fu_4500_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1))) {
        ap_phi_mux_attn_row_1_6_phi_fu_4500_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_1_6_phi_fu_4500_p32 = attn_row_1_5_reg_3693.read();
    } else {
        ap_phi_mux_attn_row_1_6_phi_fu_4500_p32 = ap_phi_reg_pp1_iter1_attn_row_1_6_reg_4496.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_2_5_phi_fu_3685_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_2_5_phi_fu_3685_p4 = ap_phi_mux_attn_row_2_6_phi_fu_4446_p32.read();
    } else {
        ap_phi_mux_attn_row_2_5_phi_fu_3685_p4 = attn_row_2_5_reg_3681.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_2_6_phi_fu_4446_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2))) {
        ap_phi_mux_attn_row_2_6_phi_fu_4446_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_2_6_phi_fu_4446_p32 = attn_row_2_5_reg_3681.read();
    } else {
        ap_phi_mux_attn_row_2_6_phi_fu_4446_p32 = ap_phi_reg_pp1_iter1_attn_row_2_6_reg_4442.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_3_5_phi_fu_3673_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_3_5_phi_fu_3673_p4 = ap_phi_mux_attn_row_3_6_phi_fu_4392_p32.read();
    } else {
        ap_phi_mux_attn_row_3_5_phi_fu_3673_p4 = attn_row_3_5_reg_3669.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_3_6_phi_fu_4392_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3))) {
        ap_phi_mux_attn_row_3_6_phi_fu_4392_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_3_6_phi_fu_4392_p32 = attn_row_3_5_reg_3669.read();
    } else {
        ap_phi_mux_attn_row_3_6_phi_fu_4392_p32 = ap_phi_reg_pp1_iter1_attn_row_3_6_reg_4388.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_4_5_phi_fu_3661_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_4_5_phi_fu_3661_p4 = ap_phi_mux_attn_row_4_6_phi_fu_4338_p32.read();
    } else {
        ap_phi_mux_attn_row_4_5_phi_fu_3661_p4 = attn_row_4_5_reg_3657.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_4_6_phi_fu_4338_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4))) {
        ap_phi_mux_attn_row_4_6_phi_fu_4338_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_4_6_phi_fu_4338_p32 = attn_row_4_5_reg_3657.read();
    } else {
        ap_phi_mux_attn_row_4_6_phi_fu_4338_p32 = ap_phi_reg_pp1_iter1_attn_row_4_6_reg_4334.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_5_5_phi_fu_3649_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_5_5_phi_fu_3649_p4 = ap_phi_mux_attn_row_5_6_phi_fu_4284_p32.read();
    } else {
        ap_phi_mux_attn_row_5_5_phi_fu_3649_p4 = attn_row_5_5_reg_3645.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_5_6_phi_fu_4284_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5))) {
        ap_phi_mux_attn_row_5_6_phi_fu_4284_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_5_6_phi_fu_4284_p32 = attn_row_5_5_reg_3645.read();
    } else {
        ap_phi_mux_attn_row_5_6_phi_fu_4284_p32 = ap_phi_reg_pp1_iter1_attn_row_5_6_reg_4280.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_6_5_phi_fu_3637_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_6_5_phi_fu_3637_p4 = ap_phi_mux_attn_row_6_6_phi_fu_4230_p32.read();
    } else {
        ap_phi_mux_attn_row_6_5_phi_fu_3637_p4 = attn_row_6_5_reg_3633.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_6_6_phi_fu_4230_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6))) {
        ap_phi_mux_attn_row_6_6_phi_fu_4230_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_6_6_phi_fu_4230_p32 = attn_row_6_5_reg_3633.read();
    } else {
        ap_phi_mux_attn_row_6_6_phi_fu_4230_p32 = ap_phi_reg_pp1_iter1_attn_row_6_6_reg_4226.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_7_5_phi_fu_3625_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_7_5_phi_fu_3625_p4 = ap_phi_mux_attn_row_7_6_phi_fu_4176_p32.read();
    } else {
        ap_phi_mux_attn_row_7_5_phi_fu_3625_p4 = attn_row_7_5_reg_3621.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_7_6_phi_fu_4176_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7))) {
        ap_phi_mux_attn_row_7_6_phi_fu_4176_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_7_6_phi_fu_4176_p32 = attn_row_7_5_reg_3621.read();
    } else {
        ap_phi_mux_attn_row_7_6_phi_fu_4176_p32 = ap_phi_reg_pp1_iter1_attn_row_7_6_reg_4172.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_8_5_phi_fu_3613_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_8_5_phi_fu_3613_p4 = ap_phi_mux_attn_row_8_6_phi_fu_4122_p32.read();
    } else {
        ap_phi_mux_attn_row_8_5_phi_fu_3613_p4 = attn_row_8_5_reg_3609.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_8_6_phi_fu_4122_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8))) {
        ap_phi_mux_attn_row_8_6_phi_fu_4122_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_8_6_phi_fu_4122_p32 = attn_row_8_5_reg_3609.read();
    } else {
        ap_phi_mux_attn_row_8_6_phi_fu_4122_p32 = ap_phi_reg_pp1_iter1_attn_row_8_6_reg_4118.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_9_5_phi_fu_3601_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_attn_row_9_5_phi_fu_3601_p4 = ap_phi_mux_attn_row_9_6_phi_fu_4068_p32.read();
    } else {
        ap_phi_mux_attn_row_9_5_phi_fu_3601_p4 = attn_row_9_5_reg_3597.read();
    }
}

void compute_attention::thread_ap_phi_mux_attn_row_9_6_phi_fu_4068_p32() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_9))) {
        ap_phi_mux_attn_row_9_6_phi_fu_4068_p32 = grp_fu_5103_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_F)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_E)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_D)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_C)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_B)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_A)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_8)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_7)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_6)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_5)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_4)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_3)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_2)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_1)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
                 esl_seteq<1,4,4>(trunc_ln99_reg_8709.read(), ap_const_lv4_0)))) {
        ap_phi_mux_attn_row_9_6_phi_fu_4068_p32 = attn_row_9_5_reg_3597.read();
    } else {
        ap_phi_mux_attn_row_9_6_phi_fu_4068_p32 = ap_phi_reg_pp1_iter1_attn_row_9_6_reg_4064.read();
    }
}

void compute_attention::thread_ap_phi_mux_sum_exp_0_phi_fu_3721_p4() {
    ap_phi_mux_sum_exp_0_phi_fu_3721_p4 = sum_exp_0_reg_3717.read();
}

void compute_attention::thread_ap_phi_mux_tk1_0_phi_fu_3733_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk1_0_phi_fu_3733_p4 = tk_1_reg_8704.read();
    } else {
        ap_phi_mux_tk1_0_phi_fu_3733_p4 = tk1_0_reg_3729.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_0_phi_fu_4624_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_reg_8733.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_0_phi_fu_4624_p4 = add_ln108_reg_8737.read();
    } else {
        ap_phi_mux_tk3_0_0_phi_fu_4624_p4 = tk3_0_0_reg_4620.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_10_phi_fu_4894_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_10_reg_9123.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_10_phi_fu_4894_p4 = add_ln108_10_reg_9127.read();
    } else {
        ap_phi_mux_tk3_0_10_phi_fu_4894_p4 = tk3_0_10_reg_4890.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_11_phi_fu_4921_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_11_reg_9162.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_11_phi_fu_4921_p4 = add_ln108_11_reg_9166.read();
    } else {
        ap_phi_mux_tk3_0_11_phi_fu_4921_p4 = tk3_0_11_reg_4917.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_12_phi_fu_4948_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_12_reg_9201.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_12_phi_fu_4948_p4 = add_ln108_12_reg_9205.read();
    } else {
        ap_phi_mux_tk3_0_12_phi_fu_4948_p4 = tk3_0_12_reg_4944.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_13_phi_fu_4975_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_13_reg_9240.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_13_phi_fu_4975_p4 = add_ln108_13_reg_9244.read();
    } else {
        ap_phi_mux_tk3_0_13_phi_fu_4975_p4 = tk3_0_13_reg_4971.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_14_phi_fu_5002_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_14_reg_9279.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_14_phi_fu_5002_p4 = add_ln108_14_reg_9283.read();
    } else {
        ap_phi_mux_tk3_0_14_phi_fu_5002_p4 = tk3_0_14_reg_4998.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_15_phi_fu_5029_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_15_reg_9318.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_15_phi_fu_5029_p4 = add_ln108_15_reg_9322.read();
    } else {
        ap_phi_mux_tk3_0_15_phi_fu_5029_p4 = tk3_0_15_reg_5025.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_1_phi_fu_4651_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_1_reg_8772.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_1_phi_fu_4651_p4 = add_ln108_1_reg_8776.read();
    } else {
        ap_phi_mux_tk3_0_1_phi_fu_4651_p4 = tk3_0_1_reg_4647.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_2_phi_fu_4678_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_2_reg_8811.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_2_phi_fu_4678_p4 = add_ln108_2_reg_8815.read();
    } else {
        ap_phi_mux_tk3_0_2_phi_fu_4678_p4 = tk3_0_2_reg_4674.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_3_phi_fu_4705_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_3_reg_8850.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_3_phi_fu_4705_p4 = add_ln108_3_reg_8854.read();
    } else {
        ap_phi_mux_tk3_0_3_phi_fu_4705_p4 = tk3_0_3_reg_4701.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_4_phi_fu_4732_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_4_reg_8889.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_4_phi_fu_4732_p4 = add_ln108_4_reg_8893.read();
    } else {
        ap_phi_mux_tk3_0_4_phi_fu_4732_p4 = tk3_0_4_reg_4728.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_5_phi_fu_4759_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_5_reg_8928.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_5_phi_fu_4759_p4 = add_ln108_5_reg_8932.read();
    } else {
        ap_phi_mux_tk3_0_5_phi_fu_4759_p4 = tk3_0_5_reg_4755.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_6_phi_fu_4786_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_6_reg_8967.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_6_phi_fu_4786_p4 = add_ln108_6_reg_8971.read();
    } else {
        ap_phi_mux_tk3_0_6_phi_fu_4786_p4 = tk3_0_6_reg_4782.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_7_phi_fu_4813_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_7_reg_9006.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_7_phi_fu_4813_p4 = add_ln108_7_reg_9010.read();
    } else {
        ap_phi_mux_tk3_0_7_phi_fu_4813_p4 = tk3_0_7_reg_4809.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_8_phi_fu_4840_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_8_reg_9045.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_8_phi_fu_4840_p4 = add_ln108_8_reg_9049.read();
    } else {
        ap_phi_mux_tk3_0_8_phi_fu_4840_p4 = tk3_0_8_reg_4836.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk3_0_9_phi_fu_4867_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_9_reg_9084.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk3_0_9_phi_fu_4867_p4 = add_ln108_9_reg_9088.read();
    } else {
        ap_phi_mux_tk3_0_9_phi_fu_4867_p4 = tk3_0_9_reg_4863.read();
    }
}

void compute_attention::thread_ap_phi_mux_tk_0_phi_fu_2466_p4() {
    if ((esl_seteq<1,1,1>(icmp_ln84_reg_8182.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tk_0_phi_fu_2466_p4 = tk_reg_8186.read();
    } else {
        ap_phi_mux_tk_0_phi_fu_2466_p4 = tk_0_reg_2462.read();
    }
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_0_4_reg_3471() {
    ap_phi_reg_pp0_iter11_attn_row_0_4_reg_3471 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_10_4_reg_2931() {
    ap_phi_reg_pp0_iter11_attn_row_10_4_reg_2931 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_11_4_reg_2877() {
    ap_phi_reg_pp0_iter11_attn_row_11_4_reg_2877 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_12_4_reg_2823() {
    ap_phi_reg_pp0_iter11_attn_row_12_4_reg_2823 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_13_4_reg_2769() {
    ap_phi_reg_pp0_iter11_attn_row_13_4_reg_2769 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_14_4_reg_2715() {
    ap_phi_reg_pp0_iter11_attn_row_14_4_reg_2715 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_15_4_reg_2661() {
    ap_phi_reg_pp0_iter11_attn_row_15_4_reg_2661 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_1_4_reg_3417() {
    ap_phi_reg_pp0_iter11_attn_row_1_4_reg_3417 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_2_4_reg_3363() {
    ap_phi_reg_pp0_iter11_attn_row_2_4_reg_3363 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_3_4_reg_3309() {
    ap_phi_reg_pp0_iter11_attn_row_3_4_reg_3309 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_4_4_reg_3255() {
    ap_phi_reg_pp0_iter11_attn_row_4_4_reg_3255 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_5_4_reg_3201() {
    ap_phi_reg_pp0_iter11_attn_row_5_4_reg_3201 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_6_4_reg_3147() {
    ap_phi_reg_pp0_iter11_attn_row_6_4_reg_3147 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_7_4_reg_3093() {
    ap_phi_reg_pp0_iter11_attn_row_7_4_reg_3093 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_8_4_reg_3039() {
    ap_phi_reg_pp0_iter11_attn_row_8_4_reg_3039 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp0_iter11_attn_row_9_4_reg_2985() {
    ap_phi_reg_pp0_iter11_attn_row_9_4_reg_2985 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_0_6_reg_4550() {
    ap_phi_reg_pp1_iter1_attn_row_0_6_reg_4550 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_10_6_reg_4010() {
    ap_phi_reg_pp1_iter1_attn_row_10_6_reg_4010 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_11_6_reg_3956() {
    ap_phi_reg_pp1_iter1_attn_row_11_6_reg_3956 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_12_6_reg_3902() {
    ap_phi_reg_pp1_iter1_attn_row_12_6_reg_3902 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_13_6_reg_3848() {
    ap_phi_reg_pp1_iter1_attn_row_13_6_reg_3848 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_14_6_reg_3794() {
    ap_phi_reg_pp1_iter1_attn_row_14_6_reg_3794 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_15_6_reg_3740() {
    ap_phi_reg_pp1_iter1_attn_row_15_6_reg_3740 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_1_6_reg_4496() {
    ap_phi_reg_pp1_iter1_attn_row_1_6_reg_4496 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_2_6_reg_4442() {
    ap_phi_reg_pp1_iter1_attn_row_2_6_reg_4442 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_3_6_reg_4388() {
    ap_phi_reg_pp1_iter1_attn_row_3_6_reg_4388 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_4_6_reg_4334() {
    ap_phi_reg_pp1_iter1_attn_row_4_6_reg_4334 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_5_6_reg_4280() {
    ap_phi_reg_pp1_iter1_attn_row_5_6_reg_4280 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_6_6_reg_4226() {
    ap_phi_reg_pp1_iter1_attn_row_6_6_reg_4226 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_7_6_reg_4172() {
    ap_phi_reg_pp1_iter1_attn_row_7_6_reg_4172 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_8_6_reg_4118() {
    ap_phi_reg_pp1_iter1_attn_row_8_6_reg_4118 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_phi_reg_pp1_iter1_attn_row_9_6_reg_4064() {
    ap_phi_reg_pp1_iter1_attn_row_9_6_reg_4064 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void compute_attention::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln80_fu_5293_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void compute_attention::thread_b_fu_5305_p2() {
    b_fu_5305_p2 = (!ap_const_lv3_1.is_01() || !b_0_reg_2225.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(b_0_reg_2225.read()));
}

void compute_attention::thread_bitcast_ln93_1_fu_5952_p1() {
    bitcast_ln93_1_fu_5952_p1 = max_score_0_reg_2649.read();
}

void compute_attention::thread_bitcast_ln93_fu_5982_p1() {
    bitcast_ln93_fu_5982_p1 = attn_row_0_reg_8678.read();
}

void compute_attention::thread_grp_fu_5036_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_fu_6040_p2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_5036_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln84_reg_8182.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln84_reg_8182_pp0_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln84_reg_8182_pp0_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln84_reg_8182_pp0_iter2_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln84_reg_8182_pp0_iter3_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln84_reg_8182_pp0_iter3_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln84_reg_8182_pp0_iter4_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln84_reg_8182_pp0_iter5_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln97_reg_8700_pp1_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_reg_8733_pp2_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_1_reg_8772_pp3_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_2_reg_8811_pp4_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_3_reg_8850_pp5_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_4_reg_8889_pp6_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_5_reg_8928_pp7_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_6_reg_8967_pp8_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp8_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_7_reg_9006_pp9_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp9_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_8_reg_9045_pp10_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp10_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_9_reg_9084_pp11_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp11_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_10_reg_9123_pp12_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp12_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_11_reg_9162_pp13_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp13_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_12_reg_9201_pp14_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp14_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_13_reg_9240_pp15_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp15_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_14_reg_9279_pp16_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp16_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln108_15_reg_9318_pp17_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp17_stage3_00001.read(), ap_const_boolean_0)))) {
        grp_fu_5036_opcode = ap_const_lv2_0;
    } else {
        grp_fu_5036_opcode =  (sc_lv<2>) ("XX");
    }
}

void compute_attention::thread_grp_fu_5036_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_15_reg_5009.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_14_reg_4982.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_13_reg_4955.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_12_reg_4928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_11_reg_4901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_10_reg_4874.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_9_reg_4847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_8_reg_4820.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_7_reg_4793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_6_reg_4766.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_5_reg_4739.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_4_reg_4712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_3_reg_4685.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_2_reg_4658.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_1_reg_4631.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = acc_0_0_reg_4604.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_fu_5036_p0 = sum_exp_0_reg_3717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = ap_phi_mux_sum_exp_0_phi_fu_3721_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = tmp_52_fu_6056_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = dot_6_reg_8628.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = dot_5_reg_8623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = dot_4_reg_8618.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = dot_3_reg_8613.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = dot_2_reg_8608.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = dot_1_reg_8603.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = reg_5281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 = reg_5270.read();
    } else {
        grp_fu_5036_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_grp_fu_5036_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0)))) {
        grp_fu_5036_p1 = reg_5276.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_fu_5036_p1 = ap_const_lv32_3089705F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = attn_row_0_1_reg_8718.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = max_score_0_reg_2649.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = tmp_4_7_reg_8558_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = tmp_4_6_reg_8553_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = tmp_4_5_reg_8548_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = tmp_4_4_reg_8543_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = tmp_4_3_reg_8498_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = reg_5276_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = tmp_4_1_reg_8453.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 = ap_const_lv32_0;
    } else {
        grp_fu_5036_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_grp_fu_5041_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 = dot_14_reg_8668.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 = dot_13_reg_8663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 = dot_12_reg_8658.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 = dot_11_reg_8653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 = dot_10_reg_8648.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 = dot_9_reg_8643.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 = dot_8_reg_8638.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 = dot_7_reg_8633.read();
    } else {
        grp_fu_5041_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_grp_fu_5041_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 = tmp_4_14_reg_8598_pp0_iter9_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 = tmp_4_13_reg_8593_pp0_iter8_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 = tmp_4_12_reg_8588_pp0_iter8_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 = tmp_4_11_reg_8583_pp0_iter7_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 = tmp_4_10_reg_8578_pp0_iter7_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 = tmp_4_s_reg_8573_pp0_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 = tmp_4_9_reg_8568_pp0_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 = tmp_4_8_reg_8563_pp0_iter5_reg.read();
    } else {
        grp_fu_5041_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_grp_fu_5064_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_106_fu_7426_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_104_fu_7340_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_102_fu_7254_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_100_fu_7168_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_98_fu_7082_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_96_fu_6996_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_94_fu_6910_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_92_fu_6824_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_88_fu_6738_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_84_fu_6652_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_80_fu_6566_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_76_fu_6480_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_72_fu_6394_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_68_fu_6308_p18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_64_fu_6222_p18.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp8_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp9_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp10_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp11_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp12_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp13_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp14_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp15_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp16_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp17_stage4.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p0 = reg_5270.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5064_p0 = tmp_60_fu_6136_p18.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p0 = reg_5250.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p0 = reg_5230.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p0 = reg_5210.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p0 = reg_5190.read();
    } else {
        grp_fu_5064_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_grp_fu_5064_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage4.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p1 = reg_5288.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p1 = inv_sum_reg_8728.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p1 = reg_5255.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p1 = reg_5235.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p1 = reg_5215.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)))) {
        grp_fu_5064_p1 = reg_5195.read();
    } else {
        grp_fu_5064_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_grp_fu_5068_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_5068_p0 = reg_5260.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_fu_5068_p0 = reg_5240.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)))) {
        grp_fu_5068_p0 = reg_5220.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)))) {
        grp_fu_5068_p0 = reg_5200.read();
    } else {
        grp_fu_5068_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_grp_fu_5068_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_5068_p1 = reg_5265.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_fu_5068_p1 = reg_5245.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)))) {
        grp_fu_5068_p1 = reg_5225.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)))) {
        grp_fu_5068_p1 = reg_5205.read();
    } else {
        grp_fu_5068_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void compute_attention::thread_h_fu_5375_p2() {
    h_fu_5375_p2 = (!ap_const_lv3_1.is_01() || !select_ln89_fu_5317_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(select_ln89_fu_5317_p3.read()));
}

void compute_attention::thread_icmp_ln108_10_fu_6949_p2() {
    icmp_ln108_10_fu_6949_p2 = (!ap_phi_mux_tk3_0_10_phi_fu_4894_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_10_phi_fu_4894_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_11_fu_7035_p2() {
    icmp_ln108_11_fu_7035_p2 = (!ap_phi_mux_tk3_0_11_phi_fu_4921_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_11_phi_fu_4921_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_12_fu_7121_p2() {
    icmp_ln108_12_fu_7121_p2 = (!ap_phi_mux_tk3_0_12_phi_fu_4948_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_12_phi_fu_4948_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_13_fu_7207_p2() {
    icmp_ln108_13_fu_7207_p2 = (!ap_phi_mux_tk3_0_13_phi_fu_4975_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_13_phi_fu_4975_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_14_fu_7293_p2() {
    icmp_ln108_14_fu_7293_p2 = (!ap_phi_mux_tk3_0_14_phi_fu_5002_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_14_phi_fu_5002_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_15_fu_7379_p2() {
    icmp_ln108_15_fu_7379_p2 = (!ap_phi_mux_tk3_0_15_phi_fu_5029_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_15_phi_fu_5029_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_1_fu_6175_p2() {
    icmp_ln108_1_fu_6175_p2 = (!ap_phi_mux_tk3_0_1_phi_fu_4651_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_1_phi_fu_4651_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_2_fu_6261_p2() {
    icmp_ln108_2_fu_6261_p2 = (!ap_phi_mux_tk3_0_2_phi_fu_4678_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_2_phi_fu_4678_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_3_fu_6347_p2() {
    icmp_ln108_3_fu_6347_p2 = (!ap_phi_mux_tk3_0_3_phi_fu_4705_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_3_phi_fu_4705_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_4_fu_6433_p2() {
    icmp_ln108_4_fu_6433_p2 = (!ap_phi_mux_tk3_0_4_phi_fu_4732_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_4_phi_fu_4732_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_5_fu_6519_p2() {
    icmp_ln108_5_fu_6519_p2 = (!ap_phi_mux_tk3_0_5_phi_fu_4759_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_5_phi_fu_4759_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_6_fu_6605_p2() {
    icmp_ln108_6_fu_6605_p2 = (!ap_phi_mux_tk3_0_6_phi_fu_4786_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_6_phi_fu_4786_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_7_fu_6691_p2() {
    icmp_ln108_7_fu_6691_p2 = (!ap_phi_mux_tk3_0_7_phi_fu_4813_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_7_phi_fu_4813_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_8_fu_6777_p2() {
    icmp_ln108_8_fu_6777_p2 = (!ap_phi_mux_tk3_0_8_phi_fu_4840_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_8_phi_fu_4840_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_9_fu_6863_p2() {
    icmp_ln108_9_fu_6863_p2 = (!ap_phi_mux_tk3_0_9_phi_fu_4867_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_9_phi_fu_4867_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln108_fu_6095_p2() {
    icmp_ln108_fu_6095_p2 = (!ap_phi_mux_tk3_0_0_phi_fu_4624_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk3_0_0_phi_fu_4624_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln80_fu_5293_p2() {
    icmp_ln80_fu_5293_p2 = (!indvar_flatten45_reg_2214.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten45_reg_2214.read() == ap_const_lv9_100);
}

void compute_attention::thread_icmp_ln81_fu_5311_p2() {
    icmp_ln81_fu_5311_p2 = (!indvar_flatten_reg_2236.read().is_01() || !ap_const_lv8_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_2236.read() == ap_const_lv8_40);
}

void compute_attention::thread_icmp_ln82_fu_5363_p2() {
    icmp_ln82_fu_5363_p2 = (!tq_0_reg_2451.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(tq_0_reg_2451.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln84_fu_5715_p2() {
    icmp_ln84_fu_5715_p2 = (!ap_phi_mux_tk_0_phi_fu_2466_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk_0_phi_fu_2466_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_icmp_ln93_1_fu_6005_p2() {
    icmp_ln93_1_fu_6005_p2 = (!trunc_ln93_fu_5995_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln93_fu_5995_p1.read() == ap_const_lv23_0);
}

void compute_attention::thread_icmp_ln93_2_fu_5970_p2() {
    icmp_ln93_2_fu_5970_p2 = (!tmp_56_fu_5956_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_56_fu_5956_p4.read() != ap_const_lv8_FF);
}

void compute_attention::thread_icmp_ln93_3_fu_5976_p2() {
    icmp_ln93_3_fu_5976_p2 = (!trunc_ln93_1_fu_5966_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln93_1_fu_5966_p1.read() == ap_const_lv23_0);
}

void compute_attention::thread_icmp_ln93_fu_5999_p2() {
    icmp_ln93_fu_5999_p2 = (!tmp_53_fu_5985_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_53_fu_5985_p4.read() != ap_const_lv8_FF);
}

void compute_attention::thread_icmp_ln97_fu_6040_p2() {
    icmp_ln97_fu_6040_p2 = (!ap_phi_mux_tk1_0_phi_fu_3733_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_tk1_0_phi_fu_3733_p4.read() == ap_const_lv5_10);
}

void compute_attention::thread_max_score_1_fu_6033_p3() {
    max_score_1_fu_6033_p3 = (!and_ln93_1_fu_6027_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln93_1_fu_6027_p2.read()[0].to_bool())? attn_row_0_reg_8678.read(): max_score_0_reg_2649.read());
}

void compute_attention::thread_or_ln111_10_fu_7064_p2() {
    or_ln111_10_fu_7064_p2 = (tmp_132_cast_fu_7056_p3.read() | ap_const_lv12_B);
}

void compute_attention::thread_or_ln111_11_fu_7150_p2() {
    or_ln111_11_fu_7150_p2 = (tmp_134_cast_fu_7142_p3.read() | ap_const_lv12_C);
}

void compute_attention::thread_or_ln111_12_fu_7236_p2() {
    or_ln111_12_fu_7236_p2 = (tmp_136_cast_fu_7228_p3.read() | ap_const_lv12_D);
}

void compute_attention::thread_or_ln111_13_fu_7322_p2() {
    or_ln111_13_fu_7322_p2 = (tmp_138_cast_fu_7314_p3.read() | ap_const_lv12_E);
}

void compute_attention::thread_or_ln111_14_fu_7408_p2() {
    or_ln111_14_fu_7408_p2 = (tmp_140_cast_fu_7400_p3.read() | ap_const_lv12_F);
}

void compute_attention::thread_or_ln111_1_fu_6290_p2() {
    or_ln111_1_fu_6290_p2 = (tmp_106_cast_fu_6282_p3.read() | ap_const_lv12_2);
}

void compute_attention::thread_or_ln111_2_fu_6376_p2() {
    or_ln111_2_fu_6376_p2 = (tmp_110_cast_fu_6368_p3.read() | ap_const_lv12_3);
}

void compute_attention::thread_or_ln111_3_fu_6462_p2() {
    or_ln111_3_fu_6462_p2 = (tmp_118_cast_fu_6454_p3.read() | ap_const_lv12_4);
}

void compute_attention::thread_or_ln111_4_fu_6548_p2() {
    or_ln111_4_fu_6548_p2 = (tmp_120_cast_fu_6540_p3.read() | ap_const_lv12_5);
}

void compute_attention::thread_or_ln111_5_fu_6634_p2() {
    or_ln111_5_fu_6634_p2 = (tmp_122_cast_fu_6626_p3.read() | ap_const_lv12_6);
}

void compute_attention::thread_or_ln111_6_fu_6720_p2() {
    or_ln111_6_fu_6720_p2 = (tmp_124_cast_fu_6712_p3.read() | ap_const_lv12_7);
}

void compute_attention::thread_or_ln111_7_fu_6806_p2() {
    or_ln111_7_fu_6806_p2 = (tmp_126_cast_fu_6798_p3.read() | ap_const_lv12_8);
}

void compute_attention::thread_or_ln111_8_fu_6892_p2() {
    or_ln111_8_fu_6892_p2 = (tmp_128_cast_fu_6884_p3.read() | ap_const_lv12_9);
}

void compute_attention::thread_or_ln111_9_fu_6978_p2() {
    or_ln111_9_fu_6978_p2 = (tmp_130_cast_fu_6970_p3.read() | ap_const_lv12_A);
}

void compute_attention::thread_or_ln111_fu_6204_p2() {
    or_ln111_fu_6204_p2 = (tmp_102_cast_fu_6196_p3.read() | ap_const_lv12_1);
}

void compute_attention::thread_or_ln113_10_fu_5625_p2() {
    or_ln113_10_fu_5625_p2 = (tmp_87_fu_5425_p3.read() | ap_const_lv12_B);
}

void compute_attention::thread_or_ln113_11_fu_5643_p2() {
    or_ln113_11_fu_5643_p2 = (tmp_87_fu_5425_p3.read() | ap_const_lv12_C);
}

void compute_attention::thread_or_ln113_12_fu_5661_p2() {
    or_ln113_12_fu_5661_p2 = (tmp_87_fu_5425_p3.read() | ap_const_lv12_D);
}

}

