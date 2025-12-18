/*********************************************************
 * ████  ████ █  █ ████ ███    ████  █ █ ███
 * █  ██ █  █ █ █  █  █  █     █  █  █ █ █  
 * ████  █  █ ██   ████  █     █ ██  █ █ ███
 * █  ██ █  █ █ █  █  █  █     █  █  █ █ █  
 * ████  ████ █  █ █  █ ███    █████ ███ ███
 * 𝕭𝖔𝖐𝖆𝖎 𝕼𝖚𝖊
 * Ⓑⓞⓚⓐⓘ Ⓠⓤⓔ
 * ฿Ø₭₳ł QɄɆ
 * 𝓑𝓸𝓴𝓪𝓲 𝓠𝓾𝓮
 * 🅱🅾🅺🅰🅸 🆀🆄🅴
 * 🅑🅞🅚🅐🅘 🅠🅤🅔
 * Copyright (c) 2020-2024 Bokai Que <bokai.que@gmail.com>
 *********************************************************/

 /***************************************************************************************************************
 * 名称：关键字.h <-> tcctok.h
 * 版权 (C) 2023-现在 阙博凯
 * 描述：中文C语言编译器 Chinese C Compiler 基于
 * (Tiny C Compiler 0.9.28rc)开发的中文C语言编译器
 * 符合C89和C99标准,跨平台,可把C语言作为脚本运行,目前仅支持自举迭代升级。
 ***************************************************************************************************************/

/***************************************************************************************************************
 * 项目：token可以翻译成“单词符号”，简称单词。
 * 描述：系统(单词编码,单词字符串)
 ***************************************************************************************************************/
#ifndef _关键字_H
#define _关键字_H
 /**************************************************关键词--开始**************************************************/
/*流程控制（基本上都在语法分析块中使用）*/
/* 
     DEF(TOK_UTF8_如果, "\xE5\xA6\x82\xE6\x9E\x9C")//if
     DEF(TOK_UTF8_否则, "\xE5\x90\xA6\xE5\x88\x99")//else
     DEF(TOK_UTF8_判断, "\xE5\x88\xA4\xE6\x96\xAD")//while
     DEF(TOK_UTF8_循环, "\xE5\xBE\xAA\xE7\x8E\xAF")//for
     DEF(TOK_UTF8_执行, "\xE6\x89\xA7\xE8\xA1\x8C")//do
     DEF(TOK_UTF8_继续, "\xE7\xBB\xA7\xE7\xBB\xAD")//continue
     DEF(TOK_UTF8_跳出, "\xE8\xB7\xB3\xE5\x87\xBA")//break
     DEF(TOK_UTF8_返回, "\xE8\xBF\x94\xE5\x9B\x9E")//return
     DEF(TOK_UTF8_跳转, "\xE8\xB7\xB3\xE8\xBD\xAC")//goto
     DEF(TOK_UTF8_选择, "\xE9\x80\x89\xE6\x8B\xA9")//switch
     DEF(TOK_UTF8_分支, "\xE5\x88\x86\xE6\x94\xAF")//case
*/
     DEF(中_如果, "如果")//if      //1.预处理；2.预处理_跳过；3.块
     DEF(中_否则, "否则")//else    //1.预处理；2.预处理_跳过；3.块
     DEF(中_判断, "判断")//while   //1.块；2.块
     DEF(中_循环, "循环")//for     //1.块
     DEF(中_执行, "执行")//do      //1.块
     DEF(中_继续, "继续")//continue//1.块
     DEF(中_跳出, "跳出")//break   //1.块
     DEF(中_返回, "返回")//return  //1.块
     DEF(中_转到, "跳转")//goto    //1.块;2.解析_asm_指令
     DEF(中_选择, "选择")//switch  //1.块
     DEF(中_分支, "分支")//case    //1.块
