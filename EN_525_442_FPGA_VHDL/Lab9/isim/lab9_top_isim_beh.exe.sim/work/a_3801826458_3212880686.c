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
static const char *ng0 = "D:/VHDL Projects/Lab9/lab9_top.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1654287348_1035706684(char *, char *, int , char *, char *);
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110411308_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3410769178_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3869231325_1035706684(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3801826458_3212880686_p_0(char *t0)
{
    char t15[16];
    char t16[16];
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
    unsigned char t13;
    char *t14;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 6048);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(26U);
    memset(t1, 0, 26U);
    t5 = t1;
    memset(t5, (unsigned char)2, 26U);
    t6 = (t0 + 6160);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 26U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 6224);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 10089);
    t5 = (t0 + 6288);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(65, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 6352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 6416);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB24;

LAB25:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB9;

LAB11:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3112U);
    t7 = *((char **)t2);
    t2 = (t0 + 6160);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t7, 26U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 9836U);
    t5 = ieee_p_1242562249_sub_1654287348_1035706684(IEEE_P_1242562249, t16, 49999999, t2, t1);
    t6 = ieee_p_1242562249_sub_3410769178_1035706684(IEEE_P_1242562249, t15, t5, t16, 16);
    t7 = (t15 + 12U);
    t17 = *((unsigned int *)t7);
    t17 = (t17 * 1U);
    t3 = (16U != t17);
    if (t3 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 6224);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t6, 16U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 9900U);
    t5 = ieee_p_1242562249_sub_3869231325_1035706684(IEEE_P_1242562249, t15, t2, t1);
    t6 = (t0 + 3432U);
    t7 = *((char **)t6);
    t6 = (t0 + 9884U);
    t3 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t5, t15, t7, t6);
    if (t3 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 9900U);
    t5 = ieee_p_1242562249_sub_3869231325_1035706684(IEEE_P_1242562249, t15, t2, t1);
    t6 = (t0 + 3272U);
    t7 = *((char **)t6);
    t6 = (t0 + 9868U);
    t3 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t5, t15, t7, t6);
    if (t3 != 0)
        goto LAB19;

LAB20:
LAB17:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 6416);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 6480);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_size_not_matching(16U, t17, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(78, ng0);
    t8 = (t0 + 3592U);
    t9 = *((char **)t8);
    t8 = (t0 + 9900U);
    t10 = ieee_p_1242562249_sub_3869231325_1035706684(IEEE_P_1242562249, t16, t9, t8);
    t14 = (t0 + 6352);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 16U);
    xsi_driver_first_trans_fast(t14);
    goto LAB17;

LAB19:    xsi_set_current_line(81, ng0);
    t8 = (t0 + 3592U);
    t9 = *((char **)t8);
    t8 = (t0 + 9900U);
    t10 = ieee_p_1242562249_sub_3869231325_1035706684(IEEE_P_1242562249, t16, t9, t8);
    t14 = (t0 + 6288);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 16U);
    xsi_driver_first_trans_fast(t14);
    goto LAB17;

LAB21:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 6480);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6416);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

}

static void work_a_3801826458_3212880686_p_1(char *t0)
{
    char t34[16];
    char t35[16];
    char t37[16];
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
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t36;
    unsigned char t38;

LAB0:    t1 = (t0 + 5480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 10105);
    t5 = xsi_mem_cmp(t2, t3, 8U);
    if (t5 == 1)
        goto LAB5;

LAB13:    t6 = (t0 + 10113);
    t8 = xsi_mem_cmp(t6, t3, 8U);
    if (t8 == 1)
        goto LAB6;

LAB14:    t9 = (t0 + 10121);
    t11 = xsi_mem_cmp(t9, t3, 8U);
    if (t11 == 1)
        goto LAB7;

LAB15:    t12 = (t0 + 10129);
    t14 = xsi_mem_cmp(t12, t3, 8U);
    if (t14 == 1)
        goto LAB8;

LAB16:    t15 = (t0 + 10137);
    t17 = xsi_mem_cmp(t15, t3, 8U);
    if (t17 == 1)
        goto LAB9;

LAB17:    t18 = (t0 + 10145);
    t20 = xsi_mem_cmp(t18, t3, 8U);
    if (t20 == 1)
        goto LAB10;

LAB18:    t21 = (t0 + 10153);
    t23 = xsi_mem_cmp(t21, t3, 8U);
    if (t23 == 1)
        goto LAB11;

LAB19:
LAB12:    xsi_set_current_line(100, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 6544);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);

LAB4:    xsi_set_current_line(98, ng0);

LAB25:    t2 = (t0 + 6064);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB26;

LAB1:    return;
LAB5:    xsi_set_current_line(100, ng0);
    t24 = (t0 + 2952U);
    t25 = *((char **)t24);
    t26 = (25 - 15);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t24 = (t25 + t28);
    t29 = (t0 + 6544);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t24, 16U);
    xsi_driver_first_trans_fast(t29);
    goto LAB4;

LAB6:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 10161);
    t4 = (t0 + 2952U);
    t6 = *((char **)t4);
    t26 = (25 - 25);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t4 = (t6 + t28);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t35 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 0;
    t12 = (t10 + 4U);
    *((int *)t12) = 5;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t5 = (5 - 0);
    t36 = (t5 * 1);
    t36 = (t36 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t36;
    t12 = (t37 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 25;
    t13 = (t12 + 4U);
    *((int *)t13) = 16;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t8 = (16 - 25);
    t36 = (t8 * -1);
    t36 = (t36 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t36;
    t7 = xsi_base_array_concat(t7, t34, t9, (char)97, t2, t35, (char)97, t4, t37, (char)101);
    t36 = (6U + 10U);
    t38 = (16U != t36);
    if (t38 == 1)
        goto LAB21;

LAB22:    t13 = (t0 + 6544);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 16U);
    xsi_driver_first_trans_fast(t13);
    goto LAB4;

LAB7:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 6544);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9900U);
    t4 = ieee_p_1242562249_sub_3869231325_1035706684(IEEE_P_1242562249, t34, t3, t2);
    t6 = (t0 + 6544);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t4, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB9:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 6544);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB10:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t2 = (t0 + 6544);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB11:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t2 = (t0 + 6544);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB20:;
LAB21:    xsi_size_not_matching(16U, t36, 0);
    goto LAB22;

LAB23:    t3 = (t0 + 6064);
    *((int *)t3) = 0;
    goto LAB2;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}

static void work_a_3801826458_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(115, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6608);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 6080);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3801826458_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3801826458_3212880686_p_0,(void *)work_a_3801826458_3212880686_p_1,(void *)work_a_3801826458_3212880686_p_2};
	xsi_register_didat("work_a_3801826458_3212880686", "isim/lab9_top_isim_beh.exe.sim/work/a_3801826458_3212880686.didat");
	xsi_register_executes(pe);
}
