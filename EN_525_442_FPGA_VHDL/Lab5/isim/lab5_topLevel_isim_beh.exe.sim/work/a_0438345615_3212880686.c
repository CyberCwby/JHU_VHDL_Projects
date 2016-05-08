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
static const char *ng0 = "D:/VHDL Projects/Lab5/seg7_driver.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0438345615_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 4680);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 7570);
    t6 = (t0 + 4776);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t2 = (t0 + 7488U);
    t12 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t6, t2, 0);
    if (t12 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7488U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7488U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 2);
    if (t3 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7488U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 3);
    if (t3 != 0)
        goto LAB18;

LAB19:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 7590);
    t5 = (t0 + 4776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 7574);
    t9 = (t0 + 4776);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB12;

LAB14:    xsi_set_current_line(52, ng0);
    t5 = (t0 + 7578);
    t7 = (t0 + 4776);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB12;

LAB16:    xsi_set_current_line(55, ng0);
    t5 = (t0 + 7582);
    t7 = (t0 + 4776);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB12;

LAB18:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 7586);
    t7 = (t0 + 4776);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB12;

}

static void work_a_0438345615_3212880686_p_1(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4696);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 7594);
    t6 = (t0 + 4840);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t2 = (t0 + 7488U);
    t7 = (t0 + 7598);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t13 = (1 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t14;
    t15 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t6, t2, t7, t12);
    if (t15 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7488U);
    t5 = (t0 + 7600);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (1 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB13;

LAB14:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7488U);
    t5 = (t0 + 7602);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (1 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7488U);
    t5 = (t0 + 7604);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (1 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB17;

LAB18:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(75, ng0);
    t10 = (t0 + 1352U);
    t16 = *((char **)t10);
    t10 = (t0 + 4840);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB11;

LAB13:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t8 = (t0 + 4840);
    t10 = (t8 + 56U);
    t16 = *((char **)t10);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB11;

LAB15:    xsi_set_current_line(79, ng0);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t8 = (t0 + 4840);
    t10 = (t8 + 56U);
    t16 = *((char **)t10);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB11;

LAB17:    xsi_set_current_line(81, ng0);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t8 = (t0 + 4840);
    t10 = (t8 + 56U);
    t16 = *((char **)t10);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB11;

}


extern void work_a_0438345615_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0438345615_3212880686_p_0,(void *)work_a_0438345615_3212880686_p_1};
	xsi_register_didat("work_a_0438345615_3212880686", "isim/lab5_topLevel_isim_beh.exe.sim/work/a_0438345615_3212880686.didat");
	xsi_register_executes(pe);
}