/*其他*/
/*
     DEF(TOK_UTF8_默认, "\xE9\xBB\x98\xE8\xAE\xA4")//default
     DEF(TOK_UTF8_汇编, "\xE6\xB1\x87\xE7\xBC\x96")//asm
     DEF(TOK_UTF8_外部, "\xE5\xA4\x96\xE9\x83\xA8")//extern
     DEF(TOK_UTF8_静态, "\xE9\x9D\x99\xE6\x80\x81")//static
     DEF(TOK_UTF8_无符, "\xE6\x97\xA0\xE7\xAC\xA6\xE5\x8F\xB7")//unsigned
     DEF(TOK_UTF8_常量, "\xE5\xB8\xB8\xE9\x87\x8F")//const
     DEF(TOK_UTF8_易变, "\xE6\x98\x93\xE5\x8F\x98")//volatile
     DEF(TOK_UTF8_寄存器, "\xE5\xAF\x84\xE5\xAD\x98\xE5\x99\xA8")//register
     DEF(TOK_UTF8_有符, "\xE6\x9C\x89\xE7\xAC\xA6\xE5\x8F\xB7")//signed
     DEF(TOK_UTF8_自动, "\xE8\x87\xAA\xE5\x8A\xA8")//auto
     DEF(TOK_UTF8_内联, "\xE5\x86\x85\xE8\x81\x94")//inline
     DEF(TOK_UTF8_限制, "\xE9\x99\x90\xE5\x88\xB6")//restrict
     DEF(TOK_UTF8_静态断言, "\xE9\x9D\x99\xE6\x80\x81\xE6\x96\xAD\xE8\xA8\x80")//_Static_assert
*/
     DEF(中_默认, "默认")//default                // 1.块；2.一元
     DEF(中_汇编, "汇编")//asm                    // 1.块；2.外部声明；3.外部声明
     DEF(中_外部, "外部")//extern                 //1.解析数据类型
     DEF(中_静态, "静态")//static                 //1.解析数据类型;2.后缀_类型
     DEF(中_无符号, "无符")//unsigned           //1.解析数据类型
     DEF(中_原子, "原子")//_Atomic
     DEF(中_常量, "常量")//const                  //1.解析数据类型;2.后缀_类型；3.解析声明符种类
     DEF(中_易变, "易变")//volatile               //1.解析数据类型;2.后缀_类型；3.解析声明符种类；4.解析_asm_指令
     DEF(中_寄存器, "寄存器")//register           //1.解析数据类型
     DEF(中_有符号, "有符")//signed             //1.解析数据类型
     DEF(中_自动, "自动")//auto                   //1.解析数据类型
     DEF(中_内联, "内联")//inline                 //1.解析数据类型
     DEF(中_限制, "限制")//restrict               //1.解析数据类型;2.后缀_类型；3.解析声明符种类
     DEF(中_扩展, "扩展")//__extension__
     DEF(中_本地线程, "本地线程")//_Thread_local  // C11 thread-local storage

     DEF(中_通用, "通用")//_Generic
     DEF(中_静态断言, "静态断言")//_Static_assert // 1.struct_声明;2.外部声明
    /*数据类型（只在语法分析解析声明说明符的时候用到一次）*/
/*
     DEF(TOK_UTF8_无,    "\xE6\x97\xA0")//void
     DEF(TOK_UTF8_字符,   "\xE5\xAD\x97\xE7\xAC\xA6")//char
     DEF(TOK_UTF8_整数,   "\xE6\x95\xB4\xE6\x95\xB0")//int
     DEF(TOK_UTF8_浮点,   "\xE6\xB5\xAE\xE7\x82\xB9")//float
     DEF(TOK_UTF8_双精,  "\xE5\x8F\x8C\xE7\xB2\xBE")//double
     DEF(TOK_UTF8_布尔,    "\xE5\xB8\x83\xE5\xB0\x94")//_Bool
     DEF(TOK_UTF8_复数,    "\xE5\xA4\x8D\xE6\x95\xB0")//_Complex
     DEF(TOK_UTF8_短整, "\xE7\x9F\xAD\xE6\x95\xB4\xE6\x95\xB0")//short
     DEF(TOK_UTF8_长整, "\xE9\x95\xBF\xE6\x95\xB4\xE6\x95\xB0")//long
     DEF(TOK_UTF8_结构, "\xE7\xBB\x93\xE6\x9E\x84\xE4\xBD\x93")//struct
     DEF(TOK_UTF8_共用, "\xE5\x85\xB1\xE7\x94\xA8\xE4\xBD\x93")//union
     DEF(TOK_UTF8_类型定义, "\xE7\xB1\xBB\xE5\x9E\x8B\xE5\xAE\x9A\xE4\xB9\x89")//typedef
     DEF(TOK_UTF8_枚举, "\xE6\x9E\x9A\xE4\xB8\xBE")//enum
     DEF(TOK_UTF8_取大小, "\xE5\x8F\x96\xE5\xA4\xA7\xE5\xB0\x8F")//sizeof
     DEF(TOK_UTF8_取类型, "\xE5\x8F\x96\xE7\xB1\xBB\xE5\x9E\x8B")//typeof
*/
     DEF(中_无,"无")//void                                       //1.解析数据类型;
     DEF(中_字符,"字符")//char                                   //1.解析数据类型;
     DEF(中_整数,"整数")//int                                    //1.解析数据类型;
     DEF(中_浮点,"浮点")//float                                  //1.解析数据类型;
     DEF(中_双精,"双精")//double                                 //1.解析数据类型;
     DEF(中_布尔,"布尔")//_Bool                                   //1.解析数据类型;
     DEF(中_复数,"复数")//_Complex                                //1.解析数据类型;
     DEF(中_短整,"短整")//short                                  //1.解析数据类型;
     DEF(中_长整,"长整")//long                                   //1.解析数据类型;
     DEF(中_结构体, "结构")//struct                                 //1.解析数据类型
     DEF(中_共用体, "共用")//union                                  //1.解析数据类型
     DEF(中_类型定义, "类型定义")//typedef                            //1.解析数据类型
     DEF(中_枚举, "枚举")//enum                                       //1.解析数据类型
     DEF(中_取大小, "取大小")//sizeof                                 //1.一元
     DEF(中_属性, "属性")//__attribute

     DEF(中_取类型, "取类型")//typeof                                 //1.解析数据类型
