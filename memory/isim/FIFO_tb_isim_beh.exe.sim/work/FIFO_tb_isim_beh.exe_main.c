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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002072099943_2843417281_init();
    work_m_00000000000783449195_4030497226_init();
    work_m_00000000001840363432_0952400693_init();
    work_m_00000000003509343338_2166233924_init();
    work_m_00000000001644352463_0236360315_init();
    work_m_00000000002752567055_1373640160_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002752567055_1373640160");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
