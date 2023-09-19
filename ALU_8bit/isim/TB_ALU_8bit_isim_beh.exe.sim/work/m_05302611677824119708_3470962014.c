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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Documents/ALU_8bit/ALU_8bit.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static const char *ng3 = "NOT A A=%b S=%d F=%b";
static unsigned int ng4[] = {1U, 0U};
static const char *ng5 = "NOR A=%b B=%b S=%d F=%b";
static const char *ng6 = "(NOT A) AND B A=%b B=%b S=%d F=%b";
static unsigned int ng7[] = {3U, 0U};
static const char *ng8 = "LOGIC 0 S=%d F=%b";
static unsigned int ng9[] = {4U, 0U};
static const char *ng10 = "NAND A=%b B=%b S=%d F=%b";
static unsigned int ng11[] = {5U, 0U};
static const char *ng12 = "XOR A=%b B=%b S=%d F=%b";
static unsigned int ng13[] = {6U, 0U};
static const char *ng14 = "NOT B A=%b B=%b S=%d F=%b";
static unsigned int ng15[] = {7U, 0U};
static const char *ng16 = "A AND (NOT B) A=%b B=%b S=%d F=%b";
static unsigned int ng17[] = {8U, 0U};
static const char *ng18 = "(NOT A) or B : A=%b B=%b S=%d F=%b";
static unsigned int ng19[] = {9U, 0U};
static const char *ng20 = "XNOR A=%b B=%b S=%d F=%b";
static unsigned int ng21[] = {10U, 0U};
static const char *ng22 = "B=%b S=%d F=%b";
static unsigned int ng23[] = {11U, 0U};
static const char *ng24 = "AND A=%b B=%b S=%d F=%b";
static unsigned int ng25[] = {12U, 0U};
static const char *ng26 = "LOGIC 1 S=%d F=%b";
static unsigned int ng27[] = {13U, 0U};
static const char *ng28 = "A OR (NOT B) A=%b S=%d F=%b";
static unsigned int ng29[] = {14U, 0U};
static const char *ng30 = "OR A=%b B=%b S=%d F=%b";
static unsigned int ng31[] = {15U, 0U};
static const char *ng32 = "A=%b S=%d F=%b";
static int ng33[] = {0, 0};
static const char *ng34 = "A=%b B=%b S=%d F=%b";
static const char *ng35 = "S=%d F=%b";
static const char *ng36 = " A=%b B=%b S=%d F=%b";
static const char *ng37 = "A=%b  B=%b S=%d F=%b";
static const char *ng38 = "B A=%b B=%b S=%d F=%b";



static void Always_27_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t53[8];
    char t54[8];
    char t62[8];
    char t103[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng33)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB115;

LAB112:    if (t18 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t6) = 1;

LAB115:    memset(t31, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t8) != 0)
        goto LAB118;

LAB119:    t22 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t22);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB120;

LAB121:    memcpy(t62, t31, 8);

LAB122:    t92 = (t62 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t62);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB134;

LAB135:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng33)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB203;

LAB200:    if (t18 != 0)
        goto LAB202;

LAB201:    *((unsigned int *)t6) = 1;

LAB203:    memset(t31, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB204;

LAB205:    if (*((unsigned int *)t8) != 0)
        goto LAB206;

LAB207:    t22 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t22);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB208;

LAB209:    memcpy(t62, t31, 8);

LAB210:    t92 = (t62 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t62);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB222;

LAB223:
LAB224:
LAB136:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);

LAB14:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t28, 4);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng19)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng21)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng23)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng25)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng27)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng29)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng31)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB12;

LAB15:    xsi_set_current_line(32, ng0);

LAB48:    xsi_set_current_line(33, ng0);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (~(t35));
    *((unsigned int *)t31) = t36;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t34) != 0)
        goto LAB50;

LAB49:    t41 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t41 & 255U);
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 255U);
    t43 = (t0 + 2088);
    xsi_vlogvar_assign_value(t43, t31, 0, 0, 8);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB47;

LAB17:    xsi_set_current_line(36, ng0);

LAB51:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 | t10);
    *((unsigned int *)t31) = t11;
    t3 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = (t31 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB52;

LAB53:
LAB54:    memset(t6, 0, 8);
    t28 = (t6 + 4);
    t32 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    *((unsigned int *)t6) = t39;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB56;

LAB55:    t47 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t47 & 255U);
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & 255U);
    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB19:    xsi_set_current_line(40, ng0);