/**************************************************关键词--结束**************************************************/

/***************************************************************************************************************/
/* 以下不是关键字。 包括它们以简化解析 */
/* 仅预处理器 */
/*
     DEF(TOK_UTF8_定义, "\xE5\xAE\x9A\xE4\xB9\x89")//define
     DEF(TOK_UTF8_导入, "\xE5\xAF\xBC\xE5\x85\xA5")//include
     DEF(TOK_UTF8_导入下个, "\xE5\xAF\xBC\xE5\x85\xA5\xE4\xB8\x8B\xE4\xB8\x80")//include_next
     DEF(TOK_UTF8_如定义, "\xE5\xA6\x82\xE5\xAE\x9A\xE4\xB9\x89")//ifdef
     DEF(TOK_UTF8_如未定义, "\xE5\xA6\x82\xE6\x9C\xAA\xE5\xAE\x9A\xE4\xB9\x89")//ifndef
     DEF(TOK_UTF8_否则如果, "\xE5\x90\xA6\xE5\x88\x99\xE5\xA6\x82\xE6\x9E\x9C")//elif
     DEF(TOK_UTF8_结束如果, "\xE7\xBB\x93\xE6\x9D\x9F\xE5\xA6\x82\xE6\x9E\x9C")//endif
     DEF(TOK_UTF8_已定义, "\xE5\xB7\xB2\xE5\xAE\x9A\xE4\xB9\x89")//defined
     DEF(TOK_UTF8_解定义, "\xE8\xA7\xA3\xE5\xAE\x9A\xE4\xB9\x89")//undef
     DEF(TOK_UTF8_错误, "\xE9\x94\x99\xE8\xAF\xAF")//error
     DEF(TOK_UTF8_警告, "\xE8\xAD\xA6\xE5\x91\x8A")//warning
     DEF(TOK_UTF8_行号, "\xE8\xA1\x8C\xE5\x8F\xB7")//line
     DEF(TOK_UTF8_指示, "\xE6\x8C\x87\xE7\xA4\xBA")//pragma
*/
     DEF(中_定义, "定义")//define                                     // 1.预处理；2.pp_debug_defines；3.#define TOK_UIDENT TOK_DEFINE
     DEF(中_导入, "导入")//include                                    // 1.预处理
     DEF(中_导入下个, "导入下个")//include_next                    // 1.预处理
     DEF(中_如定义, "如定义")//ifdef                           // 1.预处理 ；2.预处理_跳过
     DEF(中_如未定义, "如未定义")//ifndef                          // 1.预处理 ；2.预处理_跳过
     DEF(中_否则如果, "否则如果")//elif                                // 1.预处理 ；2.预处理_跳过
     DEF(中_结束如果, "结束如果")//endif                               // 1.预处理 ；2.预处理_跳过；3.预处理_跳过
     DEF(中_已定义, "已定义")//defined                                // 1.预处理_表达式 ；2.解析define;3.宏_替换
     DEF(中_解定义, "解定义")//undef                               // 1.预处理 ；2.pp_debug_defines
     DEF(中_错误, "错误")//error                                      // 1.预处理 ；2.预处理；3.预处理_跳过
     DEF(中_警告, "警告")//warning                                    // 1.预处理 ；2.预处理_跳过
     DEF(中_行号, "行号")//line                                       // 1.预处理
     DEF(中_指示, "指示")//pragma                                     // 1.预处理 ；2.pragma_解析
     DEF(中___行号__, "__行号__")//__LINE__
     DEF(中___文件__, "__文件__")//__FILE__
     DEF(中___日期__, "__日期__")//__DATE__
     DEF(中___时间__, "__时间__")//__TIME__
     DEF(中___函数__, "__函数__")//__FUNCTION__
     DEF(中___可变参数__, "__可变参数__")//__VA_ARGS__
     DEF(中___计数__, "__计数__")//__COUNTER__
     DEF(中___有导入__, "__有导入__")//__has_include
     DEF(中___有导入下个__, "__有导入下个__")//__has_include_next
/* 特殊标识符 */
     //DEF(TOK___FUNC__, "__func__")

/* 特殊浮点值 */
     DEF(中_纳米, "__纳米__")//__nan__
     DEF(中_特殊纳米, "__特殊纳米__")//__snan__
     DEF(中_无穷, "__无穷__")//__inf__

