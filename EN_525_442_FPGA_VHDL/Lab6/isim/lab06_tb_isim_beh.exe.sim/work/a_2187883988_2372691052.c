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
extern char *STD_STANDARD;
static const char *ng1 = "D:/VHDL Projects/Lab6/sram_d.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
static const char *ng4 = "source";
extern char *IEEE_P_3564397177;
static const char *ng6 = "dest";
extern char *IEEE_P_3620187407;

void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_1496949865_91900896(char *, char *, char *, unsigned char , unsigned char , int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


unsigned char work_a_2187883988_2372691052_sub_4208738216_4163069965(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    int t33;
    char *t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    char *t44;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 0);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t6 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    *((unsigned char *)t15) = (unsigned char)1;
    t7 = (t3 + 8U);
    t17 = *((int *)t7);
    t8 = (t3 + 4U);
    t18 = *((int *)t8);
    t10 = (t3 + 0U);
    t19 = *((int *)t10);
    t20 = t19;
    t21 = t18;

LAB4:    t22 = (t21 * t17);
    t23 = (t20 * t17);
    if (t23 <= t22)
        goto LAB5;

LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t0 = t13;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    t11 = (t3 + 0U);
    t24 = *((int *)t11);
    t15 = (t3 + 8U);
    t25 = *((int *)t15);
    t26 = (t20 - t24);
    t27 = (t26 * t25);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t16 = (t2 + t29);
    t30 = *((unsigned char *)t16);
    t31 = (t30 == (unsigned char)2);
    if (t31 == 1)
        goto LAB8;

LAB9:    t32 = (t3 + 0U);
    t33 = *((int *)t32);
    t34 = (t3 + 8U);
    t35 = *((int *)t34);
    t36 = (t20 - t33);
    t37 = (t36 * t35);
    t38 = (1U * t37);
    t39 = (0 + t38);
    t40 = (t2 + t39);
    t41 = *((unsigned char *)t40);
    t42 = (t41 == (unsigned char)3);
    t13 = t42;

LAB10:    t43 = (t6 + 56U);
    t44 = *((char **)t43);
    t43 = (t44 + 0);
    *((unsigned char *)t43) = t13;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t30 = (!(t13));
    if (t30 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB6:    if (t20 == t21)
        goto LAB7;

LAB15:    t18 = (t20 + t17);
    t20 = t18;
    goto LAB4;

LAB8:    t13 = (unsigned char)1;
    goto LAB10;

LAB11:    goto LAB7;

LAB14:    goto LAB12;

LAB16:;
}

unsigned char work_a_2187883988_2372691052_sub_106983919_4163069965(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 0);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t6 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    *((unsigned char *)t15) = (unsigned char)1;
    t7 = (t3 + 8U);
    t17 = *((int *)t7);
    t8 = (t3 + 4U);
    t18 = *((int *)t8);
    t10 = (t3 + 0U);
    t19 = *((int *)t10);
    t20 = t19;
    t21 = t18;

LAB4:    t22 = (t21 * t17);
    t23 = (t20 * t17);
    if (t23 <= t22)
        goto LAB5;

LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t0 = t13;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    t11 = (t3 + 0U);
    t24 = *((int *)t11);
    t15 = (t3 + 8U);
    t25 = *((int *)t15);
    t26 = (t20 - t24);
    t27 = (t26 * t25);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t16 = (t2 + t29);
    t13 = *((unsigned char *)t16);
    t30 = (t13 == (unsigned char)4);
    t31 = (t6 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    *((unsigned char *)t31) = t30;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t30 = (!(t13));
    if (t30 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t20 == t21)
        goto LAB7;

LAB12:    t18 = (t20 + t17);
    t20 = t18;
    goto LAB4;

LAB8:    goto LAB7;

LAB11:    goto LAB9;

LAB13:;
}

static void work_a_2187883988_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 13472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(226, ng1);
    t2 = (t0 + 38204);
    *((int *)t2) = 15;
    t3 = (t0 + 38208);
    *((int *)t3) = 0;
    t4 = 15;
    t5 = 0;

LAB4:    if (t4 >= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(230, ng1);
    t2 = (t0 + 38212);
    *((int *)t2) = 7;
    t3 = (t0 + 38216);
    *((int *)t3) = 0;
    t4 = 7;
    t5 = 0;

LAB9:    if (t4 >= t5)
        goto LAB10;

LAB12:    xsi_set_current_line(233, ng1);

LAB16:    *((char **)t1) = &&LAB17;

LAB1:    return;
LAB5:    xsi_set_current_line(227, ng1);
    t6 = (t0 + 38204);
    t7 = *((int *)t6);
    t8 = (t7 - 15);
    t9 = (t8 * -1);
    t10 = (1 * t9);
    t11 = (0U + t10);
    t12 = (t0 + 23672);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)4;
    xsi_driver_first_trans_delta(t12, t11, 1, 0LL);
    xsi_set_current_line(228, ng1);
    t2 = (t0 + 38204);
    t7 = *((int *)t2);
    t8 = (t7 - 15);
    t9 = (t8 * -1);
    t10 = (1 * t9);
    t11 = (0U + t10);
    t3 = (t0 + 23736);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_delta(t3, t11, 1, 0LL);

LAB6:    t2 = (t0 + 38204);
    t4 = *((int *)t2);
    t3 = (t0 + 38208);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB8:    t7 = (t4 + -1);
    t4 = t7;
    t6 = (t0 + 38204);
    *((int *)t6) = t4;
    goto LAB4;

LAB10:    xsi_set_current_line(231, ng1);
    t6 = (t0 + 38212);
    t7 = *((int *)t6);
    t8 = (t7 - 7);
    t9 = (t8 * -1);
    t10 = (1 * t9);
    t11 = (0U + t10);
    t12 = (t0 + 23800);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_delta(t12, t11, 1, 0LL);

LAB11:    t2 = (t0 + 38212);
    t4 = *((int *)t2);
    t3 = (t0 + 38216);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB12;

LAB13:    t7 = (t4 + -1);
    t4 = t7;
    t6 = (t0 + 38212);
    *((int *)t6) = t4;
    goto LAB9;

LAB14:    goto LAB2;

LAB15:    goto LAB14;

LAB17:    goto LAB15;

}

