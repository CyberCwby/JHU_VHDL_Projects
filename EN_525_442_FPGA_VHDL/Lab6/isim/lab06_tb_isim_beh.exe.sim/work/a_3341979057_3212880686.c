/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/VHDL Projects/Lab6/lab06_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_3341979057_3212880686_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(29, ng0);

LAB3:    t1 = (10 * 1000LL);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 6040);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 6040);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 5960);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3341979057_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;

LAB0:    t1 = (t0 + 5640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 9321);
    t4 = (2U != 2U);
    if (t4 == 1)
        goto LAB4;

LAB5:    t5 = (t0 + 6104);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    xsi_set_current_line(36, ng0);
    t10 = (0 * 1000LL);
    t2 = (t0 + 5448);
    xsi_process_wait(t2, t10);

LAB8:    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB5;

LAB6:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 9323);
    t4 = (2U != 2U);
    if (t4 == 1)
        goto LAB10;

LAB11:    t5 = (t0 + 6104);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    xsi_set_current_line(37, ng0);
    t10 = (150 * 1000LL);
    t2 = (t0 + 5448);
    xsi_process_wait(t2, t10);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB7:    goto LAB6;

LAB9:    goto LAB7;

LAB10:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 9325);
    t4 = (2U != 2U);
    if (t4 == 1)
        goto LAB16;

LAB17:    t5 = (t0 + 6104);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    xsi_set_current_line(41, ng0);
    t10 = (100 * 1000000LL);
    t2 = (t0 + 5448);
    xsi_process_wait(t2, t10);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 9327);
    t4 = (2U != 2U);
    if (t4 == 1)
        goto LAB22;

LAB23:    t5 = (t0 + 6104);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    xsi_set_current_line(44, ng0);
    t10 = (150 * 1000LL);
    t2 = (t0 + 5448);
    xsi_process_wait(t2, t10);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 9329);
    t4 = (2U != 2U);
    if (t4 == 1)
        goto LAB28;

LAB29:    t5 = (t0 + 6104);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    xsi_set_current_line(45, ng0);
    t10 = (1000 * 1000LL);
    t2 = (t0 + 5448);
    xsi_process_wait(t2, t10);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(47, ng0);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB34:    goto LAB2;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

}


extern void work_a_3341979057_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3341979057_3212880686_p_0,(void *)work_a_3341979057_3212880686_p_1};
	xsi_register_didat("work_a_3341979057_3212880686", "isim/lab06_tb_isim_beh.exe.sim/work/a_3341979057_3212880686.didat");
	xsi_register_executes(pe);
}
