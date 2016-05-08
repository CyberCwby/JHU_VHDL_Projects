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
static const char *ng0 = "D:/VHDL Projects/Lab9/debouncer.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1473390551_3212880686_p_0(char *t0)
{
    char t9[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 3136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(36, ng0);
    t1 = xsi_get_transient_memory(23U);
    memset(t1, 0, 23U);
    t3 = t1;
    memset(t3, (unsigned char)2, 23U);
    t4 = (t0 + 3072);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 23U);
    xsi_driver_first_trans_fast(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1512U);
    t7 = *((char **)t3);
    t3 = (t0 + 4736U);
    t8 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t7, t3, 5000000);
    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 3136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(30, ng0);
    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t10 = (t0 + 4736U);
    t12 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t9, t11, t10, 1);
    t13 = (t9 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (23U != t15);
    if (t16 == 1)
        goto LAB11;

LAB12:    t17 = (t0 + 3072);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 23U);
    xsi_driver_first_trans_fast(t17);
    goto LAB9;

LAB11:    xsi_size_not_matching(23U, t15, 0);
    goto LAB12;

}


extern void work_a_1473390551_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1473390551_3212880686_p_0};
	xsi_register_didat("work_a_1473390551_3212880686", "isim/lab9_top_isim_beh.exe.sim/work/a_1473390551_3212880686.didat");
	xsi_register_executes(pe);
}
