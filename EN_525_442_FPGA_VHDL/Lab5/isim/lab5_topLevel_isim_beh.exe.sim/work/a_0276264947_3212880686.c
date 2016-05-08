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
static const char *ng0 = "D:/VHDL Projects/Lab5/vgaDrvr.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1808404841_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919329317_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2778267465_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3046123850_1035706684(char *, int , char *, char *);
unsigned char ieee_p_1242562249_sub_3469716711_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0276264947_3212880686_p_0(char *t0)
{
    char t13[16];
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
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1352U);
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
LAB3:    t1 = (t0 + 7712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t5 = t1;
    memset(t5, (unsigned char)2, 10U);
    t6 = (t0 + 7952);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(47, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 8016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t2 = (t0 + 11432U);
    t12 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t6, t2, 800);
    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 7952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 8080);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB11:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t7 = (t0 + 11432U);
    t9 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t8, t7, 1);
    t10 = (t13 + 12U);
    t14 = *((unsigned int *)t10);
    t15 = (1U * t14);
    t16 = (10U != t15);
    if (t16 == 1)
        goto LAB13;

LAB14:    t17 = (t0 + 7952);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 10U);
    xsi_driver_first_trans_fast(t17);
    goto LAB11;

LAB13:    xsi_size_not_matching(10U, t15, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t1 = (t0 + 11448U);
    t11 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t5, t1, 521);
    if (t11 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 8016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 8080);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB16;

LAB18:    xsi_set_current_line(58, ng0);
    t6 = (t0 + 2792U);
    t7 = *((char **)t6);
    t6 = (t0 + 11448U);
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t7, t6, 1);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t15 = (1U * t14);
    t12 = (10U != t15);
    if (t12 == 1)
        goto LAB21;

LAB22:    t10 = (t0 + 8016);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 10U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 8080);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    xsi_size_not_matching(10U, t15, 0);
    goto LAB22;

}

static void work_a_0276264947_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 11432U);
    t4 = ieee_p_1242562249_sub_3046123850_1035706684(IEEE_P_1242562249, 656, t3, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 8144);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 7728);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 8144);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t5 = (t0 + 2632U);
    t6 = *((char **)t5);
    t5 = (t0 + 11432U);
    t7 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t6, t5, 752);
    t1 = t7;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 11448U);
    t4 = ieee_p_1242562249_sub_3046123850_1035706684(IEEE_P_1242562249, 490, t3, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 8208);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 7744);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 8208);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t5 = (t0 + 11448U);
    t7 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t6, t5, 492);
    t1 = t7;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_3(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 11448U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 480);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB7:    t17 = xsi_get_transient_memory(10U);
    memset(t17, 0, 10U);
    t18 = t17;
    memset(t18, (unsigned char)2, 10U);
    t19 = (t0 + 8272);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 10U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 7760);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t5 = (t0 + 11448U);
    t7 = ieee_p_1242562249_sub_1808404841_1035706684(IEEE_P_1242562249, t4, t6, t5, 32);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (1U * t9);
    t11 = (10U != t10);
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 8272);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 10U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t10, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_4(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 11432U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 640);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB7:    t17 = xsi_get_transient_memory(10U);
    memset(t17, 0, 10U);
    t18 = t17;
    memset(t18, (unsigned char)2, 10U);
    t19 = (t0 + 8336);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 10U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 7776);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 2632U);
    t6 = *((char **)t5);
    t5 = (t0 + 11432U);
    t7 = ieee_p_1242562249_sub_1808404841_1035706684(IEEE_P_1242562249, t4, t6, t5, 32);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (1U * t9);
    t11 = (10U != t10);
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 8336);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 10U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t10, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_5(char *t0)
{
    char t3[16];
    char t12[16];
    char t13[16];
    char t20[16];
    char t29[16];
    char t30[16];
    unsigned char t1;
    unsigned char t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t4 = (t0 + 11352U);
    t6 = ieee_p_1242562249_sub_1919329317_1035706684(IEEE_P_1242562249, t3, t5, t4, 32);
    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t7 = (t0 + 11432U);
    t9 = ieee_p_1242562249_sub_3469716711_1035706684(IEEE_P_1242562249, t6, t3, t8, t7);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t41 = (t0 + 8400);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_first_trans_fast(t41);

LAB2:    t46 = (t0 + 7792);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t36 = (t0 + 8400);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast(t36);
    goto LAB2;

LAB5:    t21 = (t0 + 1672U);
    t22 = *((char **)t21);
    t21 = (t0 + 11368U);
    t23 = ieee_p_1242562249_sub_1919329317_1035706684(IEEE_P_1242562249, t20, t22, t21, 32);
    t24 = (t0 + 2792U);
    t25 = *((char **)t24);
    t24 = (t0 + 11448U);
    t26 = ieee_p_1242562249_sub_3469716711_1035706684(IEEE_P_1242562249, t23, t20, t25, t24);
    if (t26 == 1)
        goto LAB11;

LAB12:    t19 = (unsigned char)0;

LAB13:    t1 = t19;
    goto LAB7;

LAB8:    t10 = (t0 + 2632U);
    t11 = *((char **)t10);
    t10 = (t0 + 11432U);
    t14 = (t0 + 1512U);
    t15 = *((char **)t14);
    t14 = (t0 + 11352U);
    t16 = ieee_p_1242562249_sub_1919329317_1035706684(IEEE_P_1242562249, t13, t15, t14, 32);
    t17 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t12, t16, t13, 32);
    t18 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t11, t10, t17, t12);
    t2 = t18;
    goto LAB10;

