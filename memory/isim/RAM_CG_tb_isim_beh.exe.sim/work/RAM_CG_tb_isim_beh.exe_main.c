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
    xilinxcorelib_ver_m_00000000001358910285_0193705908_init();
    xilinxcorelib_ver_m_00000000001358910285_0042462556_init();
    xilinxcorelib_ver_m_00000000001687936702_3055161089_init();
    xilinxcorelib_ver_m_00000000000277421008_2575277777_init();
    xilinxcorelib_ver_m_00000000001603977570_3158646841_init();
    work_m_00000000002485044841_3489536640_init();
    work_m_00000000002611850064_2254295286_init();
    work_m_00000000001272457273_1537942613_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001272457273_1537942613");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