/* 属性标识符 */
/* XXX: 一般处理所有单词，因为速度并不重要 */
     DEF(中_节, "节")//section     
     DEF(中_对齐, "对齐")//aligned     
     DEF(中_打包, "打包")//packed
     DEF(中_弱, "弱")//weak
     DEF(中_别名1, "别名")//alias
     DEF(中_别名2, "别名二")//__alias__
     DEF(中_使用, "使用")//used
     DEF(中_未使用, "未使用")//unused
     DEF(中_格式, "格式")//format
     DEF(中_无调试, "无调试")//nodebug
     DEF(中_调用约定, "调用约定")//cdecl
     DEF(中_标准调用, "标准调用")//stdcall
     DEF(中_快速调用, "快速调用")//fastcall
     DEF(中_这调用, "这调用")//thiscall
     DEF(中_寄存器参数, "寄存器参数")//regparm
     DEF(中_清理, "清理")//cleanup
     DEF(中_构造函数, "构造函数")//constructor
     DEF(中_析构函数, "析构函数")//destructor
     DEF(中_总是内联, "总是内联")//always_inline
     DEF(中_无内联, "无内联")//__noinline__
     DEF(中_纯函数, "纯函数")//pure

     DEF(中_模式, "模式")//__mode__
     //DEF(中_模式_QI, "__QI__")//__QI__
     //DEF(中_模式_DI, "__DI__")//__DI__
     //DEF(中_模式_HI, "__HI__")//__HI__
     //DEF(中_模式_SI, "__SI__")//__SI__
     //DEF(中_模式_word, "__word__")//__word__

     DEF(中_导出dll, "导出dll")//dllexport
     DEF(中_导入dll, "导入dll")//dllimport
     DEF(中_节点, "节点")//nodecorate     
     DEF(中_无返回, "无返回")//noreturn
     DEF(中_能见度, "能见度")//visibility
#endif /* 关键字_H */

#ifndef _TCCTOK_H
#define _TCCTOK_H
/*********************************************************************/
/* 关键字 keywords */
     DEF(TOK_IF, "if")
     DEF(TOK_ELSE, "else")
     DEF(TOK_WHILE, "while")
     DEF(TOK_FOR, "for")
     DEF(TOK_DO, "do")
     DEF(TOK_CONTINUE, "continue")
     DEF(TOK_BREAK, "break")
     DEF(TOK_RETURN, "return")
     DEF(TOK_GOTO, "goto")
     DEF(TOK_SWITCH, "switch")
     DEF(TOK_CASE, "case")
     DEF(TOK_DEFAULT, "default")
     DEF(TOK_ASM1, "asm")
     DEF(TOK_ASM2, "__asm")
     DEF(TOK_ASM3, "__asm__")

     DEF(TOK_EXTERN, "extern")
     DEF(TOK_STATIC, "static")
     DEF(TOK_UNSIGNED, "unsigned")
     DEF(TOK__Atomic, "_Atomic")
     DEF(TOK_CONST1, "const")
     DEF(TOK_CONST2, "__const") /* gcc keyword */
     DEF(TOK_CONST3, "__const__") /* gcc keyword */
     DEF(TOK_VOLATILE1, "volatile")
     DEF(TOK_VOLATILE2, "__volatile") /* gcc keyword */
     DEF(TOK_VOLATILE3, "__volatile__") /* gcc keyword */
     DEF(TOK_REGISTER, "register")
     DEF(TOK_SIGNED1, "signed")
     DEF(TOK_SIGNED2, "__signed") /* gcc keyword */
     DEF(TOK_SIGNED3, "__signed__") /* gcc keyword */
     DEF(TOK_AUTO, "auto")
     DEF(TOK_INLINE1, "inline")
     DEF(TOK_INLINE2, "__inline") /* gcc keyword */
     DEF(TOK_INLINE3, "__inline__") /* gcc keyword */
     DEF(TOK_RESTRICT1, "restrict")
     DEF(TOK_RESTRICT2, "__restrict")
     DEF(TOK_RESTRICT3, "__restrict__")
     DEF(TOK_EXTENSION, "__extension__") /* gcc keyword */
     DEF(TOK_THREAD_LOCAL, "_Thread_local") /* C11 thread-local storage */

     DEF(TOK_GENERIC, "_Generic")
     DEF(TOK_STATIC_ASSERT, "_Static_assert")

     DEF(TOK_VOID, "void")
     DEF(TOK_CHAR, "char")
     DEF(TOK_INT, "int")
     DEF(TOK_FLOAT, "float")
     DEF(TOK_DOUBLE, "double")
     DEF(TOK_BOOL, "_Bool")
     DEF(TOK_COMPLEX, "_Complex")
     DEF(TOK_SHORT, "short")
     DEF(TOK_LONG, "long")
     DEF(TOK_STRUCT, "struct")
     DEF(TOK_UNION, "union")
     DEF(TOK_TYPEDEF, "typedef")
     DEF(TOK_ENUM, "enum")
     DEF(TOK_SIZEOF, "sizeof")
     DEF(TOK_ATTRIBUTE1, "__attribute")
     DEF(TOK_ATTRIBUTE2, "__attribute__")
     DEF(TOK_ALIGNOF1, "__alignof")
     DEF(TOK_ALIGNOF2, "__alignof__")
     DEF(TOK_ALIGNOF3, "_Alignof")
     DEF(TOK_ALIGNAS, "_Alignas")
     DEF(TOK_TYPEOF1, "typeof")
     DEF(TOK_TYPEOF2, "__typeof")
     DEF(TOK_TYPEOF3, "__typeof__")
     DEF(TOK_LABEL, "__label__")

