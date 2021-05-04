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
static const char *ng0 = "D:/uni/arch lab projects/project 4/memory/FIFO_tb.v";
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {256, 0};
static int ng8[] = {1, 0};

static void Forked_70_2(char *);
static void Forked_71_3(char *);
static void Forked_72_4(char *);
void Forked_70_2();
void Forked_71_3();
void Forked_72_4();


static int sp_main(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1440);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(69, ng0);
    t5 = xsi_create_forkvar_inside_subprogram_invocation(t2, 3, 0);
    t6 = (t2 + 80U);
    t7 = *((char **)t6);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_70_2, t2, t7);
    t8 = (t2 + 80U);
    t9 = *((char **)t8);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_71_3, t2, t9);
    t10 = (t2 + 80U);
    t11 = *((char **)t10);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_72_4, t2, t11);
    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    *((char **)t3) = &&LAB5;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    t12 = xsi_get_forkvar_inside_subprogram_invocation(t2, 0);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    if (*((int *)t14) > 0)
        goto LAB6;

LAB7:    xsi_clean_active_fork_process_list(t2);
    goto LAB4;

LAB6:    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    goto LAB1;

}

static int sp_clock_generator(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1872);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);

LAB6:    xsi_set_current_line(77, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 3000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(77, ng0);
    t8 = (t1 + 4728);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t11) == 0)
        goto LAB8;

LAB10:    t17 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t17) = 1;

LAB11:    t18 = (t1 + 4728);
    xsi_vlogvar_assign_value(t18, t7, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB12:    goto LAB4;

}

static int sp_reset_generator(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2304);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 6000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(83, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t1 + 4248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(85, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t1 + 4248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(87, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t1 + 4248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB4;

}

static int sp_operation_process(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2736);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(92, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 15000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(93, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t1 + 4568);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 4088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 6000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(96, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t1 + 4568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    xsi_set_current_line(98, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB8:    t4 = (t1 + 4888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(105, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 3000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(98, ng0);

LAB11:    t15 = (t1 + 280);
    xsi_vlog_namedbase_setdisablestate(t15, &&LAB12);
    xsi_vlog_namedbase_pushprocess(t15, t2);

LAB13:    xsi_set_current_line(99, ng0);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    xsi_process_wait(t17, 15000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB12:    xsi_set_current_line(98, ng0);
    t4 = (t1 + 4888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 4888);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB8;

LAB14:    xsi_set_current_line(100, ng0);
    t18 = ((char*)((ng4)));
    t19 = (t1 + 4568);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 8, t6, 8, t7, 8);
    t8 = (t1 + 4088);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 6000LL);
    *((char **)t3) = &&LAB15;
    t0 = 1;
    goto LAB1;

LAB15:    xsi_set_current_line(103, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t1 + 4568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    t4 = (t1 + 280);
    xsi_vlog_namedbase_popprocess(t4);
    goto LAB12;

LAB16:    xsi_set_current_line(107, ng0);
    xsi_set_current_line(107, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t1 + 4888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB17:    t4 = (t1 + 4888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB18;

LAB19:    goto LAB4;

LAB18:    xsi_set_current_line(107, ng0);

LAB20:    t15 = (t1 + 576);
    xsi_vlog_namedbase_setdisablestate(t15, &&LAB21);
    xsi_vlog_namedbase_pushprocess(t15, t2);

LAB22:    xsi_set_current_line(108, ng0);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    xsi_process_wait(t17, 15000LL);
    *((char **)t3) = &&LAB23;
    t0 = 1;
    goto LAB1;

LAB21:    xsi_set_current_line(107, ng0);
    t4 = (t1 + 4888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 4888);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB17;

LAB23:    xsi_set_current_line(109, ng0);
    t18 = ((char*)((ng4)));
    t19 = (t1 + 4408);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 6000LL);
    *((char **)t3) = &&LAB24;
    t0 = 1;
    goto LAB1;

LAB24:    xsi_set_current_line(111, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t1 + 4408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    t4 = (t1 + 576);
    xsi_vlog_namedbase_popprocess(t4);
    goto LAB21;

}

static void Initial_55_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Initial_64_1(char *t0)
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
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);

LAB4:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5864);
    t3 = (t0 + 1440);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 5960);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 1440);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 5960);
    t15 = *((char **)t14);
    t14 = (t0 + 1440);
    t16 = (t0 + 5864);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 6056U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

}

static void Forked_70_2(char *t0)
{
    char t25[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(70, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t7 = (t2 + 1872);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t10 = (t9 + 96U);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t18 = ((int  (*)(char *, char *))t17)(t2, t11);

LAB9:    if (t18 != 0)
        goto LAB10;

LAB5:    t19 = (t2 + 1872);
    xsi_vlog_subprogram_popinvocation(t19);

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 1872);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t2, t23, t24);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t25, t5, 8);
    t26 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t26 - 1);
    xsi_vlogvar_assign_value(t1, t25, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}

static void Forked_71_3(char *t0)
{
    char t25[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(71, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t7 = (t2 + 2304);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t10 = (t9 + 96U);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t18 = ((int  (*)(char *, char *))t17)(t2, t11);

LAB9:    if (t18 != 0)
        goto LAB10;

LAB5:    t19 = (t2 + 2304);
    xsi_vlog_subprogram_popinvocation(t19);

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 2304);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t2, t23, t24);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t25, t5, 8);
    t26 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t26 - 1);
    xsi_vlogvar_assign_value(t1, t25, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}

static void Forked_72_4(char *t0)
{
    char t25[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(72, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t7 = (t2 + 2736);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t10 = (t9 + 96U);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t18 = ((int  (*)(char *, char *))t17)(t2, t11);

LAB9:    if (t18 != 0)
        goto LAB10;

LAB5:    t19 = (t2 + 2736);
    xsi_vlog_subprogram_popinvocation(t19);

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 2736);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t2, t23, t24);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t25, t5, 8);
    t26 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t26 - 1);
    xsi_vlogvar_assign_value(t1, t25, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}


extern void work_m_00000000002752567055_1373640160_init()
{
	static char *pe[] = {(void *)Initial_55_0,(void *)Initial_64_1};
	static char *se[] = {(void *)sp_main,(void *)sp_clock_generator,(void *)sp_reset_generator,(void *)sp_operation_process};
	xsi_register_didat("work_m_00000000002752567055_1373640160", "isim/FIFO_tb_isim_beh.exe.sim/work/m_00000000002752567055_1373640160.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
