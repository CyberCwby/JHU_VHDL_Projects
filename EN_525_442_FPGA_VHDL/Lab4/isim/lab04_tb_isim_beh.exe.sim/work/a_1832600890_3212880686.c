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
static const char *ng0 = "D:/VHDL Projects/Lab4/lab04_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_1832600890_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(31, ng0);

LAB3:    t1 = (10 * 1000LL);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 6200);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 6200);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 6120);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1832600890_3212880686_p_1(char *t0)
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

LAB0:    t1 = (t0 + 5800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 9689);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB4;

LAB5:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(37, ng0);
    t10 = (0 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB8:    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB5;

LAB6:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 9693);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB10;

LAB11:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(38, ng0);
    t10 = (200 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB7:    goto LAB6;

LAB9:    goto LAB7;

LAB10:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 9697);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB16;

LAB17:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(42, ng0);
    t10 = (240000 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 9701);
    t5 = (t0 + 6328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 9709);
    t5 = (t0 + 6328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 9717);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB22;

LAB23:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(47, ng0);
    t10 = (504 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 9721);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB28;

LAB29:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(48, ng0);
    t10 = (1000 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 9725);
    t5 = (t0 + 6328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 9733);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB34;

LAB35:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(52, ng0);
    t10 = (504 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB34:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB35;

LAB36:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 9737);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB40;

LAB41:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(53, ng0);
    t10 = (1000 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 9741);
    t5 = (t0 + 6328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 9749);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB46;

LAB47:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(57, ng0);
    t10 = (504 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB47;

LAB48:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 9753);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB52;

LAB53:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(58, ng0);
    t10 = (1000 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB53;

LAB54:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 9757);
    t5 = (t0 + 6328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 9765);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB58;

LAB59:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(62, ng0);
    t10 = (504 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

LAB58:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB59;

LAB60:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 9769);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB64;

LAB65:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(63, ng0);
    t10 = (1000 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB68:    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB65;

LAB66:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 9773);
    t5 = (t0 + 6328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 9781);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB70;

LAB71:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(67, ng0);
    t10 = (504 * 1000LL);
    t2 = (t0 + 5608);
    xsi_process_wait(t2, t10);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB67:    goto LAB66;

LAB69:    goto LAB67;

LAB70:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB71;

LAB72:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 9785);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB76;

LAB77:    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    xsi_set_current_line(68, ng0);

LAB80:    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB77;

LAB78:    goto LAB2;

LAB79:    goto LAB78;

LAB81:    goto LAB79;

}


extern void work_a_1832600890_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1832600890_3212880686_p_0,(void *)work_a_1832600890_3212880686_p_1};
	xsi_register_didat("work_a_1832600890_3212880686", "isim/lab04_tb_isim_beh.exe.sim/work/a_1832600890_3212880686.didat");
	xsi_register_executes(pe);
}