/*********************************************************************/
/* 以下不是关键字。包含它们是为了简化解析 the following are not keywords. They are included to ease parsing */
/* 仅限预处理器 preprocessor only */
     DEF(TOK_DEFINE, "define")
     DEF(TOK_INCLUDE, "include")
     DEF(TOK_INCLUDE_NEXT, "include_next")
     DEF(TOK_IFDEF, "ifdef")
     DEF(TOK_IFNDEF, "ifndef")
     DEF(TOK_ELIF, "elif")
     DEF(TOK_ENDIF, "endif")
     DEF(TOK_DEFINED, "defined")
     DEF(TOK_UNDEF, "undef")
     DEF(TOK_ERROR, "error")
     DEF(TOK_WARNING, "warning")
     DEF(TOK_LINE, "line")
     DEF(TOK_PRAGMA, "pragma")
     DEF(TOK___LINE__, "__LINE__")
     DEF(TOK___FILE__, "__FILE__")
     DEF(TOK___DATE__, "__DATE__")
     DEF(TOK___TIME__, "__TIME__")
     DEF(TOK___FUNCTION__, "__FUNCTION__")
     DEF(TOK___VA_ARGS__, "__VA_ARGS__")
     DEF(TOK___COUNTER__, "__COUNTER__")
     DEF(TOK___HAS_INCLUDE, "__has_include")
     DEF(TOK___HAS_INCLUDE_NEXT, "__has_include_next")

/* 特殊标识符 special identifiers */
     DEF(TOK___FUNC__, "__func__")

/* 特殊浮点值 special floating point values */
     DEF(TOK___NAN__, "__nan__")
     DEF(TOK___SNAN__, "__snan__")
     DEF(TOK___INF__, "__inf__")

/* 属性标识符 attribute identifiers */
/* XXX: 一般处理所有tokens，因为速度并不重要 handle all tokens generically since speed is not critical */
     DEF(TOK_SECTION1, "section")
     DEF(TOK_SECTION2, "__section__")
     DEF(TOK_ALIGNED1, "aligned")
     DEF(TOK_ALIGNED2, "__aligned__")
     DEF(TOK_PACKED1, "packed")
     DEF(TOK_PACKED2, "__packed__")
     DEF(TOK_WEAK1, "weak")
     DEF(TOK_WEAK2, "__weak__")
     DEF(TOK_ALIAS1, "alias")
     DEF(TOK_ALIAS2, "__alias__")
     DEF(TOK_USED1, "used")
     DEF(TOK_USED2, "__used__")
     DEF(TOK_UNUSED1, "unused")
     DEF(TOK_UNUSED2, "__unused__")
     DEF(TOK_FORMAT1, "format")
     DEF(TOK_FORMAT2, "__format__")
     DEF(TOK_NODEBUG1, "nodebug")
     DEF(TOK_NODEBUG2, "__nodebug__")
     DEF(TOK_CDECL1, "cdecl")
     DEF(TOK_CDECL2, "__cdecl")
     DEF(TOK_CDECL3, "__cdecl__")
     DEF(TOK_STDCALL1, "stdcall")
     DEF(TOK_STDCALL2, "__stdcall")
     DEF(TOK_STDCALL3, "__stdcall__")
     DEF(TOK_FASTCALL1, "fastcall")
     DEF(TOK_FASTCALL2, "__fastcall")
     DEF(TOK_FASTCALL3, "__fastcall__")
     DEF(TOK_THISCALL1, "thiscall")
     DEF(TOK_THISCALL2, "__thiscall")
     DEF(TOK_THISCALL3, "__thiscall__")
     DEF(TOK_REGPARM1, "regparm")
     DEF(TOK_REGPARM2, "__regparm__")
     DEF(TOK_CLEANUP1, "cleanup")
     DEF(TOK_CLEANUP2, "__cleanup__")
     DEF(TOK_CONSTRUCTOR1, "constructor")
     DEF(TOK_CONSTRUCTOR2, "__constructor__")
     DEF(TOK_DESTRUCTOR1, "destructor")
     DEF(TOK_DESTRUCTOR2, "__destructor__")
     DEF(TOK_ALWAYS_INLINE1, "always_inline")
     DEF(TOK_ALWAYS_INLINE2, "__always_inline__")
     DEF(TOK_NOINLINE, "__noinline__")
     DEF(TOK_PURE1, "pure")
     DEF(TOK_PURE2, "__pure__")

     DEF(TOK_MODE, "__mode__")
     DEF(TOK_MODE_QI, "__QI__")
     DEF(TOK_MODE_DI, "__DI__")
     DEF(TOK_MODE_HI, "__HI__")
     DEF(TOK_MODE_SI, "__SI__")
     DEF(TOK_MODE_word, "__word__")

     DEF(TOK_DLLEXPORT, "dllexport")
     DEF(TOK_DLLIMPORT, "dllimport")
     DEF(TOK_NODECORATE, "nodecorate")
     DEF(TOK_NORETURN1, "noreturn")
     DEF(TOK_NORETURN2, "__noreturn__")
     DEF(TOK_NORETURN3, "_Noreturn")
     DEF(TOK_VISIBILITY1, "visibility")
     DEF(TOK_VISIBILITY2, "__visibility__")

     DEF(TOK_builtin_types_compatible_p, "__builtin_types_compatible_p")
     DEF(TOK_builtin_choose_expr, "__builtin_choose_expr")
     DEF(TOK_builtin_constant_p, "__builtin_constant_p")
     DEF(TOK_builtin_frame_address, "__builtin_frame_address")
     DEF(TOK_builtin_return_address, "__builtin_return_address")
     DEF(TOK_builtin_expect, "__builtin_expect")
     DEF(TOK_builtin_unreachable, "__builtin_unreachable")
     /*DEF(TOK_builtin_va_list, "__builtin_va_list")*/
