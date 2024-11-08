//本文档作为代码规范模板，不考虑代码实际用途

//头文件使用包含保护,定义以大写+下划线的形式构成
#ifndef PEN_H
#define PEN_H
//结束标志加注文件名，便于识别
#endif  //PEN_H

//不符合我命名规范的一定是第三方库或某些系统库
//系统库标准模板库置于最上层
#include<iostream>
#include<string>
#include<memory>

//操作系统库置于第二层
#include<windows.h>

//第三方库置与自定义库按实际需求改变顺序

//对于所有的函数包括类成员函数尽量实现声明与定义分离

//在编程实践中避免使用魔术字

//所有变量包括指针在定义的同时确保完成初始化
//复杂类型定义考虑使用typedef或using优化
typedef void*(*ptr_function)(int,char);
using ptr_catstr=char*(const char*,const char*);

//宏、常量、枚举值一律用大写加下划线的形式
//C++标准建议减少使用宏，尽量以const修饰常量
//考虑在数值常量类加上单位
const int SIZE_BUFFER_BYTES = 1024;
const int VALUE_MAX = 100;

//代码块大括号对齐
//函数参数列表不能一行就分多行
//函数内容等换行最好要考虑内容

//代码中尽量减少全局变量的使用
//全局变量纳入命名空间，空间名以Global开头
namespace GlobalPen
{
    DWORD time_current;
}

//枚举名，类名，结构体名一律用大驼峰命名法
enum Color
{
    RED,
    GREEN,
    BLUE,
    WHITE,
};

//单独的全局变量以g_开头
Color g_color_background=WHITE;
size_t g_value_current=99;

//模板函数以template_开头
template<typename T>
T template_add(T num_1,T num_2)
{
    return num_1+num_2;
}
//模板类以T为后缀结尾
template<typename Y>
class StatusT
{
    private:
    //指针变量建议使用智能指针简化内存管理
    //尽量避免在同一个代码段中混合使用裸指针和智能指针
    //项目尽量避免裸指针
    //指针变量都以ptr开头
    std::shared_ptr<Y> ptr_status_base=nullptr;
    std::unique_ptr<Y> ptr_status_current=std::make_unique<Y>();
};

class Pen
{
    //类成员变量和函数分开，分别单独使用修饰
    public:
    //构造函数和析构函数不做修改的情况下，显示指定使用默认构造函数
    Pen()=default;
    //构造函数初始化成员,最好使用参数列表实现
    //此处只作为演示，实际应用声明与定义分开
    Pen(Color pen_color):color_current(pen_color){}
    ~Pen()=default;
    //变量、函数名一律使用小写字母加下划线的形式
    //名称=动宾短语时，命名使用动词+操作对象
    //变量将对象放前方，修饰置后，便于统一名称
    Pen& get_pen();
    Color get_color();
    void set_color(const Color& new_color);
    void set_size(const size_t new_size);
    void set_type(const size_t new_type);
    //传递对象尽量考虑引用
    //函数功能不存在修改的引用必须以const修饰
    void get_attributes(const Pen& pen_src);
    //检查用的函数
    void check_status();
    //处理问题函数
    void handle_error();


    //成员变量名由于有类名支撑，考虑去掉冗余信息，如带pen
    private:
    //名称=名词＋名词时，命名使用属性+主体
    Color color_current;
    size_t size_current;

};

//提示信息以标题+信息的格式书写,首字母都大写
//标题=主语+动词过去分词
//信息使用to do结构,Failed to do...
//具体的短语还需要参考软件翻译结果
std::string tip_malloc_error("Malloc failed:Failed to malloc!");

//注释统一放在代码上方

//注释函数采用，作用+参数+返回值的格式书写
//每点进行分行

//功能：判断该字符串是否为C风格字符串
//参数：str_ctr 源字符串
//      size_str 源字符串大小，避免越界
//返回值：true 是C风格反之不是
bool is_cstr(char* str_src,size_t size_str)
{
    return str_src[size_str-1]==0;
}

//注释某部分代码或变量，描述功能即可

//判断值是否小于某值
bool is_less=g_value_current<VALUE_MAX;


/*待补充*/
// 1. 命名空间使用：为自定义的命名空间提供简短的说明，描述其用途和包含的内容。
// 2. 异常处理：增加关于异常处理的规范，特别是在 C++ 中如何使用 try-catch 块以及何时抛出异常。
// 3. 注释风格：增加关于注释风格的一致性建议，例如使用 // 还是 /* */，以及何时使用行内注释。
// 4. 代码格式化：增加关于代码格式化的详细规范，例如缩进使用空格还是制表符，以及缩进的宽度。
// 5. 类设计：可以补充关于类设计的建议，例如何时使用继承、接口和抽象类。
// 6. 线程安全：如果项目涉及多线程编程，建议增加关于线程安全的规范。
// 7. 日志记录：如果项目需要日志记录，建议增加关于日志记录的规范，包括日志的格式和级别。
// 8. 测试：建议增加关于单元测试和集成测试的规范，描述测试的范围和深度。
// 9. 文档生成：如果使用工具生成文档（如 Doxygen），可以增加相关的注释规范。
// 10. 编码规范：建议明确编码规范，例如 UTF-8，确保代码在不同平台上的一致性。
// 11. 版本控制：建议增加关于版本控制的规范，如提交信息的格式和分支策略。
// 12. 代码审查：建议增加关于代码审查的流程和标准，以确保代码质量。
// 13. 代码风格与平台一致性：确认是否需要考虑特定的代码风格或平台一致性。例如，某些公司或项目可能有特定的命名规则或代码格式要求。
// 14. 函数参数列表格式：您提到“函数参数列表不能一行就分多行”，这是一个很好的实践，有助于代码的可读性。但也可以考虑规定参数列表的缩进风格以及是否需要每行只声明一个参数。
// 15. 代码注释的语言和风格：关于注释的书写方式，可以进一步细化，例如使用何种语言进行注释（最好是与代码相同的语言），注释中的词汇选择等。
// 16. 代码的可维护性：考虑添加关于代码可维护性的规范，如鼓励编写易于理解的代码、避免使用过于复杂的嵌套结构等。
// 17. 日志与调试信息：对于日志和调试信息的处理可以加入规范，例如使用何种日志库，如何记录关键信息，以及如何开关调试信息等。
// 18. 代码安全：考虑添加关于代码安全的规范，如避免常见的安全漏洞（如 SQL 注入、跨站脚本攻击等），以及如何处理和避免潜在的内存泄漏等。
// 19. 第三方库的使用与管理：当使用第三方库时，考虑添加规范关于如何管理这些库的版本，如何处理库之间的依赖关系等。
// 20. 文档与接口定义：对于公共 API 或函数接口，除了注释外，还应考虑自动生成文档的要求和格式。可以添加规范关于如何编写和使用注释来生成这些文档。
// 21. 代码的简化与优化：鼓励编写简洁、高效的代码。例如，如何使用合适的数据结构，如何避免不必要的复制操作等。可以在规范中加入这方面的指导原则。
// 22. 代码风格检查工具：可以考虑使用代码风格检查工具（如 Clang-Tidy、Cppcheck 等）来自动检查代码是否符合规范，这样可以提高代码质量和一致性。
// 23. 文档更新：随着技术的发展和团队的成长，代码规范可能会需要更新和调整。因此，建议在规范文档中添加版本号和更新日志，以便跟踪和记录规范的变更。