LAB11:    t27 = (t0 + 2792U);
    t28 = *((char **)t27);
    t27 = (t0 + 11448U);
    t31 = (t0 + 1672U);
    t32 = *((char **)t31);
    t31 = (t0 + 11368U);
    t33 = ieee_p_1242562249_sub_1919329317_1035706684(IEEE_P_1242562249, t30, t32, t31, 32);
    t34 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t29, t33, t30, 32);
    t35 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t28, t27, t34, t29);
    t19 = t35;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_6(char *t0)
{
    char t3[16];
    char t8[16];
    char t17[16];
    char t22[16];
    unsigned char t1;
    unsigned char t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 3592U);
    t5 = *((char **)t4);
    t4 = (t0 + 11464U);
    t6 = ieee_p_1242562249_sub_2778267465_1035706684(IEEE_P_1242562249, t3, t5, t4, 2);
    t7 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t6, t3, 0);
    if (t7 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 3592U);
    t19 = *((char **)t18);
    t18 = (t0 + 11464U);
    t20 = ieee_p_1242562249_sub_2778267465_1035706684(IEEE_P_1242562249, t17, t19, t18, 2);
    t21 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t20, t17, 1);
    if (t21 == 1)
        goto LAB20;

LAB21:    t16 = (unsigned char)0;

LAB22:    if (t16 == 1)
        goto LAB17;

LAB18:    t15 = (unsigned char)0;

LAB19:    if (t15 == 1)
        goto LAB14;

LAB15:    t14 = (unsigned char)0;

LAB16:    if (t14 == 1)
        goto LAB11;

LAB12:    t13 = (unsigned char)0;

LAB13:    t1 = t13;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB23:    t41 = (t0 + 8464);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_first_trans_fast(t41);

LAB2:    t46 = (t0 + 7808);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t36 = (t0 + 8464);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast(t36);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t9 = (t0 + 3752U);
    t10 = *((char **)t9);
    t9 = (t0 + 11464U);
    t11 = ieee_p_1242562249_sub_2778267465_1035706684(IEEE_P_1242562249, t8, t10, t9, 2);
    t12 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t11, t8, 0);
    t2 = t12;
    goto LAB10;

LAB11:    t33 = (t0 + 2792U);
    t34 = *((char **)t33);
    t33 = (t0 + 11448U);
    t35 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t34, t33, 480);
    t13 = t35;
    goto LAB13;

LAB14:    t27 = (t0 + 2632U);
    t31 = *((char **)t27);
    t27 = (t0 + 11432U);
    t32 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t31, t27, 640);
    t14 = t32;
    goto LAB16;

LAB17:    t27 = (t0 + 3272U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)2);
    t15 = t30;
    goto LAB19;

LAB20:    t23 = (t0 + 3752U);
    t24 = *((char **)t23);
    t23 = (t0 + 11464U);
    t25 = ieee_p_1242562249_sub_2778267465_1035706684(IEEE_P_1242562249, t22, t24, t23, 2);
    t26 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t25, t22, 1);
    t16 = t26;
    goto LAB22;

LAB24:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_7(char *t0)
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

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 8528);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 7824);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(84, ng0);

LAB3:    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    t3 = (t0 + 3272U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 3U);
    t3 = (t0 + 8592);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t10 = (t0 + 7840);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    t3 = (t0 + 2952U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 3U);
    t3 = (t0 + 8656);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t10 = (t0 + 7856);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0276264947_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    t3 = (t0 + 3112U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 2U);
    t3 = (t0 + 8720);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t10 = (t0 + 7872);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0276264947_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0276264947_3212880686_p_0,(void *)work_a_0276264947_3212880686_p_1,(void *)work_a_0276264947_3212880686_p_2,(void *)work_a_0276264947_3212880686_p_3,(void *)work_a_0276264947_3212880686_p_4,(void *)work_a_0276264947_3212880686_p_5,(void *)work_a_0276264947_3212880686_p_6,(void *)work_a_0276264947_3212880686_p_7,(void *)work_a_0276264947_3212880686_p_8,(void *)work_a_0276264947_3212880686_p_9,(void *)work_a_0276264947_3212880686_p_10};
	xsi_register_didat("work_a_0276264947_3212880686", "isim/lab5_topLevel_isim_beh.exe.sim/work/a_0276264947_3212880686.didat");
	xsi_register_executes(pe);
}
