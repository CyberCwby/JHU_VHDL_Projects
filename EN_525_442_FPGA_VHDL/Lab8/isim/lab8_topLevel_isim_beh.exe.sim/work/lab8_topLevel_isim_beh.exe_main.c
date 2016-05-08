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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *XILINXCORELIB_P_3381355550;
char *STD_TEXTIO;
char *IEEE_P_1242562249;
char *XILINXCORELIB_P_3160202542;
char *IEEE_P_3972351953;
char *XILINXCORELIB_P_1837083571;
char *XILINXCORELIB_P_1849098369;
char *XILINXCORELIB_P_3155556343;
char *UNISIM_P_0947159679;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;
char *XILINXCORELIB_P_2602938013;
char *IEEE_P_1367372525;
char *UNISIM_P_3222816464;
char *IEEE_P_2717149903;
char *XILINXCORELIB_P_3743709326;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    unisim_p_0947159679_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    ieee_p_3972351953_init();
    std_textio_init();
    xilinxcorelib_p_1837083571_init();
    xilinxcorelib_p_3381355550_init();
    xilinxcorelib_p_1849098369_init();
    xilinxcorelib_p_2602938013_init();
    xilinxcorelib_p_3160202542_init();
    xilinxcorelib_p_3155556343_init();
    xilinxcorelib_p_3743709326_init();
    xilinxcorelib_a_0006162580_3212880686_init();
    xilinxcorelib_a_3854613474_3212880686_init();
    xilinxcorelib_a_2236128228_3212880686_init();
    xilinxcorelib_a_1624647826_3212880686_init();
    xilinxcorelib_a_1579366007_3212880686_init();
    xilinxcorelib_a_2178031336_3212880686_init();
    xilinxcorelib_a_3537492725_3212880686_init();
    work_a_0806562022_2111062449_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    unisim_a_1490675510_1976025627_init();
    unisim_a_0850834979_2152628908_init();
    unisim_a_0714155612_2768510774_init();
    unisim_a_0018426790_2768510774_init();
    unisim_a_1297477671_0429821216_init();
    unisim_a_0250404648_2584565154_init();
    work_a_0852845514_3212880686_init();
    work_a_1792249370_1516540902_init();
    work_a_3629330097_3212880686_init();
    work_a_0757125120_3212880686_init();
    work_a_3075867222_3212880686_init();
    work_a_0438345615_3212880686_init();
    work_a_3169572231_3212880686_init();


    xsi_register_tops("work_a_3169572231_3212880686");

    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    XILINXCORELIB_P_3160202542 = xsi_get_engine_memory("xilinxcorelib_p_3160202542");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    XILINXCORELIB_P_1849098369 = xsi_get_engine_memory("xilinxcorelib_p_1849098369");
    XILINXCORELIB_P_3155556343 = xsi_get_engine_memory("xilinxcorelib_p_3155556343");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    XILINXCORELIB_P_2602938013 = xsi_get_engine_memory("xilinxcorelib_p_2602938013");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    XILINXCORELIB_P_3743709326 = xsi_get_engine_memory("xilinxcorelib_p_3743709326");

    return xsi_run_simulation(argc, argv);

}