LAB57:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB59;

LAB58:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    t19 = (t17 & t18);
    *((unsigned int *)t31) = t19;
    t7 = (t6 + 4);
    t21 = (t8 + 4);
    t22 = (t31 + 4);
    t20 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t21);
    t24 = (t20 | t23);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB60;

LAB61:
LAB62:    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 8);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB21:    xsi_set_current_line(44, ng0);

LAB63:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng8, 3, t0, (char)118, t3, 4, (char)118, t5, 8);
    goto LAB47;

LAB23:    xsi_set_current_line(48, ng0);

LAB64:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t31) = t11;
    t3 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = (t31 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB65;

LAB66:
LAB67:    memset(t6, 0, 8);
    t28 = (t6 + 4);
    t32 = (t31 + 4);
    t42 = *((unsigned int *)t31);
    t46 = (~(t42));
    *((unsigned int *)t6) = t46;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB69;

LAB68:    t51 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t51 & 255U);
    t52 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t52 & 255U);
    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB25:    xsi_set_current_line(52, ng0);

LAB70:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    *((unsigned int *)t6) = t11;
    t3 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB71;

LAB72:
LAB73:    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB27:    xsi_set_current_line(56, ng0);

LAB74:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB76;

LAB75:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng14, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB29:    xsi_set_current_line(60, ng0);

LAB77:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB79;

LAB78:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t6);
    t19 = (t17 & t18);
    *((unsigned int *)t31) = t19;
    t8 = (t4 + 4);
    t21 = (t6 + 4);
    t22 = (t31 + 4);
    t20 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t21);
    t24 = (t20 | t23);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB80;

LAB81:
LAB82:    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng16, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB31:    xsi_set_current_line(64, ng0);

LAB83:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB85;

LAB84:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    *((unsigned int *)t31) = t19;
    t7 = (t6 + 4);
    t21 = (t8 + 4);
    t22 = (t31 + 4);
    t20 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t21);
    t24 = (t20 | t23);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB86;

LAB87:
LAB88:    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 8);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng18, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB33:    xsi_set_current_line(68, ng0);

LAB89:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    *((unsigned int *)t31) = t11;
    t3 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = (t31 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB90;

LAB91:
LAB92:    memset(t6, 0, 8);
    t21 = (t6 + 4);
    t22 = (t31 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (~(t19));
    *((unsigned int *)t6) = t20;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB94;

LAB93:    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 255U);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & 255U);
    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng20, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB35:    xsi_set_current_line(72, ng0);

LAB95:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng22, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB47;

LAB37:    xsi_set_current_line(76, ng0);

LAB96:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t6) = t11;
    t3 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB97;

LAB98:
LAB99:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng24, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB39:    xsi_set_current_line(80, ng0);

LAB100:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng26, 3, t0, (char)118, t3, 4, (char)118, t5, 8);
    goto LAB47;

LAB41:    xsi_set_current_line(84, ng0);

LAB101:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB103;

LAB102:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    *((unsigned int *)t31) = t19;
    t8 = (t4 + 4);
    t21 = (t6 + 4);
    t22 = (t31 + 4);
    t20 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t21);
    t24 = (t20 | t23);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB104;

LAB105:
LAB106:    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng28, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB47;

LAB43:    xsi_set_current_line(88, ng0);

LAB107:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 | t10);
    *((unsigned int *)t6) = t11;
    t3 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB108;

LAB109:
LAB110:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng30, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB47;

LAB45:    xsi_set_current_line(92, ng0);

LAB111:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB47;

LAB50:    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t34);
    *((unsigned int *)t31) = (t37 | t38);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t32) = (t39 | t40);
    goto LAB49;

LAB52:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t31) = (t17 | t18);
    t21 = (t4 + 4);
    t22 = (t5 + 4);
    t19 = *((unsigned int *)t21);
    t20 = (~(t19));
    t23 = *((unsigned int *)t4);
    t44 = (t23 & t20);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t45 = (t26 & t25);
    t27 = (~(t44));
    t35 = (~(t45));
    t36 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t36 & t27);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t35);
    goto LAB54;

