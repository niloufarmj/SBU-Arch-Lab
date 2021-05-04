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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif



static void Gate_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 2600);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 2600);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 2532);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_31_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 1152U);
    t4 = *((char **)t2);
    t2 = (t0 + 784U);
    t5 = *((char **)t2);
    t2 = (t0 + 2636);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_AndGate(t9, 3, t3, t4, t5);
    t10 = (t0 + 2636);
    xsi_driver_vfirst_trans(t10, 0, 0);
    t11 = (t0 + 2540);
    *((int *)t11) = 1;

LAB1:    return;
}

static void Gate_32_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    t2 = (t0 + 2672);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_AndGate(t9, 3, t3, t4, t5);
    t10 = (t0 + 2672);
    xsi_driver_vfirst_trans(t10, 0, 0);
    t11 = (t0 + 2548);
    *((int *)t11) = 1;

LAB1:    return;
}

static void Gate_33_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1244U);
    t4 = *((char **)t2);
    t2 = (t0 + 2708);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    xsi_vlog_OrGate(t8, 2, t3, t4);
    t9 = (t0 + 2708);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 2556);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000000166354189_1958410624_init()
{
	static char *pe[] = {(void *)Gate_30_0,(void *)Gate_31_1,(void *)Gate_32_2,(void *)Gate_33_3};
	xsi_register_didat("work_m_00000000000166354189_1958410624", "isim/ALU_test_isim_beh.exe.sim/work/m_00000000000166354189_1958410624.didat");
	xsi_register_executes(pe);
}
