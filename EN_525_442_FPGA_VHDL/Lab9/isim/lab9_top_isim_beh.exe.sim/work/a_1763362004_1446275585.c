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
static const char *ng0 = "D:/VHDL Projects/Lab9/OnePPSgenerator.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1763362004_1446275585_p_0(char *t0)
{
    char t14[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3240);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 5088U);
    t13 = (32000000 - 1);
    t2 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t3, t1, t13);
    if (t2 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(32, ng0);
    t1 = xsi_get_transient_memory(25U);
    memset(t1, 0, 25U);
    t3 = t1;
    memset(t3, (unsigned char)2, 25U);
    t4 = (t0 + 3336);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 25U);
    xsi_driver_first_trans_fast(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(28, ng0);
    t3 = xsi_get_transient_memory(25U);
    memset(t3, 0, 25U);
    t7 = t3;
    memset(t7, (unsigned char)2, 25U);
    t8 = (t0 + 3336);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 25U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1512U);
    t7 = *((char **)t4);
    t4 = (t0 + 5088U);
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t14, t7, t4, 1);
    t9 = (t14 + 12U);
    t15 = *((unsigned int *)t9);
    t16 = (1U * t15);
    t5 = (25U != t16);
    if (t5 == 1)
        goto LAB10;

LAB11:    t10 = (t0 + 3336);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 25U);
    xsi_driver_first_trans_fast(t10);
    goto LAB6;

LAB10:    xsi_size_not_matching(25U, t16, 0);
    goto LAB11;

}

static void work_a_1763362004_1446275585_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5088U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 16000000);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 3400);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 3256);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 3400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_1763362004_1446275585_init()
{
	static char *pe[] = {(void *)work_a_1763362004_1446275585_p_0,(void *)work_a_1763362004_1446275585_p_1};
	xsi_register_didat("work_a_1763362004_1446275585", "isim/lab9_top_isim_beh.exe.sim/work/a_1763362004_1446275585.didat");
	xsi_register_executes(pe);
}