LAB56:    t40 = *((unsigned int *)t6);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t6) = (t40 | t41);
    t42 = *((unsigned int *)t28);
    t46 = *((unsigned int *)t32);
    *((unsigned int *)t28) = (t42 | t46);
    goto LAB55;

LAB59:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB58;

LAB60:    t27 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t31) = (t27 | t35);
    t28 = (t6 + 4);
    t32 = (t8 + 4);
    t36 = *((unsigned int *)t6);
    t37 = (~(t36));
    t38 = *((unsigned int *)t28);
    t39 = (~(t38));
    t40 = *((unsigned int *)t8);
    t41 = (~(t40));
    t42 = *((unsigned int *)t32);
    t46 = (~(t42));
    t44 = (t37 & t39);
    t45 = (t41 & t46);
    t47 = (~(t44));
    t48 = (~(t45));
    t49 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t49 & t47);
    t50 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t50 & t48);
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t47);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t48);
    goto LAB62;

LAB65:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t31) = (t17 | t18);
    t21 = (t4 + 4);
    t22 = (t5 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t35 = (~(t27));
    t44 = (t20 & t24);
    t45 = (t26 & t35);
    t36 = (~(t44));
    t37 = (~(t45));
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t36);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t37);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & t36);
    t41 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t41 & t37);
    goto LAB67;

LAB69:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t32);
    *((unsigned int *)t6) = (t47 | t48);
    t49 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t32);
    *((unsigned int *)t28) = (t49 | t50);
    goto LAB68;

LAB71:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB73;

LAB76:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB75;

LAB79:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB78;

LAB80:    t27 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t31) = (t27 | t35);
    t28 = (t4 + 4);
    t32 = (t6 + 4);
    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t28);
    t39 = (~(t38));
    t40 = *((unsigned int *)t6);
    t41 = (~(t40));
    t42 = *((unsigned int *)t32);
    t46 = (~(t42));
    t44 = (t37 & t39);
    t45 = (t41 & t46);
    t47 = (~(t44));
    t48 = (~(t45));
    t49 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t49 & t47);
    t50 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t50 & t48);
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t47);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t48);
    goto LAB82;

LAB85:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB84;

LAB86:    t27 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t31) = (t27 | t35);
    t28 = (t6 + 4);
    t32 = (t8 + 4);
    t36 = *((unsigned int *)t28);
    t37 = (~(t36));
    t38 = *((unsigned int *)t6);
    t44 = (t38 & t37);
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = *((unsigned int *)t8);
    t45 = (t41 & t40);
    t42 = (~(t44));
    t46 = (~(t45));
    t47 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t47 & t42);
    t48 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t48 & t46);
    goto LAB88;

LAB90:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t31) = (t17 | t18);
    goto LAB92;

LAB94:    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t6) = (t23 | t24);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t25 | t26);
    goto LAB93;

LAB97:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t17 | t18);
    t21 = (t4 + 4);
    t22 = (t5 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t35 = (~(t27));
    t44 = (t20 & t24);
    t45 = (t26 & t35);
    t36 = (~(t44));
    t37 = (~(t45));
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t36);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t37);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t36);
    t41 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t41 & t37);
    goto LAB99;

LAB103:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB102;

LAB104:    t27 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t31) = (t27 | t35);
    t28 = (t4 + 4);
    t32 = (t6 + 4);
    t36 = *((unsigned int *)t28);
    t37 = (~(t36));
    t38 = *((unsigned int *)t4);
    t44 = (t38 & t37);
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = *((unsigned int *)t6);
    t45 = (t41 & t40);
    t42 = (~(t44));
    t46 = (~(t45));
    t47 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t47 & t42);
    t48 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t48 & t46);
    goto LAB106;

LAB108:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t17 | t18);
    t21 = (t4 + 4);
    t22 = (t5 + 4);
    t19 = *((unsigned int *)t21);
    t20 = (~(t19));
    t23 = *((unsigned int *)t4);
    t44 = (t23 & t20);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t45 = (t26 & t25);
    t27 = (~(t44));
    t35 = (~(t45));
    t36 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t36 & t27);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t35);
    goto LAB110;

LAB114:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t31) = 1;
    goto LAB119;

LAB118:    t21 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB119;

