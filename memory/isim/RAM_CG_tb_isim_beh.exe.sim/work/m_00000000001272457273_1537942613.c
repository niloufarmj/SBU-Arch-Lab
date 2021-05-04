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
static const char *ng0 = "D:/uni/arch lab projects/project 4/memory/RAM_CG_tb.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {11, 0};
static unsigned int ng5[] = {0U, 0U};



static void Initial_49_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2248);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_57_1(char *t0)
{
    char t6[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);

LAB4:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB16:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB17;

LAB18:
LAB1:    return;
LAB6:    xsi_set_current_line(64, ng0);

LAB8:    xsi_set_current_line(65, ng0);
    t13 = (t0 + 3384);
    xsi_process_wait(t13, 50000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(66, ng0);
    t14 = (t0 + 2408);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 1448);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB13:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t6) = t19;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB15;

LAB14:    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 1U);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB10:    *((unsigned int *)t6) = 1;
    goto LAB13;

LAB15:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t20 | t21);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t22 | t23);
    goto LAB14;

LAB17:    xsi_set_current_line(73, ng0);

LAB19:    xsi_set_current_line(74, ng0);
    t13 = (t0 + 3384);
    xsi_process_wait(t13, 50000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(75, ng0);
    t14 = (t0 + 2408);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t16, 32, t17, 32);
    t27 = (t0 + 1608);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB16;

}


extern void work_m_00000000001272457273_1537942613_init()
{
	static char *pe[] = {(void *)Initial_49_0,(void *)Initial_57_1};
	xsi_register_didat("work_m_00000000001272457273_1537942613", "isim/RAM_CG_tb_isim_beh.exe.sim/work/m_00000000001272457273_1537942613.didat");
	xsi_register_executes(pe);
}
