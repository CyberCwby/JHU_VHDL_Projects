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
static const char *ng0 = "D:/VHDL Projects/Lab1/lab1_top.vhd";



static void work_a_3538620251_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 2992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6009);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 3920);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 7U);
    xsi_driver_first_trans_fast_port(t2);

LAB4:    xsi_set_current_line(33, ng0);

LAB11:    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(35, ng0);
    t6 = (t0 + 6011);
    t8 = (t0 + 3920);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t6, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 3808);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_3538620251_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6018);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 6020);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 6022);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6036);
    t4 = (t0 + 3984);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(39, ng0);

LAB15:    t2 = (t0 + 3824);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(41, ng0);
    t12 = (t0 + 6024);
    t14 = (t0 + 3984);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t12, 4U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB4;

LAB6:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6028);
    t4 = (t0 + 3984);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 3984);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 3824);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void work_a_3538620251_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4048);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3840);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3538620251_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3538620251_3212880686_p_0,(void *)work_a_3538620251_3212880686_p_1,(void *)work_a_3538620251_3212880686_p_2};
	xsi_register_didat("work_a_3538620251_3212880686", "isim/lab1_top_isim_beh.exe.sim/work/a_3538620251_3212880686.didat");
	xsi_register_executes(pe);
}