LAB120:    t28 = (t0 + 1528U);
    t32 = *((char **)t28);
    t28 = ((char*)((ng1)));
    memset(t53, 0, 8);
    t33 = (t32 + 4);
    t34 = (t28 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t28);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t34);
    t46 = (t41 ^ t42);
    t47 = (t40 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB126;

LAB123:    if (t50 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t53) = 1;

LAB126:    memset(t54, 0, 8);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t53);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t55) != 0)
        goto LAB129;

LAB130:    t63 = *((unsigned int *)t31);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t31 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB131;

LAB132:
LAB133:    goto LAB122;

LAB125:    t43 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t54) = 1;
    goto LAB130;

LAB129:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB130;

LAB131:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t31 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t31);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t30 = (t79 & t81);
    t44 = (t83 & t85);
    t86 = (~(t30));
    t87 = (~(t44));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    t90 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t90 & t86);
    t91 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t91 & t87);
    goto LAB133;

LAB134:    xsi_set_current_line(99, ng0);

LAB137:    xsi_set_current_line(100, ng0);
    t98 = (t0 + 1368U);
    t99 = *((char **)t98);

LAB138:    t98 = ((char*)((ng2)));
    t45 = xsi_vlog_unsigned_case_compare(t99, 4, t98, 4);
    if (t45 == 1)
        goto LAB139;

LAB140:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB141;

LAB142:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB143;

LAB144:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB145;

LAB146:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB147;

LAB148:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB149;

LAB150:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB151;

LAB152:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB153;

LAB154:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB155;

LAB156:    t2 = ((char*)((ng19)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB157;

LAB158:    t2 = ((char*)((ng21)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB159;

LAB160:    t2 = ((char*)((ng23)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB161;

LAB162:    t2 = ((char*)((ng25)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB163;

LAB164:    t2 = ((char*)((ng27)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB165;

LAB166:    t2 = ((char*)((ng29)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB167;

LAB168:    t2 = ((char*)((ng31)));
    t30 = xsi_vlog_unsigned_case_compare(t99, 4, t2, 4);
    if (t30 == 1)
        goto LAB169;

LAB170:
LAB171:    goto LAB136;

LAB139:    xsi_set_current_line(101, ng0);

LAB172:    xsi_set_current_line(102, ng0);
    t100 = (t0 + 1048U);
    t101 = *((char **)t100);
    t100 = (t0 + 2088);
    xsi_vlogvar_assign_value(t100, t101, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB171;

LAB141:    xsi_set_current_line(105, ng0);

LAB173:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB143:    xsi_set_current_line(109, ng0);

LAB174:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB176;

LAB175:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t4, 8, t6, 8);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t31, 0, 0, 8);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB145:    xsi_set_current_line(113, ng0);

LAB177:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t3, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng35, 3, t0, (char)118, t3, 4, (char)118, t5, 8);
    goto LAB171;

LAB147:    xsi_set_current_line(117, ng0);

LAB178:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB180;

LAB179:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 8, t5, 8, t6, 8);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 8, t4, 8, t31, 8);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t53, 0, 0, 8);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB149:    xsi_set_current_line(121, ng0);

LAB181:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 8, t5, 8);
    t3 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t6, 32, t3, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB151:    xsi_set_current_line(125, ng0);

LAB182:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t21 = (t8 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    *((unsigned int *)t31) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB184;

LAB183:    t15 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_multiply(t53, 8, t7, 8, t31, 8);
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 8, t6, 8, t53, 8);
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t54, 0, 0, 8);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB153:    xsi_set_current_line(129, ng0);

LAB185:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB187;

LAB186:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 32, t4, 8, t6, 32);
    t8 = ((char*)((ng1)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t31, 32, t8, 32);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t53, 0, 0, 8);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng36, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB155:    xsi_set_current_line(133, ng0);

LAB188:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 8, t5, 8, t7, 8);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t4, 8, t6, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t31, 0, 0, 8);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB157:    xsi_set_current_line(137, ng0);

LAB189:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 8);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB159:    xsi_set_current_line(141, ng0);

LAB190:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB192;

LAB191:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t4, 8, t6, 8);
    t8 = (t0 + 1048U);
    t21 = *((char **)t8);
    t8 = (t0 + 1208U);
    t22 = *((char **)t8);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_multiply(t53, 8, t21, 8, t22, 8);
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 8, t31, 8, t53, 8);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t54, 0, 0, 8);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB161:    xsi_set_current_line(145, ng0);