#if defined TCC_TARGET_PE && defined TCC_TARGET_X86_64
     DEF(TOK_builtin_va_start, "__builtin_va_start")
#elif defined TCC_TARGET_X86_64
     DEF(TOK_builtin_va_arg_types, "__builtin_va_arg_types")
#elif defined TCC_TARGET_ARM64
     DEF(TOK_builtin_va_start, "__builtin_va_start")
     DEF(TOK_builtin_va_arg, "__builtin_va_arg")
#elif defined TCC_TARGET_RISCV64
     DEF(TOK_builtin_va_start, "__builtin_va_start")
#endif /* defined TCC_TARGET_PE && defined TCC_TARGET_X86_64 */

/* 原子操作 atomic operations */
#define DEF_ATOMIC(ID) DEF(TOK_##__##ID, "__"#ID)
     DEF_ATOMIC(atomic_store)
     DEF_ATOMIC(atomic_load)
     DEF_ATOMIC(atomic_exchange)
     DEF_ATOMIC(atomic_compare_exchange)
     DEF_ATOMIC(atomic_fetch_add)
     DEF_ATOMIC(atomic_fetch_sub)
     DEF_ATOMIC(atomic_fetch_or)
     DEF_ATOMIC(atomic_fetch_xor)
     DEF_ATOMIC(atomic_fetch_and)
     DEF_ATOMIC(atomic_fetch_nand)
     DEF_ATOMIC(atomic_add_fetch)
     DEF_ATOMIC(atomic_sub_fetch)
     DEF_ATOMIC(atomic_or_fetch)
     DEF_ATOMIC(atomic_xor_fetch)
     DEF_ATOMIC(atomic_and_fetch)
     DEF_ATOMIC(atomic_nand_fetch)

/* 编译指示 pragma */
     DEF(TOK_pack, "pack")
#if !defined(TCC_TARGET_I386) && !defined(TCC_TARGET_X86_64) && \
    !defined(TCC_TARGET_ARM) && !defined(TCC_TARGET_ARM64) && \
    !defined(TCC_TARGET_RISCV64)
     /* 已为汇编程序定义 already defined for assembler */
     DEF(TOK_ASM_push, "push")
     DEF(TOK_ASM_pop, "pop")
#endif
     DEF(TOK_comment, "comment")
     DEF(中_注解, "注解")//comment                //1.编译指示_解析 pragma_parse
     //DEF(TOK_UTF8_注解, "\xE6\xB3\xA8\xE8\xA7\xA3")
     DEF(TOK_lib, "lib")
     DEF(TOK_push_macro, "push_macro")
     DEF(TOK_pop_macro, "pop_macro")
     DEF(TOK_once, "once")
     DEF(TOK_option, "option")

/* 内建函数或变量 builtin functions or variables */
#ifndef TCC_ARM_EABI
     DEF(TOK_memcpy, "memcpy")
     DEF(TOK_memmove, "memmove")
     DEF(TOK_memset, "memset")
     DEF(TOK___divdi3, "__divdi3")
     DEF(TOK___moddi3, "__moddi3")
     DEF(TOK___udivdi3, "__udivdi3")
     DEF(TOK___umoddi3, "__umoddi3")
     DEF(TOK___ashrdi3, "__ashrdi3")
     DEF(TOK___lshrdi3, "__lshrdi3")
     DEF(TOK___ashldi3, "__ashldi3")
     DEF(TOK___floatundisf, "__floatundisf")
     DEF(TOK___floatundidf, "__floatundidf")
# ifndef TCC_ARM_VFP
     DEF(TOK___floatundixf, "__floatundixf")
     DEF(TOK___fixunsxfdi, "__fixunsxfdi")
# endif /* TCC_ARM_VFP */
     DEF(TOK___fixunssfdi, "__fixunssfdi")
     DEF(TOK___fixunsdfdi, "__fixunsdfdi")
#endif /* !TCC_ARM_EABI */

