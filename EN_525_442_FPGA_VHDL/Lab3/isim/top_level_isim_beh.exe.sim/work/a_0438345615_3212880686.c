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
static const char *ng0 = "D:/VHDL Projects/Lab3/seg7_driver.vhd";
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);


static void work_a_0438345615_3212880686_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7200U);
    t3 = (t0 + 7281);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7200U);
    t3 = (t0 + 7287);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7200U);
    t3 = (t0 + 7293);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB7;

LAB8:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 7299);
    t3 = (t0 + 4616);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB3:    t1 = (t0 + 4520);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 7283);
    t12 = (t0 + 4616);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB3;

LAB5:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 7289);
    t12 = (t0 + 4616);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB3;

LAB7:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 7295);
    t12 = (t0 + 4616);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB3;

}

static void work_a_0438345615_3212880686_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7200U);
    t3 = (t0 + 7303);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7200U);
    t3 = (t0 + 7305);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7200U);
    t3 = (t0 + 7307);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB7;

LAB8:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 4680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 4536);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t7 = (t0 + 1352U);
    t11 = *((char **)t7);
    t7 = (t0 + 4680);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 1512U);
    t11 = *((char **)t7);
    t7 = (t0 + 4680);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB7:    xsi_set_current_line(54, ng0);
    t7 = (t0 + 1672U);
    t11 = *((char **)t7);
    t7 = (t0 + 4680);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

}


extern void work_a_0438345615_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0438345615_3212880686_p_0,(void *)work_a_0438345615_3212880686_p_1};
	xsi_register_didat("work_a_0438345615_3212880686", "isim/top_level_isim_beh.exe.sim/work/a_0438345615_3212880686.didat");
	xsi_register_executes(pe);
}