LAB193:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t4, 8, t5, 8);
    t3 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t6, 32, t3, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 8);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB163:    xsi_set_current_line(149, ng0);

LAB194:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 8);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB171;

LAB165:    xsi_set_current_line(153, ng0);

LAB195:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t6, 8, t7, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t31, 0, 0, 8);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng37, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB167:    xsi_set_current_line(157, ng0);

LAB196:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB198;

LAB197:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t4, 8, t6, 8);
    t8 = (t0 + 1048U);
    t21 = *((char **)t8);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 8, t31, 8, t21, 8);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 8);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB171;

LAB169:    xsi_set_current_line(161, ng0);

LAB199:    xsi_set_current_line(162, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 8, t3, 32);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB171;

LAB176:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB175;

LAB180:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB179;

LAB184:    t11 = *((unsigned int *)t31);
    t12 = *((unsigned int *)t21);
    *((unsigned int *)t31) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB183;

LAB187:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB186;

LAB192:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB191;

LAB198:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB197;

LAB202:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB203;

LAB204:    *((unsigned int *)t31) = 1;
    goto LAB207;

LAB206:    t21 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB207;

LAB208:    t28 = (t0 + 1528U);
    t32 = *((char **)t28);
    t28 = ((char*)((ng33)));
    memset(t53, 0, 8);
    t33 = (t32 + 4);
    t34 = (t28 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t28);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t34);
    t46 = (t41 ^ t42);
    t47 = (t40 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB214;

LAB211:    if (t50 != 0)
        goto LAB213;

LAB212:    *((unsigned int *)t53) = 1;

LAB214:    memset(t54, 0, 8);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t53);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB215;

LAB216:    if (*((unsigned int *)t55) != 0)
        goto LAB217;

LAB218:    t63 = *((unsigned int *)t31);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t31 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB219;

LAB220:
LAB221:    goto LAB210;

LAB213:    t43 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB214;

LAB215:    *((unsigned int *)t54) = 1;
    goto LAB218;

LAB217:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB218;

LAB219:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t31 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t31);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t30 = (t79 & t81);
    t44 = (t83 & t85);
    t86 = (~(t30));
    t87 = (~(t44));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    t90 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t90 & t86);
    t91 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t91 & t87);
    goto LAB221;

LAB222:    xsi_set_current_line(168, ng0);

LAB225:    xsi_set_current_line(169, ng0);
    t98 = (t0 + 1368U);
    t100 = *((char **)t98);

LAB226:    t98 = ((char*)((ng2)));
    t45 = xsi_vlog_unsigned_case_compare(t100, 4, t98, 4);
    if (t45 == 1)
        goto LAB227;

LAB228:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB229;

LAB230:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB231;

LAB232:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB233;

LAB234:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB235;

LAB236:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB237;

LAB238:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB239;

LAB240:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB241;

LAB242:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB243;