void work_a_2187883988_2372691052_sub_1023296262_3380155286(char *t0, char *t1, char *t2, unsigned char t3)
{
    char t4[128];
    char t5[24];
    char t6[32];
    char t15[8];
    char t23[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned char t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 255;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (255 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t6 + 16U);
    t11 = (t8 + 0U);
    *((int *)t11) = 15;
    t11 = (t8 + 4U);
    *((int *)t11) = 0;
    t11 = (t8 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 15);
    t10 = (t12 * -1);
    t10 = (t10 + 1);
    t11 = (t8 + 12U);
    *((unsigned int *)t11) = t10;
    t11 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 3320);
    t14 = (t11 + 88U);
    *((char **)t14) = t13;
    t16 = (t11 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t11 + 80U);
    *((unsigned int *)t17) = 1U;
    t18 = (t5 + 4U);
    *((char **)t18) = t2;
    t19 = (t5 + 12U);
    *((char **)t19) = t6;
    t20 = (t5 + 20U);
    *((unsigned char *)t20) = t3;
    if (t3 != 0)
        goto LAB2;

LAB4:    t7 = (t11 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)1;

LAB3:    t7 = (t0 + 12128U);
    t8 = *((char **)t7);
    t9 = *((int *)t8);
    t7 = (t0 + 12008U);
    t13 = *((char **)t7);
    t12 = *((int *)t13);
    t24 = t12;
    t25 = t9;

LAB5:    if (t24 <= t25)
        goto LAB6;

LAB8:
LAB1:    return;
LAB2:    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    *((unsigned char *)t21) = (unsigned char)2;
    t7 = ((STD_TEXTIO) + 1480U);
    t8 = (t0 + 38220);
    t14 = (t23 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 31;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (31 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    std_textio_write(t7, t8, t23);
    goto LAB3;

LAB6:    t26 = (16 - 1);
    t27 = t26;
    t28 = 0;

LAB9:    if (t27 >= t28)
        goto LAB10;

LAB12:
LAB7:    if (t24 == t25)
        goto LAB8;

LAB14:    t9 = (t24 + 1);
    t24 = t9;
    goto LAB5;

LAB10:    t7 = (t11 + 56U);
    t14 = *((char **)t7);
    t29 = *((unsigned char *)t14);
    t30 = (16 - 1);
    t31 = (t27 - t30);
    t10 = (t31 * -1);
    xsi_vhdl_check_range_of_index(t30, 0, -1, t27);
    t32 = (1U * t10);
    t33 = (t24 - 0);
    t34 = (t33 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t24);
    t35 = (16 - 1);
    t36 = (0 - t35);
    t37 = (t36 * -1);
    t37 = (t37 + 1);
    t37 = (t37 * 1U);
    t38 = (t37 * t34);
    t39 = (0 + t38);
    t40 = (t39 + t32);
    t7 = (t2 + t40);
    *((unsigned char *)t7) = t29;

LAB11:    if (t27 == t28)
        goto LAB12;

LAB13:    t9 = (t27 + -1);
    t27 = t9;
    goto LAB9;

}

void work_a_2187883988_2372691052_sub_2491163481_3380155286(char *t0, char *t1, char *t2, char *t3, char *t4)
{
    char t5[880];
    char t6[40];
    char t7[32];
    char t32[8];
    char t38[8];
    char t44[8];
    char t50[8];
    char t56[8];
    char t62[8];
    char t74[16];
    char t76[16];
    char t83[16];
    char t85[16];
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    int t13;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t75;
    char *t77;
    char *t78;
    int t79;
    unsigned int t80;
    char *t82;
    char *t84;
    char *t86;
    char *t87;
    int t88;
    unsigned char t89;
    int t90;
    int t91;
    unsigned int t92;
    int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 255;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (255 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t7 + 16U);
    t12 = (t9 + 0U);
    *((int *)t12) = 15;
    t12 = (t9 + 4U);
    *((int *)t12) = 0;
    t12 = (t9 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 15);
    t11 = (t13 * -1);
    t11 = (t11 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t11;
    t12 = ((STD_TEXTIO) + 3440);
    t14 = (t4 + 12U);
    t11 = *((unsigned int *)t14);
    t11 = (t11 * 1U);
    t15 = (t5 + 4U);
    t16 = xsi_create_file_variable_in_buffer(0, ng4, t12, t3, t11, 1);
    *((char **)t15) = t16;
    t17 = (t5 + 12U);
    t18 = ((STD_TEXTIO) + 3280);
    t19 = (t17 + 56U);
    *((char **)t19) = t18;
    t20 = (t17 + 40U);
    *((char **)t20) = 0;
    t21 = (t17 + 64U);
    *((int *)t21) = 1;
    t22 = (t17 + 48U);
    *((char **)t22) = 0;
    t23 = (t5 + 84U);
    t24 = ((STD_TEXTIO) + 3280);
    t25 = (t23 + 56U);
    *((char **)t25) = t24;
    t26 = (t23 + 40U);
    *((char **)t26) = 0;
    t27 = (t23 + 64U);
    *((int *)t27) = 1;
    t28 = (t23 + 48U);
    *((char **)t28) = 0;
    t29 = (t5 + 156U);
    t30 = ((STD_STANDARD) + 832);
    t31 = (t29 + 88U);
    *((char **)t31) = t30;
    t33 = (t29 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, 0);
    t34 = (t29 + 80U);
    *((unsigned int *)t34) = 4U;
    t35 = (t5 + 276U);
    t36 = ((STD_STANDARD) + 832);
    t37 = (t35 + 88U);
    *((char **)t37) = t36;
    t39 = (t35 + 56U);
    *((char **)t39) = t38;
    xsi_type_set_default_value(t36, t38, 0);
    t40 = (t35 + 80U);
    *((unsigned int *)t40) = 4U;
    t41 = (t5 + 396U);
    t42 = ((STD_STANDARD) + 832);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    xsi_type_set_default_value(t42, t44, 0);
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t5 + 516U);
    t48 = ((STD_STANDARD) + 192);
    t49 = (t47 + 88U);
    *((char **)t49) = t48;
    t51 = (t47 + 56U);
    *((char **)t51) = t50;
    xsi_type_set_default_value(t48, t50, 0);
    t52 = (t47 + 80U);
    *((unsigned int *)t52) = 1U;
    t53 = (t5 + 636U);
    t54 = ((STD_STANDARD) + 384);
    t55 = (t53 + 88U);
    *((char **)t55) = t54;
    t57 = (t53 + 56U);
    *((char **)t57) = t56;
    *((int *)t56) = 1;
    t58 = (t53 + 80U);
    *((unsigned int *)t58) = 4U;
    t59 = (t5 + 756U);
    t60 = ((IEEE_P_2592010699) + 3320);
    t61 = (t59 + 88U);
    *((char **)t61) = t60;
    t63 = (t59 + 56U);
    *((char **)t63) = t62;
    *((unsigned char *)t62) = (unsigned char)0;
    t64 = (t59 + 80U);
    *((unsigned int *)t64) = 1U;
    t65 = (t6 + 4U);
    *((char **)t65) = t2;
    t66 = (t6 + 12U);
    *((char **)t66) = t7;
    t67 = (t6 + 20U);
    t68 = (t3 != 0);
    if (t68 == 1)
        goto LAB3;

LAB2:    t69 = (t6 + 28U);
    *((char **)t69) = t4;
    t70 = ((STD_TEXTIO) + 1480U);
    t71 = (t0 + 38251);
    t75 = ((STD_STANDARD) + 1008);
    t77 = (t76 + 0U);
    t78 = (t77 + 0U);
    *((int *)t78) = 1;
    t78 = (t77 + 4U);
    *((int *)t78) = 23;
    t78 = (t77 + 8U);
    *((int *)t78) = 1;
    t79 = (23 - 1);
    t80 = (t79 * 1);
    t80 = (t80 + 1);
    t78 = (t77 + 12U);
    *((unsigned int *)t78) = t80;
    t73 = xsi_base_array_concat(t73, t74, t75, (char)97, t71, t76, (char)97, t3, t4, (char)101);
    t78 = (t0 + 38274);
    t84 = ((STD_STANDARD) + 1008);
    t86 = (t85 + 0U);
    t87 = (t86 + 0U);
    *((int *)t87) = 1;
    t87 = (t86 + 4U);
    *((int *)t87) = 5;
    t87 = (t86 + 8U);
    *((int *)t87) = 1;
    t88 = (5 - 1);
    t80 = (t88 * 1);
    t80 = (t80 + 1);
    t87 = (t86 + 12U);
    *((unsigned int *)t87) = t80;
    t82 = xsi_base_array_concat(t82, t83, t84, (char)97, t73, t74, (char)97, t78, t85, (char)101);
    std_textio_write(t70, t82, t83);

LAB4:    t8 = (t5 + 4U);
    t9 = *((char **)t8);
    t68 = std_textio_endfile(t9);
    t89 = (!(t68));
    if (t89 != 0)
        goto LAB5;

LAB7:
LAB1:    xsi_access_variable_delete(t17);
    xsi_access_variable_delete(t23);
    t8 = (t5 + 4U);
    t14 = *((char **)t8);
    xsi_delete_file_variable(t14);
    return;
LAB3:    *((char **)t67) = t3;
    goto LAB2;

LAB5:    t12 = (t5 + 4U);
    t14 = *((char **)t12);
    std_textio_readline(STD_TEXTIO, t1, t14, t17);
    t8 = (t29 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    std_textio_read10(STD_TEXTIO, t1, t17, t8);
    t8 = (t47 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    std_textio_read8(STD_TEXTIO, t1, t17, t8);
    t8 = (t47 + 56U);
    t9 = *((char **)t8);
    t68 = *((unsigned char *)t9);
    t89 = (t68 != (unsigned char)32);
    if (t89 != 0)
        goto LAB8;

LAB10:
LAB9:    t10 = (16 - 1);
    t13 = t10;
    t79 = 0;

LAB13:    if (t13 >= t79)
        goto LAB14;

LAB16:    if ((unsigned char)1 != 0)
        goto LAB24;

LAB26:
LAB25:    t8 = (t53 + 56U);
    t14 = *((char **)t8);
    t10 = *((int *)t14);
    t13 = (t10 + 1);
    t8 = (t53 + 56U);
    t16 = *((char **)t8);
    t8 = (t16 + 0);
    *((int *)t8) = t13;
    goto LAB4;

LAB6:;
LAB8:    t8 = (t0 + 38279);
    t14 = (t74 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 22;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t10 = (22 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t11;
    std_textio_write7(STD_TEXTIO, t1, t23, t8, t74, (unsigned char)0, 0);
    t8 = (t4 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t9 = (char *)alloca(t11);
    memcpy(t9, t3, t11);
    std_textio_write7(STD_TEXTIO, t1, t23, t9, t4, (unsigned char)0, 0);
    t8 = (t0 + 38301);
    t14 = (t74 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 8;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t10 = (8 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t11;
    std_textio_write7(STD_TEXTIO, t1, t23, t8, t74, (unsigned char)0, 0);
    t8 = (t53 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    std_textio_write5(STD_TEXTIO, t1, t23, t10, (unsigned char)0, 0);
    t8 = ((STD_TEXTIO) + 1480U);
    std_textio_writeline(STD_TEXTIO, t1, t8, t23);
    if ((unsigned char)0 == 0)
        goto LAB11;

LAB12:    goto LAB9;

LAB11:    t8 = (t0 + 38309);
    xsi_report(t8, 19U, (unsigned char)3);
    goto LAB12;

LAB14:    t8 = (t47 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    std_textio_read8(STD_TEXTIO, t1, t17, t8);
    t8 = (t47 + 56U);
    t12 = *((char **)t8);
    t68 = *((unsigned char *)t12);
    t89 = (t68 == (unsigned char)49);
    if (t89 != 0)
        goto LAB17;

LAB19:    t8 = (t47 + 56U);
    t12 = *((char **)t8);
    t68 = *((unsigned char *)t12);
    t89 = (t68 != (unsigned char)48);
    if (t89 != 0)
        goto LAB20;

LAB22:
LAB21:    t10 = (16 - 1);
    t88 = (t13 - t10);
    t11 = (t88 * -1);
    xsi_vhdl_check_range_of_index(t10, 0, -1, t13);
    t80 = (1U * t11);
    t8 = (t29 + 56U);
    t14 = *((char **)t8);
    t90 = *((int *)t14);
    t91 = (t90 - 0);
    t92 = (t91 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t90);
    t93 = (16 - 1);
    t94 = (0 - t93);
    t95 = (t94 * -1);
    t95 = (t95 + 1);
    t95 = (t95 * 1U);
    t96 = (t95 * t92);
    t97 = (0 + t96);
    t98 = (t97 + t80);
    t8 = (t2 + t98);
    *((unsigned char *)t8) = (unsigned char)2;

LAB18:
LAB15:    if (t13 == t79)
        goto LAB16;

LAB23:    t10 = (t13 + -1);
    t13 = t10;
    goto LAB13;

LAB17:    t10 = (16 - 1);
    t88 = (t13 - t10);
    t11 = (t88 * -1);
    xsi_vhdl_check_range_of_index(t10, 0, -1, t13);
    t80 = (1U * t11);
    t8 = (t29 + 56U);
    t14 = *((char **)t8);
    t90 = *((int *)t14);
    t91 = (t90 - 0);
    t92 = (t91 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t90);
    t93 = (16 - 1);
    t94 = (0 - t93);
    t95 = (t94 * -1);
    t95 = (t95 + 1);
    t95 = (t95 * 1U);
    t96 = (t95 * t92);
    t97 = (0 + t96);
    t98 = (t97 + t80);
    t8 = (t2 + t98);
    *((unsigned char *)t8) = (unsigned char)3;
    goto LAB18;

LAB20:    t8 = (t0 + 38328);
    t15 = (t74 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 23;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t10 = (23 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t11;
    std_textio_write7(STD_TEXTIO, t1, t23, t8, t74, (unsigned char)0, 0);
    t8 = (t47 + 56U);
    t12 = *((char **)t8);
    t68 = *((unsigned char *)t12);
    std_textio_write4(STD_TEXTIO, t1, t23, t68, (unsigned char)0, 0);
    t8 = (t0 + 38351);
    t14 = (t74 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 19;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t10 = (19 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t11;
    std_textio_write7(STD_TEXTIO, t1, t23, t8, t74, (unsigned char)0, 0);
    t8 = (t4 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t12 = (char *)alloca(t11);
    memcpy(t12, t3, t11);
    std_textio_write7(STD_TEXTIO, t1, t23, t12, t4, (unsigned char)0, 0);
    std_textio_write4(STD_TEXTIO, t1, t23, (unsigned char)40, (unsigned char)0, 0);
    t8 = (t53 + 56U);
    t14 = *((char **)t8);
    t10 = *((int *)t14);
    std_textio_write5(STD_TEXTIO, t1, t23, t10, (unsigned char)0, 0);
    t8 = (t0 + 38370);
    t15 = (t74 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 15;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t10 = (15 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t11;
    std_textio_write7(STD_TEXTIO, t1, t23, t8, t74, (unsigned char)0, 0);
    t8 = ((STD_TEXTIO) + 1480U);
    std_textio_writeline(STD_TEXTIO, t1, t8, t23);
    goto LAB21;

LAB24:    t8 = (t0 + 38385);
    t15 = (t74 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 4;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t10 = (4 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t11;
    std_textio_write7(STD_TEXTIO, t1, t23, t8, t74, (unsigned char)0, 0);
    t8 = (t29 + 56U);
    t14 = *((char **)t8);
    t10 = *((int *)t14);
    std_textio_write5(STD_TEXTIO, t1, t23, t10, (unsigned char)0, 0);
    t8 = (t0 + 38389);
    t15 = (t74 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 6;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t10 = (6 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t11;
    std_textio_write7(STD_TEXTIO, t1, t23, t8, t74, (unsigned char)0, 0);
    t8 = (t29 + 56U);
    t14 = *((char **)t8);
    t10 = *((int *)t14);
    t13 = (t10 - 0);
    t11 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t10);
    t79 = (16 - 1);
    t88 = (0 - t79);
    t80 = (t88 * -1);
    t80 = (t80 + 1);
    t80 = (t80 * 1U);
    t92 = (t80 * t11);
    t95 = (0 + t92);
    t8 = (t2 + t95);
    t90 = (16 - 1);
    t91 = (0 - t90);
    t96 = (t91 * -1);
    t96 = (t96 + 1);
    t96 = (t96 * 1U);
    t15 = (char *)alloca(t96);
    memcpy(t15, t8, t96);
    t93 = (16 - 1);
    t16 = (t74 + 0U);
    t18 = (t16 + 0U);
    *((int *)t18) = t93;
    t18 = (t16 + 4U);
    *((int *)t18) = 0;
    t18 = (t16 + 8U);
    *((int *)t18) = -1;
    t94 = (0 - t93);
    t97 = (t94 * -1);
    t97 = (t97 + 1);
    t18 = (t16 + 12U);
    *((unsigned int *)t18) = t97;
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t1, t23, t15, t74, (unsigned char)0, 0);
    t8 = ((STD_TEXTIO) + 1480U);
    std_textio_writeline(STD_TEXTIO, t1, t8, t23);
    goto LAB25;

}

void work_a_2187883988_2372691052_sub_3558600333_3380155286(char *t0, char *t1, char *t2, int t3, int t4, char *t5, char *t6)
{
    char t7[328];
    char t8[48];
    char t9[32];
    char t28[8];
    char t34[8];
    char t49[16];
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned char t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 255;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (255 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t9 + 16U);
    t14 = (t11 + 0U);
    *((int *)t14) = 15;
    t14 = (t11 + 4U);
    *((int *)t14) = 0;
    t14 = (t11 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 15);
    t13 = (t15 * -1);
    t13 = (t13 + 1);
    t14 = (t11 + 12U);
    *((unsigned int *)t14) = t13;
    t14 = ((STD_TEXTIO) + 3440);
    t16 = (t6 + 12U);
    t13 = *((unsigned int *)t16);
    t13 = (t13 * 1U);
    t17 = (t7 + 4U);
    t18 = xsi_create_file_variable_in_buffer(0, ng6, t14, t5, t13, 2);
    *((char **)t17) = t18;
    t19 = (t7 + 12U);
    t20 = ((STD_TEXTIO) + 3280);
    t21 = (t19 + 56U);
    *((char **)t21) = t20;
    t22 = (t19 + 40U);
    *((char **)t22) = 0;
    t23 = (t19 + 64U);
    *((int *)t23) = 1;
    t24 = (t19 + 48U);
    *((char **)t24) = 0;
    t25 = (t7 + 84U);
    t26 = ((STD_STANDARD) + 832);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t7 + 204U);
    t32 = ((STD_STANDARD) + 192);
    t33 = (t31 + 88U);
    *((char **)t33) = t32;
    t35 = (t31 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, 0);
    t36 = (t31 + 80U);
    *((unsigned int *)t36) = 1U;
    t37 = (t8 + 4U);
    *((char **)t37) = t2;
    t38 = (t8 + 12U);
    *((char **)t38) = t9;
    t39 = (t8 + 20U);
    *((int *)t39) = t3;
    t40 = (t8 + 24U);
    *((int *)t40) = t4;
    t41 = (t8 + 28U);
    t42 = (t5 != 0);
    if (t42 == 1)
        goto LAB3;

LAB2:    t43 = (t8 + 36U);
    *((char **)t43) = t6;
    t45 = (t3 > t4);
    if (t45 == 1)
        goto LAB7;

LAB8:    t46 = (t4 >= 256);
    t44 = t46;

LAB9:    if (t44 != 0)
        goto LAB4;

LAB6:    t10 = (t0 + 38440);
    t14 = (t49 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 9;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t12 = (9 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t13;
    std_textio_write7(STD_TEXTIO, t1, t19, t10, t49, (unsigned char)0, 0);
    std_textio_write5(STD_TEXTIO, t1, t19, t3, (unsigned char)0, 0);
    t10 = (t7 + 4U);
    t11 = *((char **)t10);
    std_textio_writeline(STD_TEXTIO, t1, t11, t19);
    t12 = (256 - 1);
    t15 = 0;
    t50 = t12;

LAB12:    if (t15 <= t50)
        goto LAB13;

LAB15:
LAB5:
LAB1:    xsi_access_variable_delete(t19);
    t10 = (t7 + 4U);
    t11 = *((char **)t10);
    xsi_delete_file_variable(t11);
    return;
LAB3:    *((char **)t41) = t5;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB10;

LAB11:    goto LAB5;

LAB7:    t44 = (unsigned char)1;
    goto LAB9;

LAB10:    t47 = (t0 + 38395);
    xsi_report(t47, 45U, (unsigned char)2);
    goto LAB11;

LAB13:    t51 = (16 - 1);
    t52 = t51;
    t53 = 0;

LAB16:    if (t52 >= t53)
        goto LAB17;

LAB19:    t10 = (t7 + 4U);
    t11 = *((char **)t10);
    std_textio_writeline(STD_TEXTIO, t1, t11, t19);

LAB14:    if (t15 == t50)
        goto LAB15;

LAB21:    t12 = (t15 + 1);
    t15 = t12;
    goto LAB12;

LAB17:    t54 = (16 - 1);
    t55 = (t52 - t54);
    t13 = (t55 * -1);
    xsi_vhdl_check_range_of_index(t54, 0, -1, t52);
    t56 = (1U * t13);
    t57 = (t15 - 0);
    t58 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t15);
    t59 = (16 - 1);
    t60 = (0 - t59);
    t61 = (t60 * -1);
    t61 = (t61 + 1);
    t61 = (t61 * 1U);
    t62 = (t61 * t58);
    t63 = (0 + t62);
    t64 = (t63 + t56);
    t10 = (t2 + t64);
    t42 = *((unsigned char *)t10);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t1, t19, t42, (unsigned char)0, 0);

LAB18:    if (t52 == t53)
        goto LAB19;

LAB20:    t12 = (t52 + -1);
    t52 = t12;
    goto LAB16;

}

static void work_a_2187883988_2372691052_p_1(char *t0)
{
    char t6[16];
    char t22[16];
    char t30[16];
    char t31[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 13720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(349, ng1);
    t2 = (t0 + 13528);
    t3 = (t0 + 12248U);
    t4 = *((char **)t3);
    work_a_2187883988_2372691052_sub_1023296262_3380155286(t0, t2, t4, (unsigned char)0);
    xsi_set_current_line(350, ng1);
    if ((unsigned char)0 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(353, ng1);

LAB7:
LAB8:    xsi_set_current_line(354, ng1);
    t2 = (t0 + 3872U);
    t8 = xsi_signal_has_event(t2);
    if (t8 == 1)
        goto LAB14;

LAB15:    t7 = (unsigned char)0;

LAB16:    if (t7 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(376, ng1);
    t2 = (t0 + 4392U);
    t3 = *((char **)t2);
    t2 = (t0 + 33676U);
    t7 = work_a_2187883988_2372691052_sub_4208738216_4163069965(t0, t3, t2);
    if (t7 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(379, ng1);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 23864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t14 = (t5 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t3, 16U);
    xsi_driver_first_trans_fast(t2);

LAB33:    xsi_set_current_line(381, ng1);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    if (t8 == 1)
        goto LAB38;

LAB39:    t7 = (unsigned char)0;

LAB40:    if (t7 != 0)
        goto LAB35;

LAB37:
LAB36:    xsi_set_current_line(383, ng1);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    if (t8 == 1)
        goto LAB44;

LAB45:    t7 = (unsigned char)0;

LAB46:    if (t7 != 0)
        goto LAB41;

LAB43:
LAB42:    xsi_set_current_line(385, ng1);

LAB49:    t2 = (t0 + 23016);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB50;

LAB1:    return;
LAB4:    xsi_set_current_line(351, ng1);
    t2 = (t0 + 13528);
    t3 = (t0 + 12248U);
    t4 = *((char **)t3);
    t3 = (t0 + 2152U);
    t5 = *((char **)t3);
    memcpy(t6, t5, 13U);
    t3 = (t0 + 33548U);
    work_a_2187883988_2372691052_sub_2491163481_3380155286(t0, t2, t4, t6, t3);
    goto LAB5;

LAB9:;
LAB10:    goto LAB2;

LAB11:    xsi_set_current_line(355, ng1);
    t3 = (t0 + 1672U);
    t5 = *((char **)t3);
    t3 = (t0 + 33532U);
    t11 = work_a_2187883988_2372691052_sub_4208738216_4163069965(t0, t5, t3);
    t12 = (!(t11));
    if (t12 != 0)
        goto LAB17;

LAB19:    t2 = (t0 + 5032U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB26;

LAB27:    t2 = (t0 + 5192U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (!(t7));
    if (t8 != 0)
        goto LAB28;

LAB29:    t2 = (t0 + 5512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    if (t7 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(372, ng1);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 12488U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);

LAB18:    xsi_set_current_line(374, ng1);
    t2 = (t0 + 12488U);
    t3 = *((char **)t2);
    t2 = (t0 + 12248U);
    t4 = *((char **)t2);
    t2 = (t0 + 4392U);
    t5 = *((char **)t2);
    t2 = (t0 + 33676U);
    t25 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t27 = (t25 - 0);
    t26 = (t27 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t25);
    t28 = (16U * t26);
    t29 = (0 + t28);
    t14 = (t4 + t29);
    memcpy(t14, t3, 16U);
    goto LAB12;

LAB14:    t3 = (t0 + 3912U);
    t4 = *((char **)t3);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    t7 = t10;
    goto LAB16;

LAB17:    xsi_set_current_line(356, ng1);
    t14 = (t0 + 1632U);
    t15 = xsi_signal_has_event(t14);
    if (t15 == 1)
        goto LAB23;

LAB24:    t13 = (unsigned char)0;

LAB25:    if (t13 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(360, ng1);
    t2 = ((STD_TEXTIO) + 1480U);
    t3 = (t0 + 38498);
    t5 = (t22 + 0U);
    t14 = (t5 + 0U);
    *((int *)t14) = 1;
    t14 = (t5 + 4U);
    *((int *)t14) = 43;
    t14 = (t5 + 8U);
    *((int *)t14) = 1;
    t25 = (43 - 1);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t14 = (t5 + 12U);
    *((unsigned int *)t14) = t26;
    std_textio_write(t2, t3, t22);
    xsi_set_current_line(361, ng1);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 12488U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(357, ng1);
    t19 = ((STD_TEXTIO) + 1480U);
    t20 = (t0 + 38449);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 1;
    t24 = (t23 + 4U);
    *((int *)t24) = 49;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (49 - 1);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    std_textio_write(t19, t20, t22);
    xsi_set_current_line(358, ng1);
    t2 = (t0 + 4712U);
    t3 = *((char **)t2);
    t2 = (t0 + 12488U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);
    goto LAB21;

LAB23:    t16 = (t0 + 4552U);
    t17 = *((char **)t16);
    t16 = (t0 + 33692U);
    t18 = work_a_2187883988_2372691052_sub_4208738216_4163069965(t0, t17, t16);
    t13 = t18;
    goto LAB25;

LAB26:    xsi_set_current_line(364, ng1);
    t2 = ((STD_TEXTIO) + 1480U);
    t4 = (t0 + 38541);
    t14 = (t22 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 80;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t25 = (80 - 1);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t26;
    std_textio_write(t2, t4, t22);
    xsi_set_current_line(365, ng1);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 12488U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);
    goto LAB18;

LAB28:    xsi_set_current_line(367, ng1);
    t2 = ((STD_TEXTIO) + 1480U);
    t4 = (t0 + 38621);
    t14 = (t22 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 79;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t25 = (79 - 1);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t26;
    std_textio_write(t2, t4, t22);
    xsi_set_current_line(368, ng1);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 12488U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);
    goto LAB18;

LAB30:    xsi_set_current_line(370, ng1);
    t2 = ((STD_TEXTIO) + 1480U);
    t4 = (t0 + 38700);
    t14 = (t22 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 57;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t25 = (57 - 1);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t26;
    std_textio_write(t2, t4, t22);
    xsi_set_current_line(371, ng1);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 12488U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);
    goto LAB18;

LAB32:    xsi_set_current_line(377, ng1);
    t4 = (t0 + 12248U);
    t5 = *((char **)t4);
    t4 = (t0 + 4392U);
    t14 = *((char **)t4);
    t4 = (t0 + 33676U);
    t25 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t14, t4);
    t27 = (t25 - 0);
    t26 = (t27 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t25);
    t28 = (16U * t26);
    t29 = (0 + t28);
    t16 = (t5 + t29);
    t17 = (t0 + 23864);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t16, 16U);
    xsi_driver_first_trans_fast(t17);
    goto LAB33;

LAB35:    xsi_set_current_line(381, ng1);
    t4 = (t0 + 13528);
    t5 = (t0 + 12248U);
    t14 = *((char **)t5);
    t5 = (t0 + 2472U);
    t16 = *((char **)t5);
    t25 = *((int *)t16);
    t5 = (t0 + 2632U);
    t17 = *((char **)t5);
    t27 = *((int *)t17);
    t5 = (t0 + 2792U);
    t19 = *((char **)t5);
    memcpy(t30, t19, 13U);
    t5 = (t0 + 33564U);
    work_a_2187883988_2372691052_sub_3558600333_3380155286(t0, t4, t14, t25, t27, t30, t5);
    goto LAB36;

LAB38:    t2 = (t0 + 2272U);
    t9 = xsi_signal_has_event(t2);
    t7 = t9;
    goto LAB40;

LAB41:    xsi_set_current_line(383, ng1);
    t4 = (t0 + 13528);
    t5 = (t0 + 12248U);
    t14 = *((char **)t5);
    t5 = (t0 + 2152U);
    t16 = *((char **)t5);
    memcpy(t31, t16, 13U);
    t5 = (t0 + 33548U);
    work_a_2187883988_2372691052_sub_2491163481_3380155286(t0, t4, t14, t31, t5);
    goto LAB42;

LAB44:    t2 = (t0 + 1952U);
    t9 = xsi_signal_has_event(t2);
    t7 = t9;
    goto LAB46;

LAB47:    t3 = (t0 + 23016);
    *((int *)t3) = 0;
    goto LAB7;

LAB48:    goto LAB47;

LAB50:    goto LAB48;

}

static void work_a_2187883988_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(391, ng1);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 23928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_delta(t1, 0U, 8U, 70000LL);

LAB2:    t7 = (t0 + 23032);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2187883988_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(392, ng1);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 23992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_delta(t1, 0U, 8U, 5000LL);

LAB2:    t7 = (t0 + 23048);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2187883988_2372691052_p_4(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
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
    char *t25;

LAB0:    xsi_set_current_line(394, ng1);
    t3 = (t0 + 4072U);
    t4 = *((char **)t3);
    t3 = (t0 + 33644U);
    t5 = work_a_2187883988_2372691052_sub_4208738216_4163069965(t0, t4, t3);
    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t19 = (t0 + 3272U);
    t20 = *((char **)t19);
    t19 = (t0 + 24056);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t25 = (t0 + 23064);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 4072U);
    t14 = *((char **)t11);
    t11 = (t0 + 24056);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 8U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB5:    t11 = (t0 + 5672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t1 = t13;
    goto LAB7;

LAB8:    t6 = (t0 + 4072U);
    t7 = *((char **)t6);
    t6 = (t0 + 33644U);
    t8 = (t0 + 4232U);
    t9 = *((char **)t8);
    t8 = (t0 + 33660U);
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t6, t9, t8);
    t2 = t10;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_2187883988_2372691052_p_5(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    unsigned char t39;
    char *t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(399, ng1);

LAB3:    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB26;

LAB27:    t8 = (unsigned char)0;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t7 = (unsigned char)0;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t6 = (unsigned char)0;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t5 = (unsigned char)0;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 3432U);
    t38 = *((char **)t9);
    t39 = *((unsigned char *)t38);
    if (t39 == 1)
        goto LAB38;

LAB39:    t37 = (unsigned char)0;

LAB40:    if (t37 == 1)
        goto LAB35;

LAB36:    t36 = (unsigned char)0;

LAB37:    if (t36 == 1)
        goto LAB32;

LAB33:    t35 = (unsigned char)0;

LAB34:    t1 = t35;

LAB7:    t9 = (t0 + 24120);
    t49 = (t9 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    *((unsigned char *)t52) = t1;
    xsi_driver_first_trans_fast(t9);

LAB2:    t53 = (t0 + 23080);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t9 = (t0 + 6472U);
    t33 = *((char **)t9);
    t34 = *((unsigned char *)t33);
    t2 = t34;
    goto LAB10;

LAB11:    t9 = (t0 + 6312U);
    t31 = *((char **)t9);
    t32 = *((unsigned char *)t31);
    t3 = t32;
    goto LAB13;

LAB14:    t9 = (t0 + 1832U);
    t28 = *((char **)t9);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)3);
    t4 = t30;
    goto LAB16;

LAB17:    t9 = (t0 + 1032U);
    t25 = *((char **)t9);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)2);
    t5 = t27;
    goto LAB19;

LAB20:    t9 = (t0 + 1352U);
    t19 = *((char **)t9);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    if (t21 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 6152U);
    t22 = *((char **)t9);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    t18 = t24;

LAB31:    t6 = t18;
    goto LAB22;

LAB23:    t9 = (t0 + 5992U);
    t16 = *((char **)t9);
    t17 = *((unsigned char *)t16);
    t7 = t17;
    goto LAB25;

LAB26:    t9 = (t0 + 5832U);
    t13 = *((char **)t9);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t8 = t15;
    goto LAB28;

LAB29:    t18 = (unsigned char)1;
    goto LAB31;

LAB32:    t9 = (t0 + 6952U);
    t46 = *((char **)t9);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)3);
    t35 = t48;
    goto LAB34;

LAB35:    t9 = (t0 + 6792U);
    t43 = *((char **)t9);
    t44 = *((unsigned char *)t43);
    t45 = (t44 == (unsigned char)2);
    t36 = t45;
    goto LAB37;

LAB38:    t9 = (t0 + 6632U);
    t40 = *((char **)t9);
    t41 = *((unsigned char *)t40);
    t42 = (t41 == (unsigned char)2);
    t37 = t42;
    goto LAB40;

}

static void work_a_2187883988_2372691052_p_6(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(405, ng1);

LAB3:    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB23;

LAB24:    t7 = (unsigned char)0;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t6 = (unsigned char)0;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t5 = (unsigned char)0;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 3592U);
    t28 = *((char **)t8);
    t29 = *((unsigned char *)t28);
    if (t29 == 1)
        goto LAB26;

LAB27:    t27 = (unsigned char)0;

LAB28:    t1 = t27;

LAB7:    t8 = (t0 + 24184);
    t32 = (t8 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t1;
    xsi_driver_first_trans_fast(t8);

LAB2:    t36 = (t0 + 23096);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t8 = (t0 + 7432U);
    t25 = *((char **)t8);
    t26 = *((unsigned char *)t25);
    t2 = t26;
    goto LAB10;

LAB11:    t8 = (t0 + 7272U);
    t23 = *((char **)t8);
    t24 = *((unsigned char *)t23);
    t3 = t24;
    goto LAB13;

LAB14:    t8 = (t0 + 1832U);
    t20 = *((char **)t8);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)3);
    t4 = t22;
    goto LAB16;

LAB17:    t8 = (t0 + 1032U);
    t17 = *((char **)t8);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)2);
    t5 = t19;
    goto LAB19;

LAB20:    t8 = (t0 + 1352U);
    t14 = *((char **)t8);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t6 = t16;
    goto LAB22;

LAB23:    t8 = (t0 + 7112U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t7 = t13;
    goto LAB25;

LAB26:    t8 = (t0 + 3432U);
    t30 = *((char **)t8);
    t31 = *((unsigned char *)t30);
    t27 = t31;
    goto LAB28;

}

static void work_a_2187883988_2372691052_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(409, ng1);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t13 = (t0 + 3592U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB10;

LAB11:    t12 = (unsigned char)0;

LAB12:    if (t12 != 0)
        goto LAB8;

LAB9:
LAB13:    t24 = (t0 + 2952U);
    t25 = *((char **)t24);
    t24 = (t0 + 24248);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 16U);
    xsi_driver_first_trans_fast_port(t24);

LAB2:    t30 = (t0 + 23112);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 3752U);
    t7 = *((char **)t2);
    t2 = (t0 + 24248);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 3432U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t1 = t6;
    goto LAB7;

LAB8:    t13 = (t0 + 3112U);
    t19 = *((char **)t13);
    t13 = (t0 + 24248);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t19, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB2;

LAB10:    t13 = (t0 + 3432U);
    t17 = *((char **)t13);
    t18 = *((unsigned char *)t17);
    t12 = t18;
    goto LAB12;

LAB14:    goto LAB2;

}

static void work_a_2187883988_2372691052_p_8(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int64 t30;
    int64 t31;

LAB0:    xsi_set_current_line(416, ng1);
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB17;

LAB18:    t6 = (t0 + 1352U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t5 = t12;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t6 = (t0 + 1832U);
    t13 = *((char **)t6);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t4 = t15;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(421, ng1);
    t30 = xsi_get_sim_current_time();
    t31 = (0 * 1000LL);
    t4 = (t30 > t31);
    if (t4 == 1)
        goto LAB29;

LAB30:    t3 = (unsigned char)0;

LAB31:    if (t3 == 1)
        goto LAB26;

LAB27:    t2 = (unsigned char)0;

LAB28:    if (t2 == 1)
        goto LAB23;

LAB24:    t1 = (unsigned char)0;

LAB25:    if (t1 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(435, ng1);
    t6 = (t0 + 24312);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);

LAB3:    t6 = (t0 + 23128);
    *((int *)t6) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(419, ng1);
    t6 = (t0 + 24312);
    t25 = (t6 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t29 = (t0 + 24312);
    xsi_driver_intertial_reject(t29, 0LL, 0LL);
    goto LAB3;

LAB5:    t6 = (t0 + 7912U);
    t22 = *((char **)t6);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    t1 = t24;
    goto LAB7;

LAB8:    t6 = (t0 + 7752U);
    t19 = *((char **)t6);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    t2 = t21;
    goto LAB10;

LAB11:    t6 = (t0 + 7592U);
    t16 = *((char **)t6);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t3 = t18;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    xsi_set_current_line(423, ng1);
    t6 = (t0 + 1512U);
    t16 = *((char **)t6);
    t6 = (t0 + 33516U);
    t15 = work_a_2187883988_2372691052_sub_4208738216_4163069965(t0, t16, t6);
    if (t15 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(427, ng1);
    t6 = (t0 + 8072U);
    t7 = *((char **)t6);
    t1 = *((unsigned char *)t7);
    if (t1 == 0)
        goto LAB34;

LAB35:    xsi_set_current_line(431, ng1);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t2 = *((unsigned char *)t7);
    t3 = (t2 == (unsigned char)3);
    if (t3 == 1)
        goto LAB38;

LAB39:    t1 = (unsigned char)0;

LAB40:    if (t1 == 0)
        goto LAB36;

LAB37:    goto LAB21;

LAB23:    t6 = (t0 + 1352U);
    t13 = *((char **)t6);
    t12 = *((unsigned char *)t13);
    t14 = (t12 == (unsigned char)2);
    t1 = t14;
    goto LAB25;

LAB26:    t6 = (t0 + 1832U);
    t10 = *((char **)t6);
    t9 = *((unsigned char *)t10);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB28;

LAB29:    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t5 = *((unsigned char *)t7);
    t8 = (t5 == (unsigned char)2);
    t3 = t8;
    goto LAB31;

LAB32:    t19 = (t0 + 38757);
    xsi_report(t19, 43U, (unsigned char)3);
    goto LAB33;

LAB34:    t6 = (t0 + 38800);
    xsi_report(t6, 75U, (unsigned char)2);
    goto LAB35;

LAB36:    t6 = (t0 + 38875);
    xsi_report(t6, 57U, (unsigned char)2);
    goto LAB37;

LAB38:    t6 = (t0 + 8232U);
    t10 = *((char **)t6);
    t4 = *((unsigned char *)t10);
    t1 = t4;
    goto LAB40;

}

static void work_a_2187883988_2372691052_p_9(char *t0)
{
    int64 t1;
    int64 t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;

LAB0:    xsi_set_current_line(448, ng1);
    t1 = xsi_get_sim_current_time();
    t2 = (0 * 1000LL);
    t3 = (t1 > t2);
    if (t3 != 0)
        goto LAB2;

LAB4:
LAB3:    t6 = (t0 + 23144);
    *((int *)t6) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(449, ng1);
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB10;

LAB11:    t6 = (t0 + 1832U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t5 = t12;

LAB12:    if (t5 == 1)
        goto LAB7;

LAB8:    t6 = (t0 + 1352U);
    t13 = *((char **)t6);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    t4 = t15;

LAB9:    if (t4 == 0)
        goto LAB5;

LAB6:    xsi_set_current_line(453, ng1);
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t11 = *((unsigned char *)t7);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB27;

LAB28:    t6 = (t0 + 1832U);
    t10 = *((char **)t6);
    t14 = *((unsigned char *)t10);
    t15 = (t14 == (unsigned char)2);
    t9 = t15;

LAB29:    if (t9 == 1)
        goto LAB24;

LAB25:    t6 = (t0 + 1352U);
    t13 = *((char **)t6);
    t17 = *((unsigned char *)t13);
    t18 = (t17 == (unsigned char)3);
    t8 = t18;

LAB26:    if (t8 == 1)
        goto LAB21;

LAB22:    t6 = (t0 + 8392U);
    t16 = *((char **)t6);
    t19 = *((unsigned char *)t16);
    t20 = (t19 == (unsigned char)3);
    t5 = t20;

LAB23:    if (t5 == 1)
        goto LAB18;

LAB19:    t6 = (t0 + 8552U);
    t21 = *((char **)t6);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)2);
    t4 = t23;

LAB20:    if (t4 == 1)
        goto LAB15;

LAB16:    t6 = (t0 + 8712U);
    t24 = *((char **)t6);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)3);
    t3 = t26;

LAB17:    if (t3 == 0)
        goto LAB13;

LAB14:    goto LAB3;

LAB5:    t6 = (t0 + 38932);
    xsi_report(t6, 45U, (unsigned char)3);
    goto LAB6;

LAB7:    t4 = (unsigned char)1;
    goto LAB9;

LAB10:    t5 = (unsigned char)1;
    goto LAB12;

LAB13:    t6 = (t0 + 38977);
    xsi_report(t6, 72U, (unsigned char)3);
    goto LAB14;

LAB15:    t3 = (unsigned char)1;
    goto LAB17;

LAB18:    t4 = (unsigned char)1;
    goto LAB20;

LAB21:    t5 = (unsigned char)1;
    goto LAB23;

LAB24:    t8 = (unsigned char)1;
    goto LAB26;

LAB27:    t9 = (unsigned char)1;
    goto LAB29;

}

static void work_a_2187883988_2372691052_p_10(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    int64 t3;
    int64 t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;

LAB0:    xsi_set_current_line(464, ng1);
    t3 = xsi_get_sim_current_time();
    t4 = (0 * 1000LL);
    t5 = (t3 > t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t6 = (t0 + 23160);
    *((int *)t6) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(465, ng1);
    t6 = (t0 + 1032U);
    t14 = *((char **)t6);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 1)
        goto LAB14;

LAB15:    t13 = (unsigned char)0;

LAB16:    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(470, ng1);
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t1 = *((unsigned char *)t7);
    t2 = (t1 != (unsigned char)2);
    if (t2 != 0)
        goto LAB22;

LAB24:
LAB23:    xsi_set_current_line(479, ng1);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t1 = *((unsigned char *)t7);
    t2 = (t1 != (unsigned char)3);
    if (t2 != 0)
        goto LAB29;

LAB31:
LAB30:
LAB12:    goto LAB3;

LAB5:    t6 = (t0 + 1832U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 != (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 != (unsigned char)3);
    t2 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(466, ng1);
    t6 = (t0 + 1352U);
    t21 = *((char **)t6);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)2);
    if (t23 == 1)
        goto LAB19;

LAB20:    t6 = (t0 + 1352U);
    t24 = *((char **)t6);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)3);
    t20 = t26;

LAB21:    if (t20 == 0)
        goto LAB17;

LAB18:    goto LAB12;

LAB14:    t6 = (t0 + 1832U);
    t17 = *((char **)t6);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)3);
    t13 = t19;
    goto LAB16;

LAB17:    t6 = (t0 + 39049);
    xsi_report(t6, 46U, (unsigned char)1);
    goto LAB18;

LAB19:    t20 = (unsigned char)1;
    goto LAB21;

LAB22:    xsi_set_current_line(471, ng1);
    t6 = (t0 + 1192U);
    t10 = *((char **)t6);
    t5 = *((unsigned char *)t10);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 0)
        goto LAB25;

LAB26:    xsi_set_current_line(475, ng1);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t1 = *((unsigned char *)t7);
    t2 = (t1 == (unsigned char)3);
    if (t2 == 0)
        goto LAB27;

LAB28:    goto LAB23;

LAB25:    t6 = (t0 + 39095);
    xsi_report(t6, 49U, (unsigned char)1);
    goto LAB26;

LAB27:    t6 = (t0 + 39144);
    xsi_report(t6, 49U, (unsigned char)2);
    goto LAB28;

LAB29:    xsi_set_current_line(480, ng1);
    t6 = (t0 + 1192U);
    t10 = *((char **)t6);
    t5 = *((unsigned char *)t10);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(484, ng1);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t1 = *((unsigned char *)t7);
    t2 = (t1 == (unsigned char)3);
    if (t2 == 0)
        goto LAB34;

LAB35:    goto LAB30;

LAB32:    t6 = (t0 + 39193);
    xsi_report(t6, 49U, (unsigned char)1);
    goto LAB33;

LAB34:    t6 = (t0 + 39242);
    xsi_report(t6, 49U, (unsigned char)2);
    goto LAB35;

}

static void work_a_2187883988_2372691052_p_11(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(356, ng1);
    t1 = (0 * 1000LL);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 24376);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 16U);
    xsi_driver_first_trans_delta(t2, 0U, 16U, t1);
    t2 = (t0 + 23176);
    *((int *)t2) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_12(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(358, ng1);
    t1 = (0 * 1000LL);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 24440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 16U);
    xsi_driver_first_trans_delta(t2, 0U, 16U, t1);
    t2 = (t0 + 23192);
    *((int *)t2) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(363, ng1);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 24504);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    t1 = (t0 + 23208);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(369, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24568);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t1 = (t0 + 23224);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(399, ng1);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24632);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 3000LL);
    t1 = (t0 + 23240);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(400, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 8000LL);
    t1 = (t0 + 23256);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(402, ng1);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24760);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 8000LL);
    t1 = (t0 + 23272);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(403, ng1);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24824);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 8000LL);
    t1 = (t0 + 23288);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(403, ng1);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24888);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 8000LL);
    t1 = (t0 + 23304);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_20(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(417, ng1);
    t1 = (0 * 1000LL);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 24952);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t2 = (t0 + 23320);
    *((int *)t2) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_21(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(417, ng1);
    t1 = (0 * 1000LL);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 25016);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t2 = (t0 + 23336);
    *((int *)t2) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_22(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(417, ng1);
    t1 = (0 * 1000LL);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 25080);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t2 = (t0 + 23352);
    *((int *)t2) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_23(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(454, ng1);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 25144);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 2000LL);
    t1 = (t0 + 23368);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_24(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(454, ng1);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 25208);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 2000LL);
    t1 = (t0 + 23384);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_2187883988_2372691052_p_25(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(455, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 25272);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 2000LL);
    t1 = (t0 + 23400);
    *((int *)t1) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052nwe_implicit_delayed_3_implicit_stable_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25336);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 45000LL);
    t2 = (t0 + 23416);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052noe_implicit_stable_11(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25400);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 5000LL);
    t2 = (t0 + 23432);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052a_implicit_stable_10(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25464);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 5000LL);
    t2 = (t0 + 23448);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052ce2_implicit_stable_9(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25528);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 70000LL);
    t2 = (t0 + 23464);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052nce_implicit_stable_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25592);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 10000LL);
    t2 = (t0 + 23480);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052noe_implicit_stable_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25656);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 3000LL);
    t2 = (t0 + 23496);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052d_implicit_stable_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25720);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 0LL);
    t2 = (t0 + 23512);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052adr_hold_implicit_stable_3(char *t0)
{
    char *t1;
    int64 t2;
    char *t3;

LAB0:    t1 = (t0 + 25784);
    t2 = (70000LL - 5000LL);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, t2);
    t3 = (t0 + 23528);
    *((int *)t3) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052noe_implicit_stable_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25848);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 20000LL);
    t2 = (t0 + 23544);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052ce2_implicit_stable_6(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25912);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 10000LL);
    t2 = (t0 + 23560);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052nce_implicit_stable_8(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 25976);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 70000LL);
    t2 = (t0 + 23576);
    *((int *)t2) = 1;