#if defined TCC_TARGET_ARM
# ifdef TCC_ARM_EABI
     DEF(TOK_memcpy, "__aeabi_memcpy")
     DEF(TOK_memmove, "__aeabi_memmove")
     DEF(TOK_memmove4, "__aeabi_memmove4")
     DEF(TOK_memmove8, "__aeabi_memmove8")
     DEF(TOK_memset, "__aeabi_memset")
     DEF(TOK___aeabi_ldivmod, "__aeabi_ldivmod")
     DEF(TOK___aeabi_uldivmod, "__aeabi_uldivmod")
     DEF(TOK___aeabi_idivmod, "__aeabi_idivmod")
     DEF(TOK___aeabi_uidivmod, "__aeabi_uidivmod")
     DEF(TOK___divsi3, "__aeabi_idiv")
     DEF(TOK___udivsi3, "__aeabi_uidiv")
     DEF(TOK___floatdisf, "__aeabi_l2f")
     DEF(TOK___floatdidf, "__aeabi_l2d")
     DEF(TOK___fixsfdi, "__aeabi_f2lz")
     DEF(TOK___fixdfdi, "__aeabi_d2lz")
     DEF(TOK___ashrdi3, "__aeabi_lasr")
     DEF(TOK___lshrdi3, "__aeabi_llsr")
     DEF(TOK___ashldi3, "__aeabi_llsl")
     DEF(TOK___floatundisf, "__aeabi_ul2f")
     DEF(TOK___floatundidf, "__aeabi_ul2d")
     DEF(TOK___fixunssfdi, "__aeabi_f2ulz")
     DEF(TOK___fixunsdfdi, "__aeabi_d2ulz")
# else
     DEF(TOK___modsi3, "__modsi3")
     DEF(TOK___umodsi3, "__umodsi3")
     DEF(TOK___divsi3, "__divsi3")
     DEF(TOK___udivsi3, "__udivsi3")
     DEF(TOK___floatdisf, "__floatdisf")
     DEF(TOK___floatdidf, "__floatdidf")
#  ifndef TCC_ARM_VFP
     DEF(TOK___floatdixf, "__floatdixf")
     DEF(TOK___fixunssfsi, "__fixunssfsi")
     DEF(TOK___fixunsdfsi, "__fixunsdfsi")
     DEF(TOK___fixunsxfsi, "__fixunsxfsi")
     DEF(TOK___fixxfdi, "__fixxfdi")
#  endif /* TCC_ARM_VFP */
     DEF(TOK___fixsfdi, "__fixsfdi")
     DEF(TOK___fixdfdi, "__fixdfdi")
# endif /* TCC_ARM_EABI */
#endif /* TCC_TARGET_ARM */

#if defined TCC_TARGET_C67
     DEF(TOK__divi, "_divi")
     DEF(TOK__divu, "_divu")
     DEF(TOK__divf, "_divf")
     DEF(TOK__divd, "_divd")
     DEF(TOK__remi, "_remi")
     DEF(TOK__remu, "_remu")
#endif /* TCC_TARGET_C67 */

#if defined TCC_TARGET_I386
     DEF(TOK___fixsfdi, "__fixsfdi")
     DEF(TOK___fixdfdi, "__fixdfdi")
     DEF(TOK___fixxfdi, "__fixxfdi")
#endif/* TCC_TARGET_I386 */

#if defined TCC_TARGET_X86_64
     DEF(TOK___fixxfdi, "__fixxfdi")
#endif/* TCC_TARGET_X86_64 */

     DEF(TOK_alloca, "alloca")

#if defined TCC_TARGET_PE
     DEF(TOK___chkstk, "__chkstk")
#endif/* TCC_TARGET_PE */

#if defined TCC_TARGET_ARM64 || defined TCC_TARGET_RISCV64
     DEF(TOK___arm64_clear_cache, "__arm64_clear_cache")
     DEF(TOK___addtf3, "__addtf3")
     DEF(TOK___subtf3, "__subtf3")
     DEF(TOK___multf3, "__multf3")
     DEF(TOK___divtf3, "__divtf3")
     DEF(TOK___extendsftf2, "__extendsftf2")
     DEF(TOK___extenddftf2, "__extenddftf2")
     DEF(TOK___trunctfsf2, "__trunctfsf2")
     DEF(TOK___trunctfdf2, "__trunctfdf2")
     DEF(TOK___fixtfsi, "__fixtfsi")
     DEF(TOK___fixtfdi, "__fixtfdi")
     DEF(TOK___fixunstfsi, "__fixunstfsi")
     DEF(TOK___fixunstfdi, "__fixunstfdi")
     DEF(TOK___floatsitf, "__floatsitf")
     DEF(TOK___floatditf, "__floatditf")
     DEF(TOK___floatunsitf, "__floatunsitf")
     DEF(TOK___floatunditf, "__floatunditf")
     DEF(TOK___eqtf2, "__eqtf2")
     DEF(TOK___netf2, "__netf2")
     DEF(TOK___lttf2, "__lttf2")
     DEF(TOK___letf2, "__letf2")
     DEF(TOK___gttf2, "__gttf2")
     DEF(TOK___getf2, "__getf2")