LAB244:    t2 = ((char*)((ng19)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB245;

LAB246:    t2 = ((char*)((ng21)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB247;

LAB248:    t2 = ((char*)((ng23)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB249;

LAB250:    t2 = ((char*)((ng25)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB251;

LAB252:    t2 = ((char*)((ng27)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB253;

LAB254:    t2 = ((char*)((ng29)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB255;

LAB256:    t2 = ((char*)((ng31)));
    t30 = xsi_vlog_unsigned_case_compare(t100, 4, t2, 4);
    if (t30 == 1)
        goto LAB257;

LAB258:
LAB259:    goto LAB224;

LAB227:    xsi_set_current_line(170, ng0);

LAB260:    xsi_set_current_line(171, ng0);
    t101 = (t0 + 1048U);
    t102 = *((char **)t101);
    t101 = ((char*)((ng1)));
    memset(t103, 0, 8);
    xsi_vlog_unsigned_add(t103, 32, t102, 8, t101, 32);
    t104 = (t0 + 2088);
    xsi_vlogvar_assign_value(t104, t103, 0, 0, 8);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB259;

LAB229:    xsi_set_current_line(174, ng0);

LAB261:    xsi_set_current_line(175, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 8);
    t3 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t6, 32, t3, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 8);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB231:    xsi_set_current_line(178, ng0);

LAB262:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB264;

LAB263:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t4, 8, t6, 32);
    t8 = ((char*)((ng1)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t31, 32, t8, 32);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t53, 0, 0, 8);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB233:    xsi_set_current_line(182, ng0);

LAB265:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng35, 3, t0, (char)118, t3, 4, (char)118, t5, 8);
    goto LAB259;

LAB235:    xsi_set_current_line(186, ng0);

LAB266:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB268;

LAB267:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 32, t5, 8, t6, 32);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t4, 8, t31, 32);
    t21 = ((char*)((ng1)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 32, t53, 32, t21, 32);
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t54, 0, 0, 8);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB237:    xsi_set_current_line(190, ng0);

LAB269:    xsi_set_current_line(191, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 8);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t21 = (t8 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    *((unsigned int *)t31) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB271;

LAB270:    t15 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_multiply(t53, 32, t7, 8, t31, 32);
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 32, t6, 32, t53, 32);
    t22 = ((char*)((ng1)));
    memset(t62, 0, 8);
    xsi_vlog_unsigned_add(t62, 32, t54, 32, t22, 32);
    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t62, 0, 0, 8);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB239:    xsi_set_current_line(194, ng0);

LAB272:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t4, 8, t5, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 8);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng38, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB241:    xsi_set_current_line(198, ng0);

LAB273:    xsi_set_current_line(199, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB275;

LAB274:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 8, t4, 8, t6, 8);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t31, 0, 0, 8);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB243:    xsi_set_current_line(202, ng0);

LAB276:    xsi_set_current_line(203, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t5, 8, t7, 8);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t4, 8, t6, 32);
    t3 = ((char*)((ng1)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t31, 32, t3, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 8);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB245:    xsi_set_current_line(206, ng0);

LAB277:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 8);
    t3 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t6, 32, t3, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 8);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB247:    xsi_set_current_line(210, ng0);

LAB278:    xsi_set_current_line(211, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB280;

LAB279:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t4, 8, t6, 32);
    t8 = (t0 + 1048U);
    t21 = *((char **)t8);
    t8 = (t0 + 1208U);
    t22 = *((char **)t8);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_multiply(t53, 32, t21, 8, t22, 8);
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 32, t31, 32, t53, 32);
    t8 = ((char*)((ng1)));
    memset(t62, 0, 8);
    xsi_vlog_unsigned_add(t62, 32, t54, 32, t8, 32);
    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t62, 0, 0, 8);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB249:    xsi_set_current_line(214, ng0);

LAB281:    xsi_set_current_line(215, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 8, t4, 8, t5, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 8);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB251:    xsi_set_current_line(218, ng0);

LAB282:    xsi_set_current_line(219, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 8);
    t3 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t6, 32, t3, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 8);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB259;

LAB253:    xsi_set_current_line(222, ng0);

LAB283:    xsi_set_current_line(223, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 8);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t6, 32, t7, 8);
    t3 = ((char*)((ng1)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t31, 32, t3, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 8);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB259;

LAB255:    xsi_set_current_line(226, ng0);

LAB284:    xsi_set_current_line(227, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB286;

LAB285:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t4, 8, t6, 32);
    t8 = (t0 + 1048U);
    t21 = *((char **)t8);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t31, 32, t21, 8);
    t8 = ((char*)((ng1)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 32, t53, 32, t8, 32);
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t54, 0, 0, 8);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t4, 8, (char)118, t5, 4, (char)118, t8, 8);
    goto LAB259;

LAB257:    xsi_set_current_line(230, ng0);

LAB287:    xsi_set_current_line(231, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 8, (char)118, t4, 4, (char)118, t7, 8);
    goto LAB259;

LAB264:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB263;

LAB268:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB267;

LAB271:    t11 = *((unsigned int *)t31);
    t12 = *((unsigned int *)t21);
    *((unsigned int *)t31) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB270;

LAB275:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB274;

LAB280:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB279;

LAB286:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB285;

}


extern void work_m_05302611677824119708_3470962014_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_05302611677824119708_3470962014", "isim/TB_ALU_8bit_isim_beh.exe.sim/work/m_05302611677824119708_3470962014.didat");
	xsi_register_executes(pe);
}