LAB1:    return;
}

static void a_2187883988_2372691052d_implicit_delayed_2_implicit_stable_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 26040);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 20000LL);
    t2 = (t0 + 23592);
    *((int *)t2) = 1;

LAB1:    return;
}


extern void work_a_2187883988_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2187883988_2372691052_p_0,(void *)work_a_2187883988_2372691052_p_1,(void *)work_a_2187883988_2372691052_p_2,(void *)work_a_2187883988_2372691052_p_3,(void *)work_a_2187883988_2372691052_p_4,(void *)work_a_2187883988_2372691052_p_5,(void *)work_a_2187883988_2372691052_p_6,(void *)work_a_2187883988_2372691052_p_7,(void *)work_a_2187883988_2372691052_p_8,(void *)work_a_2187883988_2372691052_p_9,(void *)work_a_2187883988_2372691052_p_10,(void *)work_a_2187883988_2372691052_p_11,(void *)work_a_2187883988_2372691052_p_12,(void *)work_a_2187883988_2372691052_p_13,(void *)work_a_2187883988_2372691052_p_14,(void *)work_a_2187883988_2372691052_p_15,(void *)work_a_2187883988_2372691052_p_16,(void *)work_a_2187883988_2372691052_p_17,(void *)work_a_2187883988_2372691052_p_18,(void *)work_a_2187883988_2372691052_p_19,(void *)work_a_2187883988_2372691052_p_20,(void *)work_a_2187883988_2372691052_p_21,(void *)work_a_2187883988_2372691052_p_22,(void *)work_a_2187883988_2372691052_p_23,(void *)work_a_2187883988_2372691052_p_24,(void *)work_a_2187883988_2372691052_p_25,(void *)a_2187883988_2372691052nwe_implicit_delayed_3_implicit_stable_2,(void *)a_2187883988_2372691052noe_implicit_stable_11,(void *)a_2187883988_2372691052a_implicit_stable_10,(void *)a_2187883988_2372691052ce2_implicit_stable_9,(void *)a_2187883988_2372691052nce_implicit_stable_5,(void *)a_2187883988_2372691052noe_implicit_stable_4,(void *)a_2187883988_2372691052d_implicit_stable_1,(void *)a_2187883988_2372691052adr_hold_implicit_stable_3,(void *)a_2187883988_2372691052noe_implicit_stable_7,(void *)a_2187883988_2372691052ce2_implicit_stable_6,(void *)a_2187883988_2372691052nce_implicit_stable_8,(void *)a_2187883988_2372691052d_implicit_delayed_2_implicit_stable_0};
	static char *se[] = {(void *)work_a_2187883988_2372691052_sub_4208738216_4163069965,(void *)work_a_2187883988_2372691052_sub_106983919_4163069965,(void *)work_a_2187883988_2372691052_sub_1023296262_3380155286,(void *)work_a_2187883988_2372691052_sub_2491163481_3380155286,(void *)work_a_2187883988_2372691052_sub_3558600333_3380155286};
	xsi_register_didat("work_a_2187883988_2372691052", "isim/lab06_tb_isim_beh.exe.sim/work/a_2187883988_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