#endif/* defined TCC_TARGET_ARM64 || defined TCC_TARGET_RISCV64 */

/* 边界检查符号 bound checking symbols */
#ifdef CONFIG_TCC_BCHECK
     DEF(TOK___bound_ptr_add, "__bound_ptr_add")
     DEF(TOK___bound_ptr_indir1, "__bound_ptr_indir1")
     DEF(TOK___bound_ptr_indir2, "__bound_ptr_indir2")
     DEF(TOK___bound_ptr_indir4, "__bound_ptr_indir4")
     DEF(TOK___bound_ptr_indir8, "__bound_ptr_indir8")
     DEF(TOK___bound_ptr_indir12, "__bound_ptr_indir12")
     DEF(TOK___bound_ptr_indir16, "__bound_ptr_indir16")
     DEF(TOK___bound_main_arg, "__bound_main_arg")
     DEF(TOK___bound_local_new, "__bound_local_new")
     DEF(TOK___bound_local_delete, "__bound_local_delete")
     DEF(TOK___bound_setjmp, "__bound_setjmp")
     DEF(TOK___bound_longjmp, "__bound_longjmp")
     DEF(TOK___bound_new_region, "__bound_new_region")
# ifdef TCC_TARGET_PE
#  ifdef TCC_TARGET_X86_64
     DEF(TOK___bound_alloca_nr, "__bound_alloca_nr")
#  endif/* TCC_TARGET_X86_64 */
# else
     DEF(TOK_sigsetjmp, "sigsetjmp")
     DEF(TOK___sigsetjmp, "__sigsetjmp")
     DEF(TOK_siglongjmp, "siglongjmp")
# endif/* TCC_TARGET_PE */
     DEF(TOK_setjmp, "setjmp")
     DEF(TOK__setjmp, "_setjmp")
     DEF(TOK_longjmp, "longjmp")
#endif/* CONFIG_TCC_BCHECK */


/*********************************************************************/
/* tcc汇编器 Tiny Assembler */
#define DEF_ASM(x) DEF(TOK_ASM_ ## x, #x)
#define DEF_ASMDIR(x) DEF(TOK_ASMDIR_ ## x, "." #x)
#define TOK_ASM_int TOK_INT

#define TOK_ASMDIR_FIRST TOK_ASMDIR_byte
#define TOK_ASMDIR_LAST TOK_ASMDIR_section

 DEF_ASMDIR(byte)       /* 必须是第一个指令 must be first directive */
 DEF_ASMDIR(word)
 DEF_ASMDIR(align)
 DEF_ASMDIR(balign)
 DEF_ASMDIR(p2align)
 DEF_ASMDIR(set)
 DEF_ASMDIR(skip)
 DEF_ASMDIR(space)
 DEF_ASMDIR(string)
 DEF_ASMDIR(asciz)
 DEF_ASMDIR(ascii)
 DEF_ASMDIR(file)
 DEF_ASMDIR(globl)
 DEF_ASMDIR(global)
 DEF_ASMDIR(weak)
 DEF_ASMDIR(hidden)
 DEF_ASMDIR(ident)
 DEF_ASMDIR(size)
 DEF_ASMDIR(type)
 DEF_ASMDIR(text)
 DEF_ASMDIR(data)
 DEF_ASMDIR(bss)
 DEF_ASMDIR(previous)
 DEF_ASMDIR(pushsection)
 DEF_ASMDIR(popsection)
 DEF_ASMDIR(fill)
 DEF_ASMDIR(rept)
 DEF_ASMDIR(endr)
 DEF_ASMDIR(org)
 DEF_ASMDIR(quad)
#if defined(TCC_TARGET_I386)
 DEF_ASMDIR(code16)
 DEF_ASMDIR(code32)
#elif defined(TCC_TARGET_X86_64)
 DEF_ASMDIR(code64)
#elif defined(TCC_TARGET_RISCV64)
 DEF_ASMDIR(option)
#endif/* defined(TCC_TARGET_I386) */
 DEF_ASMDIR(short)
 DEF_ASMDIR(long)
 DEF_ASMDIR(int)
 DEF_ASMDIR(symver)
 DEF_ASMDIR(reloc)
 DEF_ASMDIR(section)    /* 必须是最后一个指令 must be last directive */

#if defined TCC_TARGET_I386 || defined TCC_TARGET_X86_64
#include "i386-tok.h"
#endif/* defined TCC_TARGET_I386 || defined TCC_TARGET_X86_64 */

#if defined TCC_TARGET_ARM || defined TCC_TARGET_ARM64
#include "arm-tok.h"
#endif/* defined TCC_TARGET_ARM || defined TCC_TARGET_ARM64 */

#if defined TCC_TARGET_RISCV64
#include "riscv64-tok.h"
#endif/* defined TCC_TARGET_RISCV64 */

#endif /* TCCTOK_H */