## 1. 项目搭建

### 1.1 开发环境

#### 1.1.1 QtCreator编译器

##### 1.1.1.1 简要信息

```
Qt 6 具有新特性。
在 Qt Creator 中编写程序时使用的 C++语言，实际上是经过 Qt 扩展的 C++语言。
在 Qt Creator 中可以使用 Clang 代码模型，且默认是启用的。Clang 模型能对源程序进行分析，在编写代码时会提供函数提示、代码补全等功能，而且在编写代码时就会出现警告和错误提示，直接显示在代码行的右端。
```

###### 1.1.1.1.2 基础模块

| 模块名称          | 功能描述                                                     |
| ----------------- | ------------------------------------------------------------ |
| Qt Core           | Qt框架的核心，定义了元对象系统对标准C++进行扩展              |
| Qt GUI            | 提供用于GUI设计的基础类，包括窗口系统集成、事件处理、字体和文字处理等 |
| Qt Network        | 提供实现TCP/IP网络通信的类                                   |
| Qt Widgets        | 提供用于创建GUI的各种界面组件类                              |
| Qt D-Bus          | 提供实现D-Bus通信协议（用于进程间通信和远程过程调用）的类    |
| Qt Test           | 提供对应用程序和库进行单元测试的类                           |
| Qt QML            | QML编程框架，定义了QML和基础引擎                             |
| Qt Quick          | 用于开发QML应用程序的标准库，提供创建UI的基本类型            |
| Qt Quick Controls | 基于Qt Quick的控件集，用于创建复杂的UI                       |
| Qt Quick Dialogs  | 通过QML使用系统对话框的功能                                  |
| Qt Quick Layouts  | 提供用于管理界面布局的QML类型                                |
| Qt Quick Test     | QML应用程序的单元测试框架                                    |

###### 1.1.1.1.3 附加模块

| 模块名称                 | 功能描述                                                     |
| ------------------------ | ------------------------------------------------------------ |
| Active Qt                | 用于开发使用 ActiveX 和 COM 控件的 Windows 应用程序          |
| Qt 3D                    | 支持二维和三维图形渲染，用于开发近实时的仿真系统             |
| Qt 5 Core Compatibility  | 提供一些 Qt 5 中有而 Qt 6 中没有的 API，以兼容 Qt 5          |
| Qt Bluetooth             | 提供访问蓝牙硬件的功能                                       |
| Qt Charts                | 提供用于数据显示的二维图表组件                               |
| Qt Concurrent            | 提供类支持编写多线程应用程序，无需底层线程控制               |
| Qt Data Visualization    | 提供用于三维数据可视化显示的类                               |
| Qt Help                  | 提供在应用程序中集成帮助文档的类                             |
| Qt Image Formats         | 支持附加图片格式的插件，如 TIFF、MNG 和 TGA 等               |
| Qt Multimedia            | 提供处理多媒体内容（音频、视频）的类，包括播放和录制功能     |
| Qt Network Authorization | 使 Qt 应用程序能访问在线账号或 HTTP 服务，保护用户密码       |
| Qt NFC                   | 提供访问近场通信（NFC）硬件的功能                            |
| Qt OpenGL                | 提供便于在应用程序中使用 OpenGL 的类                         |
| Qt Positioning           | 通过 GPS 或 WiFi 定位，为应用程序提供定位信息                |
| Qt Print Support         | 提供用于打印控制的类                                         |
| Qt Remote Objects        | 提供进程间通信技术，支持进程间或计算机间信息交换             |
| Qt SCXML                 | 用于通过 SCXML（有限状态机规范）文件创建状态机               |
| Qt Sensors               | 提供访问传感器硬件（如加速度计、陀螺仪）的功能               |
| Qt Serial Bus            | 提供访问串行工业总线（如 CAN 和 Modbus 总线）的功能          |
| Qt Serial Port           | 提供访问兼容 RS232 引脚的串行接口的功能                      |
| Qt Shader Tools          | 提供用于三维图形着色的工具                                   |
| Qt SQL                   | 提供使用 SQL 操作数据库的类                                  |
| Qt SVG                   | 提供显示 SVG 图片文件的类                                    |
| Qt UI Tools              | 提供在程序运行时加载 Qt Designer 设计的 UI 文件以动态创建 UI 的类 |
| Qt Virtual Keyboard      | 实现不同输入法的虚拟键盘                                     |
| Qt Wayland Compositor    | 实现 Wayland 协议，能创建用户定制的显示服务                  |
| Qt WebChannel            | 用于实现服务器端（QML 或 C++ 应用程序）与客户端（HTML/JavaScript 或 QML 应用程序）的 P2P 通信 |
| Qt WebEngine             | 通过 Chromium 浏览器项目实现在应用程序中嵌入显示动态网页的类和函数 |
| Qt WebSockets            | 提供 WebSocket 通信功能，实现客户端程序与远程主机的双向通信  |

##### 1.1.1.2 功能面板

###### 1.1.1.2.1 Designer面板

``` markdown
• 窗口左侧是组件面板，分为多个组，如 Layouts、Buttons、Display Widgets 等，界面设计的常用组件都可以在组件面板里找到。
• 窗口中间主要区域是待设计的窗体。如果要将某个组件放置到窗体上，从组件面板上拖动一个组件放置到窗体上即可。例如，放置一个标签（Label）和一个按钮（Push Button）到窗体上。
• 待设计窗体下方有 Action 编辑器（Action Editor）和信号与槽编辑器（Signals and Slots Editor）。Action 编辑器用于可视化设计 Action，信号与槽编辑器用于可视化地进行信号与
槽的关联。
• 窗口上方有一个布局和界面设计工具栏，工具栏上的按钮主要用于实现布局和界面设计。
• 窗口右侧上方是对象检查器（Object Inspector），它用树状视图显示窗体上各组件的布局和层级关系。视图有两列，显示了每个组件的对象名称（objectName）和类名称。
• 窗口右侧下方是属性编辑器（Property Editor）。属性编辑器显示窗体上选中的组件或窗体的各种属性，可以在属性编辑器里修改这些属性的值。
```

###### 1.1.1.2.2 节点菜单

```
在 Qt Creator 的项目管理目录树中，项目节点的快捷菜单中的如下几项对项目管理比较有用。
• Build：以增量方式构建项目。
• Rebuild：完全重新构建项目。
• Clean：清除项目构建过程中的所有中间文件。
• Run qmake：使用 qmake 重新构建项目。有些时候 UI
文件被修改了，构建项目时却没有出现相应变化，这时执行 Run qmake 重新构建项目，就会重新执行 UIC、MOC、RCC 等预编译器。
```

##### 1.1.1.3 设计状态

###### 1.1.1.3.1 基础设计状态

```markdown
(F3) 界面设计进入编辑状态，就是正常的设计状态
(F4) 进入信号与槽的可视化设计状态
```

###### 1.1.1.3.2 伙伴关系编辑状态

```markdown
进入伙伴关系编辑状态
步骤：在 Qt Designer 的工具栏上，点击“Edit Buddies”按钮。
目的：进入编辑状态以设置或修改界面元素之间的伙伴关系。
```

```markdown
建立伙伴关系
起点：选择一个标签（QLabel）作为伙伴关系的起点。
过程：
1.按住鼠标左键，选中标签。
2.将标签拖向一个具有输入焦点的组件（如 QLineEdit）。
3.释放鼠标，此时标签和组件之间就建立了伙伴关系。
```

```markdown
伙伴关系的作用
快捷键导航：
在标签的 text 属性中使用“&”符号指定一个快捷字符（如“姓 名(&N)”）。
用户可以在程序运行时通过 Alt+快捷键（如 Alt+N）快速将输入焦点切换到与该标签关联的编辑框内。
提高可访问性：
使用户能够更快捷地在不同输入字段之间切换，提升用户体验。
```

```markdown
增强程序通用性
自动处理输入焦点：在 Qt 程序中，通过伙伴关系可以自动处理输入焦点的切换，无需编写额外的代码来手动控制。
灵活性：伙伴关系使程序更加通用和灵活，能够适应不同的用户界面需求。
```



###### 1.1.1.3.3 Tab顺序编辑状态

```
进入 Tab 顺序编辑状态，Tab 顺序是在键盘上按 Tab 键时，输入焦点在界面各组件之间移动的顺序
```

##### 1.1.1.4 IDE快捷键

| 类别               | 快捷键                                               | 功能描述                                                     |
| ------------------ | ---------------------------------------------------- | ------------------------------------------------------------ |
| **文件与项目相关** | Ctrl + N                                             | 新建项目                                                     |
|                    | Ctrl + O                                             | 打开项目（注意，Ctrl + Shift + O为打开文件）                 |
|                    | Ctrl + S                                             | 保存文件                                                     |
|                    | Ctrl + Shift + S                                     | 另存为                                                       |
|                    | Ctrl + W                                             | 关闭文件                                                     |
|                    | Ctrl + F4                                            | 关闭当前文件外的其他文件                                     |
|                    | Ctrl + Shift + F4                                    | 关闭所有已打开文件                                           |
| **编辑相关**       | Ctrl + C                                             | 复制                                                         |
|                    | Ctrl + X                                             | 剪切                                                         |
|                    | Ctrl + V                                             | 粘贴；Ctrl + Shift + V（显示粘贴列表）                       |
|                    | Ctrl + Z                                             | 撤销                                                         |
|                    | Ctrl + Y                                             | 重做                                                         |
|                    | Ctrl + F                                             | 查找；Ctrl + Shift + F（高级查找）                           |
|                    | Ctrl + H                                             | 替换                                                         |
|                    | F3                                                   | 查找下一个                                                   |
|                    | Shift + F3                                           | 查找上一个                                                   |
|                    | Ctrl + Space                                         | 自动完成代码                                                 |
|                    | Ctrl + Shift + Space                                 | 智能提示                                                     |
|                    | Ctrl + /                                             | 注释；Ctrl + K, C（注释选定的代码）；Ctrl + K, U（取消注释选定的代码） |
|                    | Ctrl + A后接Ctrl + I；或Ctrl + K, D                  | 自动对齐/格式化代码                                          |
|                    | Ctrl + A                                             | 全选                                                         |
| **光标与行操作**   | Ctrl + Shift + Enter；Alt + Up（或Ctrl + Shift + ↑） | 移动到上一行                                                 |
|                    | Ctrl + Enter；Alt + Down（或Ctrl + Shift + ↓）       | 移动到下一行                                                 |
|                    | Ctrl + Shift + ↑                                     | 向上移动行                                                   |
|                    | Ctrl + Shift + ↓                                     | 向下移动行                                                   |
|                    | Ctrl + Shift + Page Up                               | 复制当前行到上一行                                           |
|                    | Ctrl + Shift + Page Down                             | 复制当前行到下一行                                           |
|                    | Ctrl + L                                             | 跳转到行                                                     |
| **导航与跳转**     | F2                                                   | 转到定义                                                     |
|                    | F4；Ctrl+E, F4                                       | 在当前文件中查找符号；在新分栏中打开                         |
|                    | F4；Ctrl+E, F4                                       | 头文件和源文件切换；在新分栏中打开                           |
|                    | Shift + F4                                           | 跳转到UI设计器                                               |
|                    | Ctrl + M                                             | 添加书签                                                     |
|                    | Ctrl + .                                             | 下一个书签                                                   |
|                    | Ctrl + ,                                             | 上一个书签                                                   |
|                    | Ctrl + Shift + B                                     | 查看书签视图                                                 |
|                    | Ctrl + Tab                                           | 历史中先前/上一个打开的文件                                  |
|                    | Ctrl + Shift + Tab                                   | 历史中下一个打开的文件                                       |
|                    | Ctrl + E, 2                                          | 新建左右分栏                                                 |
|                    | Ctrl + E, 3                                          | 新建上下分栏                                                 |
|                    | Ctrl + E, 0                                          | 删除当前分栏                                                 |
|                    | Ctrl + E, 1                                          | 删除所有分栏                                                 |
|                    | Ctrl + E, O                                          | 转到下一个分栏                                               |
|                    | Ctrl + E, I                                          | 转到上一个分栏                                               |
| **编译与构建**     | Ctrl + B                                             | 构建项目                                                     |
|                    | Ctrl + Shift + B                                     | 构建所有项目                                                 |
|                    | Alt + Backspace（或Backspace）                       | 取消构建（根据具体版本和配置可能有所不同）                   |
| **调试相关**       | F5                                                   | 开始/继续调试                                                |
|                    | Shift + F5                                           | 停止调试                                                     |
|                    | F7；F11                                              | 单步进入                                                     |
|                    | F8；F10                                              | 单步跳过                                                     |
|                    | Shift + F11                                          | 逐步跳出调试                                                 |
|                    | Ctrl + F10                                           | 执行到行                                                     |
|                    | Ctrl + F6                                            | 运行到选择的函数                                             |
|                    | F9                                                   | 切换断点                                                     |
| **其他常用快捷键** | Ctrl + 鼠标滚轮                                      | 改变编辑器界面字体显示比例大小                               |
|                    | Shift + Alt + R                                      | 预览Qt Designer                                              |
|                    | Ctrl + Enter                                         | 添加新行（与移动到下一行相同，但也会在新位置添加一行）       |
|                    | Alt + U/Alt + Shift + U                              | 选中字符串变为小写/大写                                      |

| 操作                                | 快捷键       | 说明                                                         |
| ----------------------------------- | ------------ | ------------------------------------------------------------ |
| Switch Header/Source                | F4           | 在同名的头文件和源程序文件之间切换                           |
| Follow Symbol Under Cursor          | F2           | 跟踪光标处的符号，若是变量，可跟踪到变量声明的地方；若是函数体或函数声明，可在这两者之间切换 |
| Refactor/Rename Symbol Under Cursor | Ctrl+Shift+R | 更改光标处的符号名称，这将在所有用到这个符号的地方进行替换   |
| Refactor/Add Definition in .cpp     | -            | 在源程序文件里为函数原型生成函数体（注意：此操作未提供默认快捷键） |
| Auto-indent Selection               | Ctrl+I       | 为选择的代码段自动进行缩进                                   |
| Toggle Comment Selection            | Ctrl+/       | 注释或取消注释所选代码段                                     |
| Context Help                        | F1           | 为光标处的符号显示帮助文档的内容                             |
| Save All                            | Ctrl+Shift+S | 保存所有文件                                                 |
| Find/Replace                        | Ctrl+F       | 调出查找/替换对话框                                          |
| Find Next                           | F3           | 查找下一个                                                   |
| Build                               | Ctrl+B       | 构建当前项目                                                 |
| Start Debugging                     | F5           | 开始调试                                                     |
| Step Over                           | F10          | 调试状态下单步略过，即运行当前行程序语句                     |
| Step Into                           | F11          | 调试状态下跟踪进入，即如果当前行里有函数，就跟踪进入函数体   |
| Toggle Breakpoint                   | F9           | 设置或取消当前行的断点设置                                   |

##### 1.1.1.5 创建项目

```
- 通过`New File or Project`对话框，选择创建一个新的GUI项目（如`samp2_2`）。
- 在向导中选择`qmake`作为构建系统。
- 选择`QDialog`作为窗口基类，这会自动设置窗口类名为`Dialog`。
- 勾选`Generate form`复选框，Qt Creator会自动创建UI文件（如`dialog.ui`）。
```

### 1.2 qmake工具

#### 1.2.1 qmake概念

```markdown
`qmake` 是 Qt 的一个工具，用于从项目文件（如 `.pro` 文件）生成 Makefile。项目文件包含项目的配置信息，如源文件列表、编译器选项和依赖项等。
```

#### 1.2.2 qmake项目

##### 1.2.2.1 文件组织

```
使用 qmake 构建系统的 Qt 项目:
1.项目配置文件

2.Qt C++编写的头文件
源程序文件

3.窗口 UI 文件
资源文件

在构建项目的过程中，这 3 类文件会被分别编译为标准 C++语言的程序文件，然后被标准 C++编译器（如 GNU C++编译器或 MSVC 编译器）编译成可执行文件或库。
```

##### 1.2.2.2 配置文件

```makefile
Qt Core 模块是 Qt 框架的核心，其他模块都依赖此模块。Qt GUI 模块提供用于开发 GUI 应用程序的必要的类。在创建 GUI 项目时，qmake 项目配置文件中会自动加入如下语句：QT += core gui 
```

#### 1.2.3 qmake变量

```
在 `.pro` 文件中，变量用于存储和引用项目设置和参数。例如，`QT += sql` 表示项目中使用了 Qt SQL 模块。
```

#### 1.2.4 qmake函数

##### 1.2.4.1 替换函数

``` makefile
`qmake` 提供了替换函数功能，允许在配置过程中动态地修改变量或内置函数的值。替换函数以 `$$` 开头，后面跟着变量名或内置函数名。
```

``` makefile
# 条件配置示例
qnx: target.path = /tmp/$${TARGET}/bin
#- `qnx:` 是一个条件语句，它指示只有当构建目标为 QNX 系统时，后面的设置才会生效。
#- `target.path` 是设置输出文件（如可执行文件）路径的变量。
#- `$${TARGET}` 是一个替换函数，它会被 `TARGET` 变量的值所替换。`TARGET` 变量通常存储项目的目标名称（即生成的可执行文件名）。
#- 因此，如果 `TARGET` 的值为 `myapp`，则上面的配置会设置输出路径为 `/tmp/myapp/bin`。
#在 `qmake` 中，虽然 `$${VARIABLE}` 是更明确的写法，但 `$$VARIABLE`（不带花括号）在大多数情况下也是有效的。然而，使用花括号 `{}` 可以避免与一些特定上下文中的其他文本混淆，因此推荐使用 `${}` 包围变量名。
```

### 1.3 cmake工具

#### 1.3.1 cmake概念

```
CMake 是一个功能强大的跨平台的构建工具，它通过与平台和编译器无关的配置文件控制软件的构建过程，生成本地化的 makefile 文件或 IDE 项目，例如生成 Visual Studio 的项目。

CMake 项目是用 CMake 语言写的一些文件，项目的主文件是CMakeLists.txt，它被放置在 Qt项目源程序文件的根目录下。
CMake 特别适用于开源软件项目，Qt 6 就是用 CMake 构建的。
Qt 公司推荐在新的项目中使用 CMake。
CMake 项目下面有 3 个节点：
CMakeLists.txt 是 CMake 项目的配置文件；
项目节点下面是项目中的 4 个源程序文件；
CMake Modules 是项目用到的其他一些CMake 模块，具体的模块就是一些后缀为“.cmake”的文件。

CMake 项目文件 CMakeLists.txt 的内容一般不需要我们手动修改，项目中新增文件时会自动更新源文件列表。
只有用到 Qt 的某个附加模块时，才需要编写 find_package()和 target_link_libraries()函数语句。
```

#### 1.3.2 cmake示例

``` cmake
cmake_minimum_required(VERSION 3.5) 
#需要的 CMake 最低版本
project(samp2_4 VERSION 0.1 LANGUAGES CXX) 
#项目版本 0.1，编程语言是 C++ 
set(CMAKE_INCLUDE_CURRENT_DIR ON) 
set(CMAKE_AUTOUIC ON) #UIC 能被自动执行
set(CMAKE_AUTOMOC ON) #MOC 能被自动执行
set(CMAKE_AUTORCC ON) #RCC 能被自动执行
#变量 CMAKE_AUTOUIC 设置为 ON，表示由 CMake 自动设置规则，UIC 能被自动调用。同样，也设置了 MOC 和 RCC 能被自动调用。
set(CMAKE_CXX_STANDARD 11) 
#设置编译器需要满足的 C++语言标准，设置为 C++11 
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
#要求编译器满足 C++标准
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED) 
#导入 Qt6::Widgets 模块
#函数 find_package()用于查找和导入 Qt 中的某个模块.
set(PROJECT_SOURCES 
#设置变量 PROJECT_SOURCES 等于下面的列表
 main.cpp #也就是项目的源文件列表
 dialog.cpp 
 dialog.h 
 dialog.ui 
) 
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6) 
#如果是 Qt 6 以上的版本
 qt_add_executable(samp2_4 
 #创建可执行文件 samp2_4 
 #函数 qt_add_executable()用于创建可执行文件，并且设置依赖的源文件。
 MANUAL_FINALIZATION 
 #可选参数，手动结束创建目标的过程
 ${PROJECT_SOURCES} 
 #文件列表来源于变量 PROJECT_SOURCES 
 ) 
endif() 
#在连接生成目标 samp2_4 时，需要利用前面用 find_package()导入的 Qt6::Widgets 模块
target_link_libraries(samp2_4 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets) 
#函数 target_link_libraries()用于设置连接时用到的 Qt 模块。
set_target_properties(samp2_4 PROPERTIES 
 MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com 
 MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION} 
 MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR} 
 MACOSX_BUNDLE TRUE 
 WIN32_EXECUTABLE TRUE 
 ) 
if(QT_VERSION_MAJOR EQUAL 6) 
 qt_finalize_executable(samp2_4) 
 #运行qt_finalize_executable(samp2_4)结束创建目标的过程。
 #最后生成可执行文件 samp2_4 
endif() 

#导入和连接 Qt6::Widgets 模块。
find_package(Qt6 COMPONENTS Widgets REQUIRED) 
target_link_libraries(samp2_4 PRIVATE Qt6::Widgets) 

建一个 Qt 资源文件 res.qrc，结束创建向导后，Qt Creator会提示文件不会被自动添加到CMakeLists.txt文件里。所以，打开文件CMakeLists.txt，修改设置变量 PROJECT_SOURCES 的语句，加入文件 res.qrc，即修改为如下的内容：
set(PROJECT_SOURCES 
 main.cpp 
 dialog.cpp 
 dialog.h 
 dialog.ui 
 res.qrc #手动添加资源文件名
) 
```

### 1.4 文件组织

#### 1.4.1 文件分类

| 分组/类型            | 描述                                                        | 文件名               |
| -------------------- | ----------------------------------------------------------- | -------------------- |
| 项目配置文件         | 使用 qmake 构建系统时的项目配置文件，包含项目的各种设置内容 | samp1_1.pro          |
| Headers (头文件)     | 项目内的 C++ 头文件（.h 文件）                              | widget.h             |
| Sources (源程序文件) | 项目内的 C++ 源程序文件（.cpp 文件）                        | widget.cpp, main.cpp |
| Forms (窗体文件)     | 项目内的窗体文件（.ui 文件），用于窗口界面可视化设计        | widget.ui            |

#### 1.4.2 头文件

##### 1.4.2.1 编译方式

```
在构建项目时，项目中的头文件会先被 MOC 预编译。

构建项目时，MOC 会读取 C++源文件，当它发现类的定义里有 Q_OBJECT 宏时，它就会为这个类生成另一个包含元对象支持代码的 C++源文件，这个生成的源文件连同类的实现文件一起被标准 C++编译器编译和连接。
```

#### 1.4.3 窗体文件

```
双击文件目录树中的 UI 文件 widget.ui，会切换到图 1-16 所示的 Qt Creator 中内置的 Qt Designer，用于对 UI 文件进行界面可视化设计。窗口左侧是组件面板，具有多个分组的用于设计界面的组件。窗口中间是待设计的窗体，也就是文件 widget.ui 的显示效果。窗口右侧上方是对象检查器（Object Inspector），显示了窗体上所有组件的层次结构。窗口右侧下方是属性编辑器（Property Editor），在设计窗体上点击一个组件后，在属性编辑器里就可以显示和修改其属性。
```

```
在构建项目时，可视化设计的窗口 UI 文件会被用户界面编译器（UIC）转换为一个 C++源程序文件。
UIC 编译生成的文件与 UI 文件在同一个文件夹里.
```

#### 1.4.4 资源文件

```
1. 准备图标和资源文件：
   - 在项目根目录下创建一个名为`images`的文件夹，并将需要的图标文件复制到此文件夹。
   - 通过`New File or Project`对话框，选择`Qt Resource File`（位于Qt分组内），并创建资源文件（如`res.qrc`）。
   - 将资源文件添加到当前项目中，项目管理目录树中将自动创建一个`Resources`文件组。
2. 编辑资源文件：
   - 使用资源文件编辑器，创建一个前缀（如`icons`）以组织资源。
   - 使用`Add Prefix`按钮添加前缀，使用`Add Files`按钮添加图标文件到资源中。
   - 注意：如果图标文件不在项目子目录下，编辑器会提示复制文件到项目子目录。
```

```
Qt 项目中的资源文件（.qrc 文件）会被资源编译器（RCC）转换为 C++程序文件。
```

### 1.5 发布安装

## 2. 基本语法

### 2.1 Qt常用类

#### 2.1.1 QtGlobal

```
头文件<QtGlobal>包含 Qt 框架中的一些全局定义，包括基本数据类型、函数和宏。一般的Qt 类的头文件都会包含这个头文件，所以用户程序中无须包含这个头文件就可以使用其中的定义。
```

##### 2.1.1.1 数据类型定义

| Qt 数据类型 | POSIX 标准等效定义     | 字节数 |
| ----------- | ---------------------- | ------ |
| qint8       | signed char            | 1      |
| qint16      | signed short           | 2      |
| qint32      | signed int             | 4      |
| qint64      | long long int          | 8      |
| qlonglong   | long long int          | 8      |
| quint8      | unsigned char          | 1      |
| quint16     | unsigned short         | 2      |
| quint32     | unsigned int           | 4      |
| quint64     | unsigned long long int | 8      |
| qulonglong  | unsigned long long int | 8      |
| uchar       | unsigned char          | 1      |
| ushort      | unsigned short         | 2      |
| uint        | unsigned int           | 4      |
| ulong       | unsigned long          | 8      |
| qreal       | double                 | 8      |
| qsizetype   | ssize_t                | 8      |
| qfloat16    | —                      | 2      |

```
qreal 默认表示 8 字节 double 类型的浮点数，如果 Qt 使用-qreal float 选项进行配置，就表示 4字节 float 类型的浮点数。
qfloat16 是 Qt 5.9 中增加的一种类型，用于表示 16 位的浮点数。qfloat16 不是在头文件<QtGlobal>中定义的，要使用 qfloat16，需要包含头文件<QFloat16>。
qsizetype 是在 Qt 5.10 中增加的一种类型，等效于 POSIX 标准中的ssize_t，表示有符号整数。
```

##### 2.1.1.2 常用函数定义

```
头文件<QtGlobal>中包含一些常用函数的定义，这些函数多以模板类型作为输入和输出参数类型，模板类型可以是表 3-3 中所示的各种整数类型。若以 double 或 float 类型作为参数类型，一般有两个 overload 型同名函数，例如 qFuzzyIsNull(double d)和 qFuzzyIsNull(float f)。
```

| 函数原型                                                     | 功能描述                                                     |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| `T qAbs(const T &value)`                                     | 返回变量 `value` 的绝对值                                    |
| `const T &qBound(const T &min, const T &value, const T &max)` | 返回 `value` 限定在 `min` 到 `max` 之间的值                  |
| `T qExchange(T &obj, U &&newValue)`                          | 将 `obj` 的值用 `newValue` 替换，并返回 `obj` 的旧值         |
| `int qFpClassify(double val)`                                | 返回 `val` 的分类，包括 `FP_NAN`（非数）、`FP_INFINITE`（正或负的无穷大）、`FP_ZERO`（零）等 |
| `bool qFuzzyCompare(double p1, double p2)`                   | 若 `p1` 和 `p2` 近似相等（在可接受的误差范围内），返回 `true` |
| `bool qFuzzyIsNull(double d)`                                | 若参数 `d` 约等于 0（在可接受的误差范围内），返回 `true`     |
| `double qInf()`                                              | 返回正无穷大的数                                             |
| `bool qIsFinite(double d)`                                   | 若 `d` 是一个有限的数（不是无穷大，也不是非数），返回 `true` |
| `bool qIsInf(double d)`                                      | 若 `d` 是一个无穷大的数（正无穷大或负无穷大），返回 `true`   |
| `bool qIsNaN(double d)`                                      | 若 `d` 为非数（Not a Number），返回 `true`                   |
| `const T &qMax(const T &value1, const T &value2)`            | 返回 `value1` 和 `value2` 中的较大值                         |
| `const T &qMin(const T &value1, const T &value2)`            | 返回 `value1` 和 `value2` 中的较小值                         |
| `qint64 qRound64(double value)`                              | 将 `value` 近似为最接近的 `qint64` 类型整数                  |
| `int qRound(double value)`                                   | 将 `value` 近似为最接近的 `int` 类型整数                     |

```markdown
请注意，`qInf()` 函数通常返回正无穷大，因为C++标准库中的`std::numeric_limits<double>::infinity()`也是返回正无穷大。如果您需要负无穷大，您可能需要显式地指定或使用其他方法。

此外，`qExchange` 函数的第二个参数使用了右值引用（`U &&newValue`），这意味着它可以接受临时对象或右值作为新值，从而允许更高效的赋值操作。然而，请注意，`T` 和 `U` 应该是兼容的类型，或者至少 `newValue` 可以被隐式转换为 `T` 类型。
```

```
一些基础的数学运算函数在<QtMath>头文件中定义，这些函数，如三角运算函数、弧度与角度的转换函数等，需要用到时可查看 Qt 帮助文档。
```

##### 2.1.1.3 常用宏定义

| 宏/特性                            | 描述                                                         |
| ---------------------------------- | ------------------------------------------------------------ |
| `QT_VERSION`                       | 表示Qt的版本，以数值形式`0xMMNNPP`展开，其中`MM`是主版本号，`NN`是次版本号，`PP`是修订号。例如，Qt 6.2.3的版本号表示为`0x060203`。 |
| `Q_BYTE_ORDER`                     | 表示系统内存中数据的字节序。它可能等于`Q_BIG_ENDIAN`（大端字节序）或`Q_LITTLE_ENDIAN`（小端字节序）。在需要判断系统字节序时非常有用。 |
| `Q_DECL_IMPORT`                    | 在使用共享库时，此宏用于导入库的内容。它告诉编译器，指定的符号（如函数或变量）是从另一个共享库导入的，而不是在当前编译单元中定义的。 |
| `Q_DECL_EXPORT`                    | 在设计共享库时，此宏用于导出库的内容。它告诉编译器，指定的符号（如函数或变量）应该被导出，以便其他模块（如其他共享库或可执行文件）可以链接到并使用它们。 |
| `Q_UNUSED(name)`                   | 用于在函数声明中标记一个未被使用的参数。这可以避免编译器发出关于未使用参数的警告。使用此宏可以保持代码的整洁，同时不影响编译器的警告功能。 |
| `foreach(variable, container)`     | 一个方便的宏，用于遍历容器（如列表、集合等）的内容。它在Qt 5及更早版本中广泛使用，但在Qt 6中已被基于范围的for循环（C++11及更高版本）所取代。尽管如此，了解它的用法仍然很有用，尤其是在处理旧代码时。 |
| `qDebug(const char *message, ...)` | 用于在调试期间在Qt Creator的Application Output窗口中输出信息。它的用法类似于C语言的`printf()`函数，支持格式化输出。`qDebug()`是调试Qt应用程序时显示中间信息的有用工具。 |

#### 2.1.2 QObject

##### 2.1.2.1 基本定义

```
QObject是Qt框架中的核心类，是所有Qt对象的基类。它提供了对象间无缝通信的机制——信号与槽，以及对象生命周期管理、事件处理、属性系统和线程迁移等关键功能。

QObject是所有Qt对象的基类，为Qt模块的核心。
它提供了对象间通信的机制，即信号与槽。
QObject以对象树的形式组织起来，支持父子对象关系的管理。
```

##### 2.1.2.2 构造函数

```cpp
QObject(QObject *parent = nullptr)
//其中，参数parent指向父对象。在Qt中，父对象拥有子对象的所有权，即当父对象被销毁时，它会负责销毁其所有的子对象。如果parent为nullptr，则构造的对象将没有父对象。
```

##### 2.1.2.3 成员函数

###### 2.1.2.3.1 对象树和父子关系

``` cpp
setParent(QObject *parent): 设置父对象。
parent() const: 返回父对象。
children() const: 返回子对象列表。
findChild<T>(const QString &name = QString(), Qt::FindChildOptions options = Qt::FindChildrenRecursively) const: 通过名称和类型查找子对象。
findChildren<T>(const QString &name = QString(), Qt::FindChildOptions options = Qt::FindChildrenRecursively) const: 通过名称和类型查找多个子对象。
```

###### 2.1.2.3.2 对象名称和属性

``` cpp
setObjectName(const QString &name): 设置对象名称。
objectName() const: 返回对象名称。
setProperty(const char *name, const QVariant &value): 设置对象属性。
property(const char *name) const: 获取对象属性。
```

###### 2.1.2.3.3 信号与槽

``` cpp
connect(const QObject *sender, const char *signal, const QObject *receiver, const char *method, Qt::ConnectionType type = Qt::AutoConnection) const: 连接信号与槽。
disconnect(const QObject *sender, const char *signal, const QObject *receiver, const char *method) const: 断开信号与槽的连接。
blockSignals(bool block): 阻塞或解除阻塞对象的信号。
```

###### 2.1.2.3.4 事件处理

``` cpp
event(QEvent *e): 接收和处理事件。
installEventFilter(QObject *filterObj): 安装事件过滤器，以拦截和过滤其他对象的事件。
removeEventFilter(QObject *obj): 移除事件过滤器。
```

###### 2.1.2.3.5 定时器

``` cpp
startTimer(int interval, Qt::TimerType timerType = Qt::CoarseTimer): 启动定时器。
killTimer(int id): 停止定时器。
```

###### 2.1.2.3.6 线程迁移

``` cpp
moveToThread(QThread *targetThread): 将对象移动到另一个线程。
thread() const: 返回对象所在的线程。
```

###### 2.1.2.3.7 其他

``` cpp
deleteLater(): 计划在事件循环的适当时候删除对象。
tr(const char *sourceText, const char *disambiguation = nullptr, int n = -1): 用于获取翻译后的文本，支持Qt的翻译特性。
```

##### 2.1.2.4 元对象系统

```
QObject的元对象系统是Qt框架的核心特性之一，它提供了以下功能：

自动连接QObject子类的信号和槽。
支持Qt的翻译特性，使得应用程序的用户界面可以翻译成不同的语言。
提供了对象反射机制，允许在运行时查询对象的属性和方法。
```

##### 2.1.2.5 注意事项

```
对于所有实现信号、槽或属性的QObject对象来说，Q_OBJECT宏是必须的。这个宏在QObject类的私有部分声明了一些必要的元对象系统的函数和数据成员。

QObject既没有复制构造函数也没有赋值操作符。实际上，它们使用宏Q_DISABLE_COPY()声明在私有部分，以防止对象被复制。
在使用QObject子对象作为值的地方要使用QObject类型的指针，因为QObject的子对象没有构造函数，不能作为值存储在容器类中。
```

2.1.3 QString

#### 2.1.4 QWidget

##### 2.1.4.1 基本定义

```
QWidget 是 Qt 框架中所有用户界面对象的基类。Qt中众多窗口部件类，如QFrame、QDialog、QMainWindow等，都是从QWidget类继承而来的。
它提供了窗口部件的基本功能，如事件处理、几何形状、字体和样式等。QWidget 具有以下关键特性：

QWidget是一个可视化部件，可以在应用程序的用户界面中显示出来，并可以包含众多子部件，形成复杂的界面布局。
```

| 特性类别     | 描述                                                         |
| ------------ | ------------------------------------------------------------ |
| **事件处理** | QWidget 可以接收和处理各种事件                               |
|              | - 鼠标事件：如点击、双击、移动等                             |
|              | - 键盘事件：如按键按下、释放等                               |
|              | - 其他事件：如窗口大小改变、关闭等                           |
| **几何管理** | QWidget 提供了一套完整的几何管理机制                         |
|              | - 允许开发者设置和获取窗口部件的位置和大小                   |
| **绘图功能** | QWidget 继承自 QPaintDevice，具有绘图功能                    |
|              | - 通过重写 paintEvent 方法，开发者可以在窗口部件上进行自定义绘图 |
| **父子关系** | QWidget 支持父子关系                                         |
|              | - 一个窗口部件可以作为另一个窗口部件的子部件                 |
|              | - 子部件默认会在父部件的坐标系中进行布局和显示               |

##### 2.1.4.2 常用操作

###### 2.1.4.2.1 构造函数

``` cpp
explicit QWidget(QWidget* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
//其中，参数parent指向父窗口，如果这个参数为nullptr，则窗口成为一个顶级窗口。
//参数f是构造窗口的标志，主要用于控制窗口的类型和外观等。
```

###### 2.1.4.2.2 成员函数

```  cpp
窗口位置和大小相关函数
setGeometry(int x, int y, int w, int h): 设置窗口的位置和大小。
setGeometry(const QRect &rect): 通过QRect对象设置窗口的位置和大小。
move(int x, int y): 将窗口移动到指定位置。
resize(int w, int h): 设置窗口的大小。
pos(): 获取窗口的位置。
size(): 获取窗口的大小。
frameGeometry(): 获取窗口外边框的几何参数。
geometry(): 获取窗口客户区的几何参数。
```

``` cpp
窗口标题和图标相关函数
setWindowTitle(const QString &text): 设置窗口的标题。
windowTitle(): 获取窗口的标题。
setWindowIcon(const QIcon &icon): 设置窗口的图标。
```

``` cpp
窗口可见性和状态相关函数
show(): 显示窗口。
hide(): 隐藏窗口。
setVisible(bool visible): 设置窗口是否可见。
isVisible(): 判断窗口是否可见。
isMinimized(): 判断窗口是否为最小化状态。
isMaximized(): 判断窗口是否为最大化状态。
```

``` cpp
窗口大小和固定大小相关函数
setFixedSize(int w, int h): 设置窗口的固定大小。
setMinimumSize(int minw, int minh): 设置窗口的最小大小。
setMaximumSize(int maxw, int maxh): 设置窗口的最大大小。
```

``` cpp
窗口布局和子部件管理
setLayout(QLayout *layout): 设置窗口的布局管理器。
layout(): 获取窗口的当前布局管理器。
```

``` cpp
窗口样式和外观相关函数
setStyleSheet(const QString &styleSheet): 设置窗口的样式表。
setCursor(const QCursor &cursor): 设置窗口的鼠标指针形状。
```

``` cpp
窗口焦点和启用状态
setFocusPolicy(Qt::FocusPolicy policy): 设置窗口的焦点策略。
focusPolicy(): 获取窗口的焦点策略。
setEnabled(bool enabled): 启用或禁用窗口。
isEnabled(): 判断窗口是否启用。
setDisabled(bool disabled): 禁用窗口。
```

###### 2.1.4.2.3 接口函数

``` cpp
bool close()
功能：关闭窗口。
返回值：如果窗口成功关闭，则返回 true；否则返回 false。
注意：关闭窗口可能会触发一系列事件，如 closeEvent，并且可以通过重写这些事件处理函数来自定义关闭行为。
```

``` cpp
void hide()
功能：隐藏窗口，但不销毁窗口对象。
调用此函数后，窗口将不再可见，但可以通过调用 show()、showMaximized()、showMinimized() 或 showFullScreen() 来重新显示。
```

``` cpp
void show()
功能：以正常大小显示窗口（如果之前被隐藏或最小化）。
如果窗口已经被最大化或全屏显示，调用此函数不会改变其显示状态。
```

``` cpp
void showFullScreen()
功能：以全屏模式显示窗口。
在全屏模式下，窗口将占据整个屏幕，并且通常会隐藏任务栏和其他系统元素。
```

``` cpp
void showMaximized()
功能：最大化窗口。
窗口将扩展到屏幕允许的最大尺寸。
```

``` cpp
void showMinimized()
功能：最小化窗口。
窗口将缩小到任务栏或系统托盘中的一个图标。
```

``` cpp
void showNormal()
功能：恢复窗口到正常大小。
如果窗口之前是全屏、最大化或最小化状态，调用此函数将使其恢复到原始大小（即非全屏、非最大化、非最小化状态）。
```

``` cpp
void customContextMenuRequested(const QPoint &pos)
功能：当在组件上点击鼠标右键时发射此信号。
参数：pos 是点击位置相对于组件左上角的坐标。
用途：通常用于创建和显示快捷菜单（上下文菜单）。
```

``` cpp
void windowIconChanged(const QIcon &icon)
功能：当窗口图标发生变化时发射此信号。
参数：icon 是新的窗口图标。
用途：可以用于更新界面中的图标显示或进行其他与图标变化相关的处理。
```

``` cpp
void windowTitleChanged(const QString &title)
功能：当窗口标题发生变化时发射此信号。
参数：title 是新的窗口标题。
用途：可以用于更新界面中的标题显示或进行其他与标题变化相关的处理。
```

###### 2.1.4.2.4 事件处理

```
QWidget类可以响应用户输入事件，如鼠标点击、键盘输入等。通过重写事件处理函数，可以实现自定义的交互逻辑。例如，可以重写paintEvent函数来进行绘图操作，实现自定义的绘图效果。
```

##### 2.1.4.3 组件属性

###### 2.1.4.3.1 界面组件

|      属性名称      |      属性值类型       |                             功能                             |
| :----------------: | :-------------------: | :----------------------------------------------------------: |
|      enabled       |         bool          |       组件的使能状态，enabled 为 true 时才可以操作组件       |
|      geometry      |         QRect         | 组件的几何形状，表示组件在界面上所占的矩形区域（位置和大小） |
|     sizePolicy     |      QSizePolicy      | 组件默认的布局特性，这个特性与组件的水平、垂直方向尺寸变化有关 |
|    minimumSize     |         QSize         |     组件的最小尺寸，QSize 包含 width 和 height 两个属性      |
|    maximumSize     |         QSize         |                        组件的最大尺寸                        |
|      palette       |       QPalette        | 组件的调色板，调色板定义了组件一些特定部分的颜色，如背景色、文字颜色等 |
|        font        |         QFont         | 组件使用的字体。QFont 定义了字体名称、大小、粗体、斜体等特性 |
|       cursor       |        QCursor        |                 鼠标光标移动到组件上时的形状                 |
|   mouseTracking    |         bool          | 若设置为 true，只要鼠标在组件上移动，组件就接收鼠标移动事件；否则，只有在某个鼠标键被按下时，组件才接收鼠标移动事件 |
|   tabletTracking   |         bool          | 是否开启平板跟踪，默认值是 false，表示只有当触笔与平板计算机接触时，组件才接收平板事件 |
|    focusPolicy     |    Qt::FocusPolicy    |            组件的焦点策略，表示组件获取焦点的方式            |
| contextMenuPolicy  | Qt::ContextMenuPolicy | 组件的上下文菜单策略，上下文菜单是指在组件上点击鼠标右键时弹出的快捷菜单 |
|    acceptDrops     |         bool          |                 组件是否接收拖动来的其他对象                 |
|      toolTip       |        QString        |        鼠标移动到组件上时，在光标处显示的简短提示文字        |
|     statusTip      |        QString        | 鼠标移动到组件上时，在主窗口状态栏上临时显示的提示文字，显示 2 秒后自动消失 |
| autoFillBackground |         bool          | 组件的背景是否自动填充，如果组件使用样式表设定了背景色，这个属性会被自动设置为 false |
|     styleSheet     |        QString        | 组件的样式表。样式表用于定义界面显示效果，用于控制组件的外观和布局 |

###### 2.1.4.3.2 窗口组件

|      属性      |     属性值类型     |                             功能                             |
| :------------: | :----------------: | :----------------------------------------------------------: |
|  windowTitle   |      QString       | 窗口标题栏上的文字，若要利用`windowModified`属性，需要在标题文字中设置占位符“[*]” |
|   windowIcon   |       QIcon        |                      窗口标题栏上的图标                      |
| windowOpacity  |       qreal        | 窗口的不透明度，取值范围是0.0（完全透明）～1.0（完全不透明）。默认值是1.0 |
| windowFilePath |      QString       | 窗口相关的含路径的文件名，这个属性主要在Windows平台上有意义。如果没有设置`windowTitle`属性，程序可能会自动获取不含路径的文件名作为窗口标题 |
| windowModified |        bool        | 表示窗口里的文档是否被修改。若该属性值为true，且`windowTitle`中包含了占位符“[*]”，则占位符会显示为“*” |
| windowModality | Qt::WindowModality | 窗口的模态性，表示窗口是否处于上层并阻止其他窗口的用户输入。这个属性在多个平台上都有意义，但具体行为可能因平台而异 |
|  windowFlags   |  Qt::WindowFlags   | 窗口的标志，是枚举类型`Qt::WindowFlag`的一些值的组合，用于控制窗口的显示方式、行为等 |

##### 2.1.4.4 尺寸策略

|       QSizePolicy 枚举值        |      描述      |                           尺寸行为                           |     关联属性或函数      |
| :-----------------------------: | :------------: | :----------------------------------------------------------: | :---------------------: |
|      `QSizePolicy::Fixed`       |    固定尺寸    | QWidget的sizeHint()函数返回组件的建议尺寸作为固定尺寸，即便使用了布局管理，组件也不会放大或缩小。 |       sizeHint()        |
|     `QSizePolicy::Minimum`      |    最小尺寸    | 组件缩小到最小尺寸之后就不再缩小。使用sizeHint()函数的返回值作为最小尺寸，或使用minimumSize属性设置的值作为最小尺寸。 | sizeHint(), minimumSize |
|     `QSizePolicy::Maximum`      |    最大尺寸    | 组件放大到最大尺寸之后就不再放大。使用sizeHint()函数的返回值作为最大尺寸，或使用maximumSize属性设置的值作为最大尺寸。 | sizeHint(), maximumSize |
|    `QSizePolicy::Preferred`     |    首选尺寸    | 使用sizeHint()函数的返回值作为最优尺寸，组件仍然可以缩放，但是放大时不会超过sizeHint()函数返回的尺寸。 |       sizeHint()        |
|    `QSizePolicy::Expanding`     |   可扩展尺寸   | sizeHint()函数的返回值是可变大小的尺寸，组件可扩展以填充额外空间。 |       sizeHint()        |
| `QSizePolicy::MinimumExpanding` | 最小可扩展尺寸 | sizeHint()函数的返回值是最小尺寸，组件可扩展以填充额外空间，但不会缩小到小于此尺寸。 | sizeHint(), minimumSize |
|     `QSizePolicy::Ignored`      |    忽略尺寸    | sizeHint()函数的返回值被忽略，组件占据布局中尽可能大的空间。 |       sizeHint()        |

#### 2.1.5 容器类

##### 2.1.5.1 基本概念

###### 2.1.5.1.1 容器特点

``` markdown
轻巧且安全：Qt 的容器类比标准模板库（STL）中的容器类更轻巧、使用更安全且更易于使用。

隐式共享和可重入：这些容器类是隐式共享和可重入的，优化了速度和存储，有助于减小可执行文件大小。

线程安全：作为只读容器时，Qt 容器类是线程安全的，可以被多个线程访问。
```

###### 2.1.5.1.2 容器类型

``` markdown
顺序容器类：
QList<T>：一个基于数组的列表，提供快速的随机访问。
QLinkedList<T>：一个双向链表，提供快速的插入和删除操作。
QVector<T>：一个基于数组的向量，可以动态增长，并提供随机访问。
QStack<T>：一个后进先出（LIFO）栈，基于 QVector<T> 实现。
QQueue<T>：一个先进先出（FIFO）队列，基于 QList<T> 实现。
QDeque<T>：一个双端队列，允许在两端进行快速的插入和删除操作。
```

``` markdown
关联容器类：
QMap<Key, T>：一个基于红黑树的映射，提供键的排序和快速查找。
QHash<Key, T>：一个基于哈希表的映射，提供快速的查找操作。
QMultiMap<Key, T>：多值映射，允许一个键对应多个值，基于 QMap<Key, QList<T>> 实现。
QMultiHash<Key, T>：多值哈希映射，允许一个键对应多个值，基于 QHash<Key, QList<T>> 实现。
QSet<T>：一个集合，提供快速的查找和插入操作，基于 QHash<T, QHashDummyValue> 实现。
QMultiSet<T>：多重集合，允许存储重复的元素，通常通过 QSet<QList<T>> 或其他方式实现（Qt 本身未直接提供）。
```

##### 2.1.5.2 QList类

###### 2.1.5.2.1 基本概述

```
QList是Qt中常用的容器类，用于存储同一类型的数据项。它使用连续的存储空间来存储列表数据，因此可以通过序号快速访问列表中的元素。在列表的末端添加数据通常很快，但在列表的始端或中间插入数据可能会比较慢，因为需要移动其他数据以腾出空间。
```

###### 2.1.5.2.2 定义与初始化

``` cpp
//定义一个QList对象时，需要指定存储的元素类型T。
QList<float> list; 
// 定义一个float类型的QList对象
```

```cpp
//定义一个QList对象时，需要指定存储的元素类型T。
QList<int> list = {1, 2, 3, 4, 5}; 
// 使用初始化列表初始化数据  
QList<int> list(100); 
// 创建一个包含100个元素的QList，所有元素的默认值为0  
QList<QString> strList(10, "pass"); 
// 创建一个包含10个元素的QString列表，每个元素初始化为"pass"
```

###### 2.1.5.2.3 数据操作

``` cpp
//向QList末端添加数据可以使用流操作符“<<”或append()函数。
list << "Monday" << "Tuesday" << "Wednesday" << "Thursday";  
list.append("Friday");
```

``` cpp
//QList提供索引方式访问列表数据，如同访问数组一样，也可以使用at()函数来访问。
QString str1 = list[0]; 
// str1 = "Monday"  
QString str2 = list.at(1); 
// str2 = "Tuesday"
```

###### 2.1.5.2.4 常用函数

``` cpp
ppend(const T &value);
//参数: value（要添加到列表末端的元素）
//描述: 在QList的末端添加一个元素。
prepend(const T &value);
//参数: value（要添加到列表始端的元素）
//描述: 在QList的始端添加一个元素。
insert(int i, const T &value);
//参数: i（要插入元素的位置索引），value（要插入的元素）
//描述: 在QList的指定位置插入一个元素，其他元素会相应地向后移动。
replace(int i, const T &value);
//参数: i（要替换元素的位置索引），value（新的元素值）
//描述: 替换QList中指定位置的元素。
at(int i) const;
//参数: i（要访问的元素的索引）
//返回: 索引为i的元素（类型为T）
//描述: 返回QList中指定索引的元素，如果索引无效，则返回未定义的值（通常会导致程序崩溃，因此使用前需要确保索引有效）。
clear();
//描述: 移除QList中的所有元素，使列表变为空。
size() const;
//返回: 列表中的元素个数（类型为int）
//描述: 返回QList的元素个数，即列表的长度。
count() const;
//返回: 列表中的元素个数（类型为int），与size()等效
//描述: 返回QList的元素个数，不带参数的count()与size()功能相同。
resize(int n);
//参数: n（新列表的大小）
//描述: 重新设置QList的元素个数。如果n大于当前大小，则新元素会被添加并初始化为默认值；如果n小于当前大小，则多余元素会被移除。
reserve(int size);
//参数: size（要预留的内存大小）
//描述: 为QList预留足够的内存空间以存储至少size个元素。这可以提高后续添加数据的效率，但不会改变列表的实际长度。
isEmpty() const;
//返回: 如果QList为空，则返回true；否则返回false。
//描述: 检查QList是否为空。
remove(const T &value);
//参数: value（要从列表中移除的元素值）
//描述: 移除QList中所有与value相等的元素。
removeAt(int i);
//参数: i（要移除元素的索引）
//描述: 移除QList中指定索引的元素。
removeAll(const T &value);
//参数: value（要从列表中移除的元素值，与remove()类似，但通常用于强调移除所有匹配项）
//描述: 移除QList中所有与value相等的元素（与remove()功能相同，但名称更明确）。
removeFirst();
//描述: 移除QList中的第一个元素。
removeLast();
//描述: 移除QList中的最后一个元素。
takeAt(int i);
//参数: i（要移除元素的索引）
//返回: 被移除的元素（类型为T）
//描述: 移除QList中指定索引的元素，并返回该元素的值。
takeFirst();
//返回: 被移除的第一个元素（类型为T）
//描述: 移除QList中的第一个元素，并返回该元素的值。
takeLast();
//返回: 被移除的最后一个元素（类型为T）
//描述: 移除QList中的最后一个元素，并返回该元素的值。
```

##### 2.1.5.3 QStack类

###### 2.1.5.3.1 常用函数

```cpp
push(const T &value)
//参数: value（要压入栈顶的元素）
//描述: 将一个元素压入栈顶。
pop()
//返回: 被弹出的元素（类型为 T）
//描述: 弹出栈顶元素，并返回该元素的值。如果栈为空，则行为是未定义的（通常会导致程序崩溃）。
top() const
//返回: 栈顶元素（类型为 T）
//描述: 返回栈顶元素的值，但不弹出该元素。如果栈为空，则行为是未定义的。
bottom() const
//返回: 栈底元素（类型为 T）
//描述: 返回栈底元素的值，即最早被压入栈的元素。如果栈为空，则行为是未定义的。
isEmpty() const
//返回: 如果栈为空，则返回 true；否则返回 false。
//描述: 检查栈是否为空。
size() const
//返回: 栈中的元素个数（类型为 int）
//描述: 返回栈中的元素个数，即栈的长度。
count() const
//返回: 栈中的元素个数（类型为 int），与 size() 等效。
//描述: 返回栈中的元素个数，不带参数的 count() 与 size() 功能相同。
clear()
//描述: 移除栈中的所有元素，使栈变为空。
contains(const T &value) const
//参数: value（要查找的元素值）
//返回: 如果栈中包含该元素，则返回 true；否则返回 false。
//描述: 检查栈中是否包含指定的元素。
```

##### 2.1.5.4 QQueue类

###### 2.1.5.4.1 常用函数

``` cpp
enqueue(const T &value)
//功能：在队列尾部添加一个元素。
//参数：value（要添加到队列尾部的元素）。
dequeue()
//功能：移除队列头部的元素。
//返回值：被移除的元素。如果队列为空，则行为未定义（通常会导致程序崩溃）。
//注意：在使用此函数前，应确保队列不为空，可以使用 isEmpty() 函数进行检查。
head() const
//功能：返回队列头部的元素，但不移除它。
//返回值：队列头部的元素。如果队列为空，则返回值未定义。
//注意：在使用此函数前，应确保队列不为空。
isEmpty() const
//功能：检查队列是否为空。
//返回值：如果队列为空，则返回 true；否则返回 false。
size() const
//功能：返回队列中元素的个数。
//返回值：队列中元素的数量。
count() const
//功能：与 size() 函数功能相同，返回队列中元素的个数。
//返回值：队列中元素的数量。
at(int i) const
//功能：返回队列中指定位置的元素。
//参数：i（要访问的元素的索引位置，从 0 开始）。
//返回值：指定位置的元素。如果索引 i 超出了队列的范围，则行为未定义。
//注意：在使用此函数时，应确保索引 i 在有效范围内。
front() const
//功能：返回队列的第一个元素（与 head() 类似，但名称更符合 STL 风格）。
//返回值：队列的第一个元素。如果队列为空，则返回值未定义。
//注意：在使用此函数前，应确保队列不为空。
back() const
//功能：返回队列的最后一个元素。
//返回值：队列的最后一个元素。如果队列为空，则返回值未定义。
//注意：在使用此函数前，应确保队列不为空。
clear()
//功能：移除队列中的所有元素，使队列变为空。
```

##### 2.1.5.5 QSet类

###### 2.1.5.5.1 基本概念

```
QSet是一个模板类，它基于红黑树实现，用于存储唯一值的集合。QSet提供了快速的查找和插入操作，时间复杂度通常为O(log n)。
```

###### 2.1.5.5.2 常用函数

```cpp
insert(const T &value)
    //插入一个元素。如果元素已存在，则不会插入。
remove(const T &value)
    //移除一个元素。
contains(const T &value) const
    //检查集合中是否包含某个元素。
size() const
    //返回集合中元素的数量。
isEmpty() const
    //检查集合是否为空。
```

##### 2.1.5.6 QMap类

###### 2.1.5.6.1 基本概念

```
QMap和QMultiMap都是基于红黑树实现的关联容器，用于存储键值对。QMap中每个键都是唯一的，而QMultiMap允许一个键关联多个值。
```

###### 2.1.5.6.2 常用函数

```cpp
//QMap常用函数：
insert(const Key &key, const T &value)
    //插入一个键值对。如果键已存在，则替换其值。
remove(const Key &key)
    //移除与指定键关联的值。
value(const Key &key) const
    //返回与指定键关联的值。如果键不存在，则返回默认值。
contains(const Key &key) const
    //检查映射中是否包含某个键。
key(int i) const
    //返回索引为i的键。索引从0开始。
value(int i) const
    //返回索引为i的值。索引从0开始。
size() const
    //返回映射中键值对的数量。
```

``` cpp
//QMultiMap常用函数（与QMap类似，但允许重复键）：
values(const Key &key) const
    //返回与指定键关联的所有值。
```

##### 2.1.5.7 QHash类

###### 2.1.5.7.1 基本概念

```
QHash和QMultiHash都是基于哈希表实现的关联容器，用于存储键值对。QHash中每个键都是唯一的，而QMultiHash允许一个键关联多个值。哈希表通常提供比红黑树更快的查找和插入操作，但元素的顺序是未定义的。
```

###### 2.1.5.7.2 常用函数

```cpp
//QHash常用函数：
insert(const Key &key, const T &value)
    //插入一个键值对。如果键已存在，则替换其值。
remove(const Key &key)
    //移除与指定键关联的值。
value(const Key &key) const
    //返回与指定键关联的值。如果键不存在，则返回默认值。
contains(const Key &key) const
    //检查哈希中是否包含某个键。
keys() const
    //返回所有键的列表。
size() const
    //返回哈希中键值对的数量。
```

``` cpp
//QMultiHash常用函数（与QHash类似，但允许重复键）
values(const Key &key) const
    //返回与指定键关联的所有值。
```

##### 2.1.5.8 遍历容器

###### 2.1.5.8.1 迭代器概要

```
Qt框架提供了两类迭代器：STL类型的迭代器和Java类型的迭代器。其中，STL类型的迭代器效率更高，因此Qt 6推荐使用STL类型的迭代器。

Qt的每个容器类都提供了两个STL类型的迭代器：只读迭代器和读写迭代器。只读迭代器用于不需要修改数据的场景，其速度通常更快。注意，虽然Qt容器的迭代器接口与STL相似，但它们并不是STL的一部分，而是Qt框架中独立的一部分。
```

###### 2.1.5.8.2 STL类型迭代器

| 容器类             | 只读迭代器                    | 读写迭代器              |
| ------------------ | ----------------------------- | ----------------------- |
| QList<T>           | QList<T>::const_iterator      | QList<T>::iterator      |
| QStack<T>          | QList<T>::const_iterator      | QList<T>::iterator      |
| QQueue<T>          | QList<T>::const_iterator      | QList<T>::iterator      |
| QSet<T>            | QSet<T>::const_iterator       | QSet<T>::iterator       |
| QMap<Key, T>       | QMap<Key, T>::const_iterator  | QMap<Key, T>::iterator  |
| QMultiMap<Key, T>  | QMap<Key, T>::const_iterator  | QMap<Key, T>::iterator  |
| QHash<Key, T>      | QHash<Key, T>::const_iterator | QHash<Key, T>::iterator |
| QMultiHash<Key, T> | QHash<Key, T>::const_iterator | QHash<Key, T>::iterator |

###### 2.1.5.8.3 使用迭代器

``` cpp
//顺序容器类的迭代器用法
//对于QList等顺序容器，可以使用只读迭代器和读写迭代器来遍历容器中的元素。例如，下面的代码会将QList<QString>中的元素逐项输出：
QList<QString> list;
list << "A" << "B" << "C" << "D";
QList<QString>::const_iterator i;
for (i = list.constBegin(); i != list.constEnd(); ++i)
    qDebug() << *i;
```

``` cpp
//若要使用反向迭代器，并将上面的示例代码中的元素都改为小写，可以这样做：
QList<QString>::reverse_iterator i;
for (i = list.rbegin(); i != list.rend(); ++i)
    *i = i->toLower();
```

``` cpp
//关联容器类的迭代器用法
//对于QMap和QHash等关联容器，迭代器的“*”操作符返回的是数据项的值。如果需要获取键，可以使用key()函数；如果需要获取值，可以使用value()函数。例如，下面的代码会将QMap<int, int>中的所有键和值输出：
QMap<int, int> map;
// ... 填充map
QMap<int, int>::const_iterator i;
for (i = map.constBegin(); i != map.constEnd(); ++i)
    qDebug() << i.key() << ':' << i.value();
```

###### 2.1.5.8.4 foreach遍历

``` cpp
//Qt还提供了foreach宏来简化遍历容器的操作。foreach的用法如下
foreach (variable, container)
// 操作variable
//其中，variable的类型必须是container的元素类型。使用foreach的代码比使用迭代器更简洁。例如，下面的代码使用foreach遍历
    QList<QString> list;
	// ... 填充list
	QString str;
	foreach (str, list)
    qDebug() << str;
//注意，foreach遍历容器时会创建容器的副本，因此不能修改原始容器中的数据项。此外，从Qt 5.7开始，Qt建议不要使用foreach，而是使用C++11引入的基于范围的循环。
```

#### 2.1.6 QVariant

##### 2.1.6.1 基本定义

```
QVariant 是 Qt 框架中的一个非常强大的类，它提供了一种能够存储任何类型数据的机制。这种灵活性在 Qt 的许多地方都非常有用，特别是当处理不同类型的数据或当函数需要返回一个可能具有多种类型的结果时。
```

##### 2.1.6.2 主要特点

###### 2.1.6.2.1 万能数据类型

```
QVariant 可以存储整数、浮点数、字符串、列表、颜色、字体等多种类型的数据。
```

###### 2.1.6.2.2 类型转换

```
通过 toT() 函数（如 toBool(), toDouble(), toString() 等），可以将 QVariant 存储的数据转换为具体的类型。

在使用 toT() 函数进行类型转换时，如果存储的数据类型与请求的类型不匹配，这些函数通常会返回一个默认值（例如，toBool() 在数据不是布尔类型时会返回 false）。
```

###### 2.1.6.2.3 值获取

```
除了 toT() 函数，还可以使用 value<T>() 模板函数来获取存储的数据，这种方式在类型安全方面更为推荐。

使用 value<T>() 时，如果存储的数据类型与请求的类型不匹配，会抛出一个运行时错误。因此，在使用之前最好使用 canConvert<T>() 方法检查是否可以转换为请求的类型。

使用 value<T>() 时，如果存储的数据类型与请求的类型不匹配，会抛出一个运行时错误。因此，在使用之前最好使用 canConvert<T>() 方法检查是否可以转换为请求的类型。
```

###### 2.1.6.2.4 构造函数

``` markdown
QVariant 提供了多种构造函数，允许在创建时直接初始化为其能存储的任何类型。
```

###### 2.1.6.2.5 赋值

```
使用 setValue() 方法可以给 QVariant 变量重新赋值。
```

#### 2.1.7 QFlags

##### 2.1.7.1 基本定义

```markdown
QFlags 是一个模板类，它接受一个枚举类型作为模板参数。例如，如果你有一个名为 MyEnum 的枚举类型，你可以创建一个 QFlags<MyEnum> 类型的变量来存储和操作这个枚举类型的标志组合。

它提供了一种方便的方式来处理一组标志（flags）。这些标志通常是从枚举类型（enum）中定义的，而 QFlags 则允许你将多个这样的枚举值组合在一起，形成一个标志集。这种组合通常是通过位运算（如位或运算 |）来实现的。
```

##### 2.1.7.2 相关操作

###### 2.1.7.2.1 位运算支持

```
QFlags 类支持所有的位运算，包括位与（&）、位或（|）、位异或（^）、位非（~）、左移（<<）和右移（>>）。这使得你可以轻松地组合、修改和检查标志集。
```

###### 2.1.7.2.2 隐式转换

```
QFlags 类提供了从枚举类型到 QFlags 类型的隐式转换，这意味着你可以直接将枚举值赋给 QFlags 变量，或者将枚举值用于位运算中。同样，QFlags 也可以隐式地转换为整数类型（如 int），这在进行底层位操作时可能很有用。
```

###### 2.1.7.2.3 测试标志

```
QFlags 类提供了一个名为 testFlag 的成员函数，用于检查特定的标志是否存在于标志集中。这个函数接受一个枚举值作为参数，并返回一个布尔值，指示该标志是否已被设置。
```

###### 2.1.7.2.4 类型安全

```
尽管 QFlags 在底层是通过整数来表示的，但它提供了类型安全。这是因为 QFlags 的模板参数指定了它所包含的标志的类型，这有助于在编译时捕获类型不匹配的错误。
```

###### 2.1.7.2.5 使用场景

```
QFlags 在 Qt 中被广泛使用，特别是在需要设置多个选项或属性的情况下。例如，QWidget 的 Qt::WindowFlags 类型就是 QFlags<Qt::WindowType> 的一个实例，它允许你指定窗口的各种属性（如无边框、全屏、工具窗口等）。
```

###### 2.1.7.2.6 使用示例

``` cpp
#include <QFlags>  
#include <QDebug>  
// 定义一个枚举类型  
enum MyFlags {  
    Flag1 = 0x01, // 0001  
    Flag2 = 0x02, // 0010  
    Flag3 = 0x04  // 0100  
};  
Q_DECLARE_FLAGS(MyFlags, MyFlags) // 声明 QFlags 类型  
int main() {  
    MyFlags flags;  
    // 设置标志  
    flags |= Flag1; // 使用 |= 运算符来设置标志  
    flags |= Flag3;  
    // 检查标志  
    if (flags.testFlag(Flag1)) {  
        qDebug() << "Flag1 is set";  
    }  
    if (flags.testFlag(Flag2)) {  
        qDebug() << "Flag2 is set";  
    } else {  
        qDebug() << "Flag2 is not set";  
    }  
    if (flags.testFlag(Flag3)) {  
        qDebug() << "Flag3 is set";  
    }  
    // 清除标志  
    flags &= ~Flag1; // 使用 &= 和 ~ 运算符来清除标志  
    // 再次检查标志  
    if (!flags.testFlag(Flag1)) {  
        qDebug() << "Flag1 is not set after clearing";  
    }  
    return 0;  
}
```

#### 2.1.8 QRandomGenerator

##### 2.1.8.1 基本定义

```
QRandomGenerator 类是 Qt 框架中用于生成随机数的类。它提供了一系列成员函数和静态函数，允许开发者从高质量随机数生成器中获取随机值。
```

##### 2.1.8.2 常用操作

###### 2.1.8.2.1 构造函数和初始化

```
QRandomGenerator 类可以通过多种构造函数进行初始化。

可以使用用户提供的值（如一个或多个32位整数）作为种子来初始化随机数生成器。这样，给定相同的种子，随机数生成器将产生相同的数字序列，这在需要可重复性时非常有用。

QRandomGenerator 还支持使用系统提供的随机数生成器或全局随机数生成器进行初始化。
```

###### 2.1.8.2.2 成员函数

```cpp
generate()
    //生成一个32位随机数并返回。
generate64()
    //生成一个64位随机数并返回。
bounded(highest)
    //生成一个在0（包括）和highest（不包括）之间的随机数。这个函数有多个重载版本，可以接受不同类型的参数，如int、quint32、quint64等。
bounded(lowest, highest)
    //生成一个在lowest（包括）和highest（不包括）之间的随机数。同样，这个函数也有多个重载版本。
fillRange(buffer, count)
    //生成count个32位或64位随机数（取决于buffer的类型），并将它们存储在buffer中。这是获取多个随机数的一种高效方法。
```

###### 2.1.8.2.3 静态成员函数

``` cpp
QRandomGenerator::system()
    //返回一个指向系统级随机数生成器的指针。这个生成器通常基于操作系统的随机数生成设施，可能提供加密安全的随机数。
QRandomGenerator::global()
    //返回一个指向全局随机数生成器的指针。这个生成器在应用程序的不同部分之间共享，并使用一个全局的种子进行初始化。
QRandomGenerator::securelySeeded()
    //创建一个已经使用安全随机源种子化的QRandomGenerator对象。这个对象适用于需要高安全性和加密性的应用场景。
```

##### 2.1.8.3 使用场景

``` cpp
QRandomGenerator 类是可重入的，意味着多个线程可以同时使用它（只要它们在不同的对象实例上操作）。然而，如果多个线程需要共享同一个随机数序列，则需要使用外部锁定来同步访问。
    
QRandomGenerator::system() 和 QRandomGenerator::securelySeeded() 提供的生成器通常用于需要高质量或加密安全随机数的场景，如密码学、安全通信等。
QRandomGenerator::global() 提供的生成器适用于不需要加密安全但需要在应用程序的不同部分之间共享随机数序列的场景。
```

##### 2.1.8.4 注意事项

```cpp
当使用 QRandomGenerator 类生成随机数时，应注意选择合适的构造函数和初始化方法，以确保生成的随机数满足应用程序的需求。
    
如果需要生成具有特定分布（如正态分布）的随机数，可以将 QRandomGenerator 与 Qt 的分布类（如 QStandardRealDistribution）结合使用。
在多线程环境中使用 QRandomGenerator 时，应确保线程安全，避免数据竞争和死锁等问题。
```

##### 2.1.8.5 使用案例

###### 2.1.8.5.1 生成基本随机数

```cpp
#include <QRandomGenerator>
#include <QDebug>

int main() {
    // 使用全局随机数生成器生成一个0到99之间的随机整数
    int randomInt = QRandomGenerator::global()->bounded(100);
    qDebug() << "Random Integer:" << randomInt;

    // 使用全局随机数生成器生成一个0.0到1.0之间的随机浮点数
    double randomDouble = QRandomGenerator::global()->generateDouble();
    qDebug() << "Random Double:" << randomDouble;

    // 使用64位随机数生成器生成一个64位随机数
    quint64 random64 = QRandomGenerator64::global()->generate();
    qDebug() << "Random 64-bit Integer:" << random64;

    return 0;
}
```

###### 2.1.8.5.2 使用系统随机数生成器

```cpp
#include <QRandomGenerator>
#include <QDebug>

int main() {
    // 获取系统随机数生成器的指针
    QRandomGenerator* systemGenerator = QRandomGenerator::system();

    // 生成一个随机整数
    int randomInt = systemGenerator->bounded(100);
    qDebug() << "Random Integer using System Generator:" << randomInt;

    // 生成另一个随机整数
    int anotherRandomInt = systemGenerator->generate(); // 注意：generate() 通常返回一个32位整数
    qDebug() << "Another Random Integer using System Generator:" << anotherRandomInt;

    return 0;
}
```

###### 2.1.8.5.3 使用安全种子化的随机数生成器

```cpp
#include <QRandomGenerator>
#include <QDebug>

int main() {
    // 创建一个已经安全种子化的随机数生成器
    QRandomGenerator secureGenerator = QRandomGenerator::securelySeeded();

    // 生成一个随机整数
    int randomInt = secureGenerator.bounded(100);
    qDebug() << "Random Integer using Securely Seeded Generator:" << randomInt;

    // 生成一个随机浮点数
    double randomDouble = secureGenerator.generateDouble();
    qDebug() << "Random Double using Securely Seeded Generator:" << randomDouble;

    return 0;
}
```

###### 2.1.8.5.4 生成一组随机数并填充到列表中

```cpp
#include <QRandomGenerator>
#include <QList>
#include <QDebug>

int main() {
    // 创建一个QList来存储32位无符号整数
    QList<quint32> randomList;
    randomList.resize(10); // 将列表大小设置为10

    // 使用全局随机数生成器填充列表
    QRandomGenerator::global()->fillRange(randomList.data(), randomList.size());

    // 输出列表中的随机数
    for (quint32 num : randomList) {
        qDebug() << "Random Number:" << num;
    }

    return 0;
}
```

###### 2.1.8.5.5 使用自定义种子生成随机数

```cpp
#include <QRandomGenerator>
#include <QDebug>
#include <QDateTime>

int main() {
    // 使用当前时间的毫秒数作为种子
    quint32 seed = static_cast<quint32>(QDateTime::currentMSecsSinceEpoch());
    QRandomGenerator customGenerator(seed);

    // 生成一个随机整数
    int randomInt = customGenerator.bounded(100);
    qDebug() << "Random Integer using Custom Seed:" << randomInt;

    return 0;
}
```

#### 2.1.9 QString

##### 2.1.9.1 基本定义

```
QString 是 Qt 中的一个类，用于存储字符串，QString 没有父类。

QString 存储的是一串字符，每个字符是一个 QChar 类型的数据。QChar 使用的是 UTF-16 编码，一个字符包含 2 字节数据。

对于超过 65535 的 Unicode 编码，QString 使用两个连续的 QChar 字符表示。UTF-16 是一种 Unicode编码，能表示汉字，在 QString 字符串中一个汉字是一个字符。

QString 类定义了大量的接口函数用于字符串操作。QString 在 Qt 类库中应用非常广泛，很多函数的参数是 QString 类型。QString 使用隐式共享减少内存占用，也就是只有在修改一个字符串的时候，这个字符串才会被复制。

QString 的接口函数很多都是具有不同参数形式的同名函数，也就是 overload 型函数。
```

##### 2.1.9.2 基本操作

###### 2.1.9.2.1 创建和初始化

``` cpp
QString str = "Hello Qt"; 
//QString 是一个类，有多种构造函数，定义 QString 字符串的较简单方式是给它的构造函数传递一个 const char *类型的数据。

//在 Qt Creator 中，所有源程序文件都默认使用 UTF-8 编码进行保存，所以，赋值语句右侧的“Hello Qt”是一个 C 语言标准的 const char *类型的字符串，以“\0”作为结束符。QString 会使用其静态函数 fromUtf8()将这个 const char *类型的数据转换为 UTF-16 编码的字符串。
```

###### 2.1.9.2.2 字符串索引

``` cpp
//QString 在被创建和初始化后，其存储的字符串就是一个 QChar 字符数组，可以使用元素索引操作符“[ ]”或接口函数 at()访问每个字符。QString 字符串内字符的索引序号是从 0 开始的。
    
QString str= "dimple,酒窝"; 
QChar ch0= str[0]; //ch0='d' 
QChar ch7= str.at(7); //ch7='酒' 

//在 QString 字符串中，每个字符都是 QChar 类型，是用 UTF-16 编码的，一个汉字也是一个字符。所以，在上面这段代码里，ch0 是字符“d”，ch7 是字符“酒”。
```

##### 2.1.9.3 常用操作

######  1．字符串拼接

```cpp
使用加号运算符可以直接将两个 QString 字符串拼接为一个字符串。
    
QString str1= "洋洋", str2= "得意"; 
QString str3= str1 + str2; //str3 ="洋洋得意" 
str1= str2 + str1; //str1 ="得意洋洋" 

函数 append()在当前字符串的后面添加字符串，函数 prepend()在当前字符串的前面添加字符串。
    
QString str1= "卖", str2= "拐"; 
QString str3= str1; 
str1.append(str2); //str1 ="卖拐" 
str3.prepend(str2); //str3 ="拐卖"
```

######  2．字符串截取

``` cpp
（1）函数 front()和 back()。函数 front()返回字符串中的第一个字符，相当于 at(0)；函数 back()
返回字符串中的最后一个字符。
QString str1= "Hello,北京"; 
QChar ch1= str1.front(); //ch1 ='H' 
QChar ch2= str1.back(); //ch2 ='京' 

（2）函数 left()和 right()。函数 left()从字符串中提取左边 n 个字符，函数 right()从字符串中提取右边 n 个字符，n 为设定参数。
QString str1= ui->lineEdit->text(); 
//编辑框的内容是"G:\Qt6Book\QtSamples\qw.cpp" 
QString str2= str1.left(2); 
//str2 ="G:" 
str2= str1.right(3); 
//str2 ="cpp" 

（3）函数 first()和 last()。函数 first()从字符串中提取最前面的 n 个字符，函数 last()从字符串中提取最后面的 n 个字符，n 为设定参数。first()与 left()功能相同，last()与 right()功能相同，first()
和 last()是 Qt 6.0 中引入的函数，执行速度更快。
    
QString str1= "G:\\Qt6Book\\QtSamples\\qw.cpp"; 
//使用了转义字符“\\”
QString str2= str1.first(2); 
//str2 ="G:" 
str2= str1.last(3); 
//str2 ="cpp" 

注意，在程序里直接输入字符串时，符号‘\’是转义字符的引导符，所以这段程序在给 str1赋值的字符串中使用“\\”表示一个字符‘\’。如果直接从界面上的 QLineEdit 等组件中获取输入字符串，则不用关注是否存在转义字符，Qt 会自动处理。
    
（4）函数 mid()。函数 mid()用于返回字符串中的部分字符串，其函数原型定义如下：
QString QString::mid(qsizetype pos, qsizetype n = -1) 
其中，pos 是起始位置，n 是返回字符串中的字符个数。如果不指定参数 n，就返回从 pos 开始到末尾的字符串，如果 pos+n 超过了字符串的边界，返回的字符串就为 null。
    
QString str1= "G:\\Qt6Book\\QtSamples\\qw.cpp"; 
int N= str1.lastIndexOf("\\"); 
//获取最后一个‘\’出现的位置
QString str2= str1.mid(N+1); 
//str2 ="qw.cpp" 

（5）函数 sliced()。sliced()与 mid()的功能相同，也是返回字符串的片段。sliced()是 Qt 6.0 中引入的函数，它有两种不同的参数形式，其函数原型定义如下：
    
QString QString::sliced(qsizetype pos, qsizetype n) 
    //返回从位置pos开始的n个字符的字符串
QString QString::sliced(qsizetype pos) 
    //返回从位置 pos 开始到末尾的字符串
    
在函数 sliced()中，如果设置的参数会导致超出字符串的边界，则函数的行为是不确定的，但如果是在边界内，则 sliced()的执行速度比 mid()的快。
    
QString str1= "G:\\Qt6Book\\QtSamples\\qw.cpp"; 
int N= str1.lastIndexOf("\\"); 
//获取最后一个‘\’出现的位置
QString str2= str1.sliced(N+1); 
//str2 ="qw.cpp" 
str2= str1.sliced(N+1, 2); 
//str2 ="qw" 

（6）函数 section()。函数 section()的原型定义如下：
QString QString::section(const QString &sep, qsizetype start, qsizetype end = -1, 
 QString::SectionFlags flags = SectionDefault) 
    
其功能是从字符串中提取以 sep 作为分隔符，从 start 段到 end 段的字符串，例如：
QString str2, str1= "学生姓名,男,2003-6-15,汉族,山东"; 
str2= str1.section(",",0,0); //str2 ="学生姓名"，第一段的编号为 0 
str2= str1.section(",",1,1); //str2 ="男" 
str2= str1.section(",",0,1); //str2 ="学生姓名，男" 
str2= str1.section(",",4,4); //str2 ="山东" 
```

######  3．存储相关的函数

``` cpp
（1）函数 isNull()和 isEmpty()。这两个函数都会判断字符串是否为空，但是稍有差别。如果是一个空字符串，也就是只有“\0”，则 isNull()返回 false，而 isEmpty()返回 true。只有未被赋值时，isNull()才返回 true。
    
QString str1, str2=""; 
bool N= str1.isNull(); //N =true，未赋值
N= str2.isNull(); //N =false，已被赋值，不为 null 
N= str1.isEmpty(); //N =true 
N= str2.isEmpty(); //N =true 

QString 只要被赋值了，就会在字符串的末尾自动加上“\0”。所以，如果只是要判断字符串内容是否为空，应该使用函数 isEmpty()。
    
（2）函数 count()、size()和 length()。函数 size()和 length()都返回字符串中的字符个数，它们的功能相同。不带有任何参数的函数 count()与这两个函数功能相同，此外，count()还有带参数的形式，可统计某个字符串在当前字符串中出现的次数。
    
QString str1= "NI 好"; 
int N= str1.count(); //N =3 
N= str1.size(); //N =3 
N= str1.length(); //N =3 

（3）函数 clear()。函数 clear()清空当前字符串，使字符串为 null。
    
QString str1=""; 
bool N= str1.isNull(); 
//N =false，字符串已被赋值，不为 null 
N= str1.isEmpty(); 
//N =true，字符串内容为空
str1.clear(); 
N= str1.isNull(); 
//N =true，运行 clear()后，字符串变为 null 

（4）函数 resize()。函数 resize()改变字符串长度，该函数的一种函数原型定义如下：
    
void QString::resize(qsizetype size) 
如果参数 size 大于字符串当前长度，就扩充字符串，但新增的字符是不确定的；如果参数 size小于字符串当前长度，字符串会缩短为 size 个字符，多余的字符丢失。
    
函数 resize()还有另一种参数形式，即可以用一个字符填充字符串中扩充的位置，其原型定义如下：
    
void QString::resize(qsizetype size, QChar fillChar) 
函数 resize()可用于预分配字符串的长度，也可以在字符串内容初始化时用给定的字符进行填充，例如：
    
QString str1; 
bool chk= str1.isNull(); //chk =true 
str1.resize(5,'0'); //str1 ="00000" 

（5）函数 fill()。函数 fill()将字符串中的每个字符都用一个新字符替换，且可以改变字符串长度，函数原型定义如下：
QString &QString::fill(QChar ch, qsizetype size = -1) 
其中，ch 是要设置的字符，size 是设置的字符串新的长度，如果不设置 size 参数的值，表示保持字符串长度不变。
    
QString str1= "Hello"; 
str1.fill('X'); //str1 ="XXXXX" 
str1.fill('A',2); //str1 ="AA" 
str1.fill(QChar(0x54C8),3); 
//str1 ="哈哈哈"，0x54C8 是'哈'的 UTF-16 编码

注意，在传递某个字符构造 QChar 对象时，对于 ASCII 字符可以直接使用字符，但是对于汉字不能直接使用字符，而要用汉字的 Unicode 编码构造 QChar 对象。
```

######  4.   搜索和判断

``` cpp
（1）函数 indexOf()和 lastIndexOf()。函数 indexOf()的功能是在当前字符串内查找某个字符串首次出现的位置，其函数原型定义如下：
    
qsizetype QString::indexOf(const QString &str, qsizetype from = 0, 
 Qt::CaseSensitivity cs = Qt::CaseSensitive) 
参数 str 是要查找的字符串，参数 from 是开始查找的位置，参数 cs 指定是否区分大小写。参数 cs 的取值 Qt::CaseInsensitive 表示不区分大小写，取值 Qt::CaseSensitive 表示区分大小写。
函数 lastIndexOf()的功能则是在当前字符串内查找某个字符串最后出现的位置。
    
QString str1= "G:\\Qt6Book\\QtSamples\\qw.cpp"; 
int N= str1.indexOf("Qt"); //N =3 
N= str1.lastIndexOf("\\"); //N =20 

（2）函数 contains()。函数 contains()判断当前字符串是否包含某个字符串，可指定是否区分大小写。
    
QString str1= "G:\\Qt6Book\\QtSamples\\qw.cpp"; 
bool N= str1.contains(".cpp"); 
//N =true，默认区分大小写
N= str1.contains(".CPP"); 
//N =false，默认区分大小写
N= str1.contains(".CPP", Qt::CaseInsensitive); 
//N =true，不区分大小写

（3）函数endsWith()和startsWith()。函数startsWith()判断是否以某个字符串开头，函数endsWith()判断是否以某个字符串结束。
    
QString str1= "G:\\Qt6Book\\QtSamples\\qw.cpp"; 
bool N= str1.endsWith(".CPP", Qt::CaseInsensitive); 
//N =true，不区分大小写
N= str1.endsWith(".CPP", Qt::CaseSensitive); 
//N =false，区分大小写
N= str1.startsWith("g:"); 
//N =false，默认区分大小写

（4）函数 count()。带有参数的 count()统计当前字符串中某个字符串出现的次数，可以设置是否区分大小写。
    
QString str1= "G:\\Qt6Book\\QtSamples\\qw.cpp"; 
bool N= str1.count("Qt"); 
//N =2，默认区分大小写 
N= str1.count("QT"); 
//N =0，默认区分大小写
N= str1.count("QT", Qt::CaseInsensitive); 
//N =2，不区分大小写
```

###### 5．字符串转换和修改

``` cpp
（1）函数 toUpper()和 toLower()。函数 toUpper()将字符串内的字母全部转换为大写字母，toLower()将字符串内的字母全部转换为小写字母。
    
QString str1= "Hello, World", str2; 
str2= str1.toUpper(); //str2 ="HELLO, WORLD" 
str2= str1.toLower(); //str2 ="hello, world" 

（2）函数 trimmed()和 simplified()。函数 trimmed()会去掉字符串首尾的空格，函数 simplified()不仅会去掉字符串首尾的空格，还会将中间连续的空格用单个空格替换。
    
QString str1= " Are you OK? ", str2; 
str2= str1.trimmed(); //str2 ="Are you OK?" 
str2= str1.simplified(); //str2 ="Are you OK?" 

（3）函数 chop()。函数 chop()去掉字符串末尾的 n 个字符，n 是输入参数。如果 n 大于或等于字符串实际长度，字符串内容就变为空。
    
QString str1= "widget.cpp"; 
str1.chop(4); 
//str1 ="widget"，去掉了最后 4 个字符

（4）函数 insert()。函数 insert()在字符串中的某个位置插入一个字符串，它修改当前字符串的内容，并返回字符串对象的引用。函数 insert()的一种原型定义如下：
QString &QString::insert(qsizetype pos, const QString &str) 
参数 pos 表示需要插入的位置，如果 pos 大于字符串长度，字符串会自动补空格扩充长度。
QString str1= "It is great"; 
int N= str1.lastIndexOf(" "); 
//最后一个空格的位置
str1.insert(N, "n’t"); 
//str1 ="It isn't great" 

（5）函数 replace()。函数 replace()的一种原型定义如下：
QString &QString::replace(qsizetype pos, qsizetype n, const QString &after) 
    
其功能是从字符串的 pos 位置开始替换 n 个字符，替换后的字符串是 after。该函数会修改当前字符串的内容，并返回字符串对象的引用。替换后的字符串 after 的长度可以小于 n 或大于 n，例如：
    
QString str1= "It is great"; 
int N= str1.lastIndexOf(" "); 
//最后一个空格的位置
QString subStr= "wonderful"; 
str1.replace(N+1, subStr.size(), subStr); 
//str1 ="It is wonderful" 
str1.replace(N+1, subStr.size(), "OK!"); 
//str1 ="It is OK!" 

函数 replace()还有另一种参数形式，即可以替换字符串中所有特定的字符，其函数原型定义
如下：
QString &QString::replace(QChar before, QChar after, 
 Qt::CaseSensitivity cs = Qt::CaseSensitive) 
其功能是将字符串中的所有字符 before 替换为字符 after，可以设置是否区分大小写，例如：
QString str1= "Goooogle"; 
str1.replace('o', 'e'); 
//str1 ="Geeeegle" 

（6）函数 remove()。其功能是从字符串的 pos 位置开始移除 n 个字符，一种原型定义如下：
    
QString &QString::remove(qsizetype pos, qsizetype n) 
如果 n 超出了字符串的长度，就把 pos 后面的字符都移除，例如：
QString str1= "G:\\Qt6Book\\QtSamples\\qw.cpp"; 
int N= str1.lastIndexOf("\\"); 
str1.remove(N+1, 20); 
// str1 ="G:\Qt6Book\QtSamples\" 

函数 remove()还有另一种参数形式，即可以移除字符串中某个字符出现的所有实例，例如：
    
QString str1= "你的，我的，他的"; 
QString DeStr= "的"; 
QChar DeChar= QChar(DeStr[0].unicode()); 
//获取汉字'的'的 Unicode 编码，再创建 QChar 对象
str1.remove(DeChar); 
//str1 ="你，我，他"
```

#### 2.1.10 QChar类

##### 2.1.10.1 基本定义

```
QString 字符串中的每个字符都是 QChar 类型的，QChar 也是一个类，它采用 UTF-16 编码表示字符。QChar 定义了很多接口函数用于字符操作，这些函数的输入参数都为空，都是对 QChar 对象所表示的字符进行操作。
```

##### 2.1.10.2 基本操作

###### 2.1.10.2.1 接口函数

|         函数原型          |                           功能描述                           |
| :-----------------------: | :----------------------------------------------------------: |
|     `bool isDigit()`      |                  判断字符是否为 0～9 的数字                  |
|     `bool isLetter()`     |                      判断字符是否为字母                      |
| `bool isLetterOrNumber()` |                   判断字符是否为字母或数字                   |
|     `bool isLower()`      |                    判断字符是否为小写字母                    |
|     `bool isUpper()`      |                    判断字符是否为大写字母                    |
|      `bool isMark()`      |              判断字符是否为记号（如重音符号等）              |
|  `bool isNonCharacter()`  |            判断字符是否为非文字字符（如控制字符）            |
|      `bool isNull()`      |       判断字符编码是否为 0x0000，也就是空字符（“\0”）        |
|     `bool isNumber()`     | 判断字符是否为一个数，包括数字 0～9 以及数字符号（如①、②等） |
|     `bool isPrint()`      |            判断字符是否为可打印字符（非控制字符）            |
|     `bool isPunct()`      |                    判断字符是否为标点符号                    |
|     `bool isSpace()`      |          判断字符是否为分隔符号，包括空格、制表符等          |
|     `bool isSymbol()`     |           判断字符是否为符号，如特殊符号（★、▲等）           |
|     `char toLatin1()`     | 返回与 `QChar` 字符等效的 Latin1 字符，如果无等效字符则返回 0 |
|     `QChar toLower()`     |    返回字符的小写形式字符，如果字符不是字母，则返回其本身    |
|     `QChar toUpper()`     |    返回字符的大写形式字符，如果字符不是字母，则返回其本身    |
|   `char16_t unicode()`    |              返回字符的 16 位 Unicode 编码数值               |

###### 2.1.10.2.2 注意事项

```cpp
QChar 的函数 toLatin1()用于将 QChar 字符转换为 Latin1 字符，也就是将 UTF-16 编码的字符转换为 1 字节 Latin1 编码的字符。只有当 QChar 字符的编码为 0～255 时，函数 toLatin1()的转换才有意义。
QChar 还有一个静态函数 QChar::fromLatin1()，它用于将 Latin1 字符转换为 QChar 字符，其函数原型定义如下：
    
QChar QChar::fromLatin1(char c) 
    
QChar 有一个构造函数与这个静态函数功能相同，这个构造函数定义如下：
QChar::QChar(char ch) 
    
QChar 字符是 UTF-16 编码的字符，QChar 的接口函数 unicode()用于返回字符的 UTF-16 编码，也就是 char16_t 类型的数。我们可以通过这个函数获取任何一个字符的 UTF-16 编码，例如一个汉字的 UTF-16 编码。也可以通过 char16_t 类型的编码构造 QChar 字符，静态函数 QChar::fromUcs2()可以实现这样的功能，其函数原型定义如下。其中，参数 c 是一个字符的 UTF-16 编码。
    
QChar QChar::fromUcs2(char16_t c) 
QChar 有一个构造函数与这个静态函数功能相同，这个构造函数定义如下：
QChar::QChar(char16_t ch) 
```

###### 2.1.10.2.3 使用示例

``` cpp
例如，运行下面的一段代码后，字符串 str 的内容由“Hello,北京”变为了“Hello,青岛”。
    
QString str= "Hello,北京"; 
str[6]= QChar(0x9752); 
//'青'，使用构造函数
str[7]= QChar::fromUcs2(0x5C9B); 
//'岛'，使用静态函数

注意，如果字符的 UTF-16 编码超过了 Latin1 编码的范围，也就是超过了 255，就不能直接传递字符用于构造 QChar 对象。例如，不能将替换 str[6]的代码写成下面的语句：
    
str[6]= QChar('青'); 
//错误的代码

虽然这行代码编译没有错误，但是程序运行结果错误，得到的结果不是期望的字符串。这是因为 Qt 的源程序文件采用的是 UTF-8 编码，源代码中的“青”是 2 字节 UTF-8 编码，而 QChar没有这种类型参数的构造函数。
```

``` cpp
QChar 类还定义了逻辑运算符，用于两个 QChar 对象的比较。两个 QChar 对象的逻辑比较就是两个 QChar 字符的 UTF-16 编码大小的比较。例如，运行下面的一段代码后，字符串 str 中的汉字“河”会被替换为“湖”。这里用到了QChar 与 UTF-16 编码的转换，还用到了 QChar 的逻辑判断运算符。
    
QString HuStr= "河 to 湖"; 
//临时字符串，用于获取两个汉字的 Unicode 编码
QChar He= QChar::fromUcs2(HuStr[0].unicode());
//获取'河'的 UTF-16 编码，再构造 QChar 字符
QChar Hu= QChar(HuStr[3].unicode()); 
//获取'湖'的 UTF-16 编码，再构造 QChar 字符
QString str= "他们来自于河南或河北"; 
for(int i=0; i<str.size(); i++) 
{ 
 if (str.at(i) == He) 
     //如果是'河' 
 str[i]=Hu; 
    //替换为'湖' 
}
```

``` cpp
1．获取字符的 Unicode 编码
标题为“每个字符的 Unicode”的按钮的槽函数代码
如下：
void Widget::on_btnGetChars_clicked() 
{ 
 QString str= ui->editStr->text(); 
 //读取输入的字符串
 if (str.isEmpty()) 
     //判断字符串是否为空
 return; 
 ui->plainTextEdit->clear(); 
 for(qint16 i=0; i<str.size(); i++) 
 { 
 QChar ch= str.at(i); 
     //获取单个字符 
 char16_t uniCode= ch.unicode(); 
     //获取 QChar 字符的 UTF-16 编码
 QString chStr(ch); 
     //将 QChar 字符转换为 QString 字符串
 QString info= chStr+ QString::asprintf("\t,Unicode 编码= 0x%X",uniCode); 
 ui->plainTextEdit->appendPlainText(info); 
 } 
} 
这段程序的功能是读取界面上 QLineEdit 组件 editStr 里输入的字符串，提取字符串中的每个QChar 字符，并获取其 UTF-16 编码，然后在文本框中显示出来。图 4-21 显示了字符串“Hello,青岛”中每个字符的 Unicode 编码。从代码和运行结果可以看到，字符串中的每个字符是一个 QChar字符，一个汉字也是一个 QChar 字符，汉字的编码大于 0xFF，有两个有效字节。
    
QLineEdit 和 QPlainTextEdit 的接口函数的参数都是 QString 字符串，所以，即使是要在QPlainTextEdit 组件中显示一个字符，也需要将这个字符转换为 QString 字符串。代码里使用了QString 的一种形式的构造函数，即通过 QChar 构造字符串，代码如下：
QString chStr(ch); 
//将 QChar 字符转换为 QString 字符串
```

``` cpp
QChar 提供了一些接口函数（见表 4-6）用于判断字符的特性。标题为“单个字符特性判断”的按钮的槽函数代码如下：
void Widget::on_btnCharJudge_clicked() 
{ 
 QString str= ui->editChar->text(); 
    //读取 QLineEdit 组件里输入的字符串
 if (str.isEmpty()) 
 return; 
 QChar ch= str[0]; 
    //只提取第一个字符
 char16_t uniCode= ch.unicode(); 
    //获取 QChar 字符的 UTF-16 编码
 QString chStr(ch); 
    //将 QChar 字符转换为 QString 字符串
 QString info = chStr+ QString::asprintf("\t,Unicode 编码= 0x%X\n",uniCode); 
 ui->plainTextEdit->appendPlainText(info); 
//使用 QChar 的接口函数判断字符的特性
 ui->chkDigit->setChecked(ch.isDigit()); 
    //是否为数字 0～9 
 ui->chkLetter->setChecked(ch.isLetter());
    //是否为字母
 ui->chkLetterOrNumber->setChecked(ch.isLetterOrNumber()); 
    //是否为字母或数字
 ui->chkUpper->setChecked(ch.isUpper()); 
    //是否为大写字母
 ui->chkLower->setChecked(ch.isLower()); 
    //是否为小写字母
 ui->chkMark->setChecked(ch.isMark()); 
    //是否为记号
 ui->chkSpace->setChecked(ch.isSpace()); 
    //是否为分隔符号
 ui->chkSymbol->setChecked(ch.isSymbol()); 
    //是否为符号
 ui->chkPunct->setChecked(ch.isPunct()); 
    //是否为标点符号
} 

程序从界面上的 QLineEdit 组件 editChar 读取输入的字符串后，提取其中的第一个字符构造QChar 对象 ch，获取其 Unicode 编码并显示。然后调用 QChar 的一些接口函数判断字符的特性，更新界面上对应的复选框的勾选状态。
    
我们可以输入不同的字符进行测试，获取其 Unicode 编码，并看它属于哪种类型的字符。如果输入任何一个汉字，会看到 isLetter、isLetterOrNumber 两个复选框被勾选；如果输入一个符号“《”，会看到只有 isPunct 复选框被勾选；如果输入符号“∞”，会看到只有 isSymbol 复选框被勾选。
```

``` cpp
“其他测试和功能”分组框里的几个按钮实现了其他一些测试功能，包括 Latin1 字符转换为QChar 字符，UTF-16 编码字符转换为 QChar 字符，QChar 字符的逻辑比较等。这些按钮的槽函数的主要代码与前面讲解中举例的代码相同，这里就不再解释了。
    
void Widget::on_btnConvLatin1_clicked() 
{
    //“与 Latin1 的转换”按钮
 QString str= "Dimple"; 
 ui->plainTextEdit->clear(); 
 ui->plainTextEdit->appendPlainText(str); 
 QChar chP=QChar::fromLatin1('P'); 
    //使用静态函数
 	// QChar chP=QChar('P'); 
    //使用类的构造函数
 str[0]= chP; 
 ui->plainTextEdit->appendPlainText("\n"+str);
    } 
void Widget::on_btnConvUTF16_clicked() 
{//“与 UTF-16 的转换”按钮
 QString str= "Hello,北京"; 
 ui->plainTextEdit->clear(); 
 ui->plainTextEdit->appendPlainText(str); 
    //原来的字符串
 str[6]= QChar(0x9752); 
    //'青' 
 str[7]= QChar::fromUcs2(0x5C9B); 
    //'岛' 
 ui->plainTextEdit->appendPlainText("\n"+str); 
    //替换汉字后的字符串
} 
void Widget::on_btnCompare_clicked() 
{
    //“QChar 比较和替换”按钮
 QString str= "他们来自于河南或河北"; 
 ui->plainTextEdit->clear(); 
 ui->plainTextEdit->appendPlainText(str); 
 QString HuStr= "河 to 湖"; 
    //临时用字符串
 QChar He= QChar::fromUcs2(HuStr[0].unicode()); 
	//获取'河'的 UTF-16 编码，再转换为 QChar 字符
 QChar Hu= QChar(HuStr[3].unicode()); 
    //获取'湖'的 UTF-16 编码，再转换为 QChar 字符
 for(qint16 i=0; i<str.size(); i++) 
 { 
 if (str.at(i) == He) 
     //如果是'河'，就替换为'湖' 
 	str[i]= Hu; 
 } 
 ui->plainTextEdit->appendPlainText("\n"+str); 
} 
void Widget::on_btnClear_clicked() 
{
    //“清空文本框”按钮
 ui->plainTextEdit->clear(); 
} 
```

### 2.2 信号与槽

#### 2.2.1 基本概念

##### 2.2.1.1 信号

```
信号是类的成员函数，但它与普通成员函数不同，它不能被直接调用。当某个特定事件发生时（如按钮点击、数据更新等），信号会被自动发射（emit）。信号可以有参数，用于向槽函数传递信息。
```

##### 2.2.1.2 槽

```
槽是普通的成员函数，可以被正常调用，也可以被信号连接。当与槽连接的信号被发射时，槽函数会被自动调用。槽函数和普通成员函数一样，可以有参数，也可以有返回值（但Qt的信号与槽机制通常不处理返回值）。
```

#### 2.2.2 通信机制

##### 2.2.2.1 基本定义

```
Qt的信号与槽机制是一种对象间通信的机制，它允许一个对象（信号的发送者）在其内部状态改变时通知其他对象（槽的接收者）。这种机制是Qt的核心特性之一，它替代了传统的回调函数，使得对象间的通信更加灵活和直观。

在使用信号与槽的类中，必须在类的定义中插入宏 Q_OBJECT。

当一个信号被发射时，与其关联的槽函数通常被立即运行，就像正常调用函数一样。只有当信号关联的所有槽函数运行完毕后，才运行发射信号处后面的代码。

函数 iniUI()创建所有界面组件并完成布局和属性设置，函数iniSignalSlots()完成所有的信号与槽的关联。

Qt的信号与槽机制允许开发者以松耦合的方式实现对象间的通信，使得代码更加模块化、易于维护和扩展。
```

```markdown
- 当某个事件发生时，信号被发射。
- 信号被发射后，与之连接的槽函数会被自动调用。
- 槽函数中的代码实现了特定的功能，这些功能是在信号被发射时触发的。
```

##### 2.2.2.2 连接函数

```markdown
`connect`函数用于建立信号与槽之间的连接。一旦连接建立，当信号被发射时，相应的槽函数就会被调用。
```

``` cpp
bool QObject::connect(const QObject *sender, const char *signal,
                      const QObject *receiver, const char *member)
```

``` cpp
//对于Qt 5及更高版本，推荐使用基于函数指针的语法，因为它提供了更好的类型检查和编译时错误检测：
bool QObject::connect(const QObject *sender, PointerToMemberFunction signal,
                      const QObject *receiver, PointerToMemberFunction method)
```

``` cpp
QObject::connect(sender, SIGNAL(signal()), receiver, SLOT(slot())); 
//connect()是 QObject 类的一个静态函数，而 QObject 是大部分 Qt 类的基类
//在实际调用时可以忽略前面的限定符部分
//参数：
//sender 是发射信号的对象的名称
//signal()是信号，信号可以看作特殊的函数，需要带有括号，有参数时还需要指明各参数类型
//receiver 是接收信号的对象的名称
//slot()是槽函数，需要带有括号，有参数时还需要指明各参数类型
//SIGNAL 和 SLOT 是 Qt 的宏，分别用于指明信号和槽函数，并将它们的参数转换为相应的字符串。
//函数 connect()有多种参数形式，有一种常用的形式是不使用 SIGNAL 和 SLOT 宏，而是使用函数指针。例如，在示例项目 samp2_1 的文件 ui_widget.h 中，函数 setupUi()中有如下的语句：
QObject::connect(btnClose,&QPushButton::clicked, Widget, qOverload<>(&QWidget::close)); 
```

##### 2.2.2.3 连接方式

###### 2.2.2.3.1 单信号多槽函数

``` cpp
connect(spinNum, SIGNAL(valueChanged(int)),this, SLOT(addFun(int))); 
connect(spinNum, SIGNAL(valueChanged(int)), this, SLOT(updateStatus(int)));
//当一个信号与多个槽函数关联时，槽函数按照建立连接时的顺序依次运行。
//当信号和槽函数带有参数时，在函数 connect()里要指明各参数的类型，但不用指明参数名称。
```

###### 2.2.2.3.2 多信号单槽函数

``` c
connect(ui->radioBlack,SIGNAL(clicked()), this, SLOT(do_setFontColor())); 
connect(ui->radioRed, SIGNAL(clicked()), this, SLOT(do_setFontColor())); 
connect(ui->radioBlue, SIGNAL(clicked()), this, SLOT(do_setFontColor())); 
//3 个选择颜色的单选按钮的 clicked()信号关联到相同的自定义槽函do_setFontColor()。
//严格的情况下，信号与槽的参数个数和类型需要一致，至少信号的参数不能少于槽的参数。如果参数不匹配，会出现编译错误或运行错误。
```

###### 2.2.2.3.3 信号与信号

``` cpp
connect(spinNum, SIGNAL(valueChanged(int)), this, SIGNAL(refreshInfo(int)));
//一个信号可以连接另一个信号
//当发射一个信号时，也会发射另一个信号，以实现某些特殊的功能。
```

#### 2.2.3 动态属性

##### 2.2.3.1 基本概念

```
Qt 的动态属性（Dynamic Properties）是一个强大的特性，允许开发者在不修改类定义的情况下，给任何 QObject 或其子类对象添加额外的属性。这些属性可以在运行时被查询、修改和监视。这对于需要存储与对象相关的元数据但又不想在类中硬编码这些属性的情况特别有用。
```

##### 2.2.3.2 设置动态属性

``` markdown
使用 `QObject::setProperty(const char *name, const QVariant &value)` 方法可以设置动态属性。这里 `name` 是属性的名称（以 null 结尾的字符串），而 `value` 是要设置的值（`QVariant` 类型，可以容纳多种数据类型）。

或者，如果你使用的是 Qt 5 及以上版本，并且类是从 QObject 派生的，你也可以使用 C++11 的 `Q_INVOKABLE` 或槽函数来设置属性，但这通常不是设置动态属性的标准方式。
```

``` cpp
QObject *obj = new QObject();
obj->setProperty("myDynamicProperty", 42);
```

##### 2.2.3.3 查询动态属性

```markdown
使用 `QVariant QObject::property(const char *name) const` 方法可以查询动态属性的值。如果属性不存在，则返回 `QVariant()`（一个无效的 QVariant）。
```

``` cpp
QVariant value = obj->property("myDynamicProperty");
if (value.isValid()) {
    int myValue = value.toInt();
    // 使用 myValue ...
}
```

##### 2.2.3.4 移除动态属性

``` markdown
虽然 Qt 没有直接提供移除动态属性的方法，但你可以通过将属性值设置为一个无效的 QVariant 来“移除”它，或者简单地停止使用它。然而，这并不会从 QObject 的内部属性映射中完全删除它，只是将其值设置为无效。
```

##### 2.2.3.5 使用动态属性

###### 2.2.3.5.1 使用场景

``` markdown
动态属性在多种场景下都很有用，例如：

- 在运行时为 GUI 组件添加额外的配置信息。
- 在不修改类定义的情况下，向对象添加元数据或状态信息。
- 实现灵活的插件系统，其中插件可以注册额外的属性。
```

###### 2.2.3.5.2 注意事项

```markdown
- 动态属性名必须是唯一的，并且以 null 结尾的字符串。
- 动态属性的值存储在 QObject 的内部属性映射中，因此它们会占用一定的内存。
- 动态属性不会触发任何信号，但你可以通过 `QMetaObject::propertyChangedSignal` 和 `QObject::connect` 来监视属性的变化（尽管这通常用于 Qt 的内置属性）。对于动态属性，你可能需要实现自己的通知机制。
```

###### 2.2.3.5.3 使用示例

```markdown
假设你有一个 `QPushButton`，并且你想在运行时跟踪它被点击的次数：
```

``` cpp
QPushButton *button = new QPushButton("Click me");
button->setProperty("clickCount", 0);

connect(button, &QPushButton::clicked, this, [button]() {
    int count = button->property("clickCount").toInt();
    button->setProperty("clickCount", count + 1);
    qDebug() << "Button clicked" << count + 1 << "times";
});
//在这个例子中，我们为 `QPushButton` 添加了一个名为 "clickCount" 的动态属性来跟踪点击次数。每次按钮被点击时，我们都更新这个属性并打印出新的点击次数。
```

## 3. 高级编程

### 3.1 多线程编程

### 3.2 数据库编程

### 3.3 网络编程

## 4. GUI设计

### 4.1 界面组件

#### 4.1.1 布局组件

##### 4.1.1.1 基本定义

```
布局组件是Qt图形用户界面（GUI）设计中非常重要的部分，它们用于管理界面上其他组件的位置和大小，使得整个界面看起来更加整洁、有序。以下是对Qt布局组件的详细讲解：
```

##### 4.1.1.2 布局分类

###### 4.1.1.2.1 水平布局组件

```
按照水平方向从左到右布局子组件。
常用属性包括子组件间的间距（spacing）、各子组件占的总宽度比例（stretch）以及子组件的宽高策略（sizePolicy）。
```

###### 4.1.1.2.2 垂直布局组件

```
按照垂直方向从上到下布局子组件。
其常用属性与QHBoxLayout相同。
```

###### 4.1.1.2.3 网格布局组件

```
在一个网格中进行布局，类似于HTML的table。
除了具有QHBoxLayout和QVBoxLayout的常用属性外，还可以设置单元格的最小高度（RowMinimumHeight）和最小宽度（ColumnMinimumWidth）。
```

###### 4.1.1.2.4 表单布局组件

```
专门用于表单布局，通常将标签和对应的输入控件配对排列。
在Qt Designer中可能不直接以QFormLayout的形式出现，但可以通过拖拽相关控件并设置其属性来实现类似的布局效果。
```

###### 4.1.1.2.5 分裂器组件

```
允许用户通过拖动分割线来调整子组件的大小。
常用属性包括设置分离器的方向（orientation，可设置为水平方向和垂直方向）、是否实时更新子控件大小（opaqueResize，默认为true）、是否允许用户将子部件的大小调整为0（childrenCollapsible，为true时允许）以及分割线的宽度（handleWidth）等。
```

##### 4.1.1.3 使用组件

###### 4.1.1.3.1 创建布局对象

```
使用相应的布局类（如QHBoxLayout、QVBoxLayout、QGridLayout等）创建布局对象。
```

###### 4.1.1.3.2 添加子组件

```
将需要布局的控件添加到布局对象中。这通常通过布局对象的addWidget()、addLayout()等方法实现。
```

###### 4.1.1.3.3 设置布局

```
将布局对象设置到窗口或容器控件中。这通常通过窗口或容器控件的setLayout()方法实现。
```

##### 4.1.1.4 注意事项

###### 4.1.1.4.1 动态布局与静态布局

```
Qt提供了静态布局和动态布局两种组件布局定位机制。静态布局需要手动指定组件的坐标和长宽值，而动态布局则使用布局管理器来自动调整组件的大小和位置。

动态布局更加灵活，能够适应窗口大小的变化。因此，在大多数情况下，建议使用动态布局。
```

###### 4.1.1.4.2 布局嵌套

```
可以将一个布局对象作为另一个布局对象的子布局，以实现更复杂的布局效果。

嵌套布局时需要注意子布局之间的相互影响和约束条件。
```

###### 4.1.1.4.3 间距和对齐

```
可以通过设置布局对象的spacing属性来调整子组件之间的间距。

某些布局组件（如QGridLayout）还提供了对齐方式等属性，可以进一步定制布局效果。
```

###### 4.1.1.4.4 伸缩性

```
布局组件的stretch属性用于控制子组件在布局中的伸缩比例。通过合理设置stretch属性，可以实现子组件在布局中的灵活伸缩和排列。
```

#### 4.1.2 分隔组件

##### 4.1.2.1 基本定义

```
分隔类组件在图形用户界面（GUI）设计中扮演着重要的角色，它们用于在界面上创建视觉上的分隔，以区分不同的内容区域或功能区域。在Qt框架中，分隔类组件主要包括水平分隔符（Horizontal Spacer）和垂直分隔符（Vertical Spacer），以及更高级的QSplitter组件。
```

##### 4.1.2.2 分隔符

###### 4.1.2.2.1 功能

```
水平分隔符：在水平方向上创建分隔，通常用于区分同一行中的不同内容或控件。
垂直分隔符：在垂直方向上创建分隔，通常用于区分同一列中的不同内容或控件。
```

###### 4.1.2.2.2 使用场景

```
在设计复杂的界面布局时，使用分隔符可以使界面更加清晰、易于理解。
分隔符常用于在表单、对话框或主窗口中分隔不同的输入字段、按钮或信息区域。
```

###### 4.1.2.2.3 特点

```
分隔符通常不可见，但它们确实在布局中占据了空间，从而影响了其他控件的位置和大小。
在Qt Designer中，分隔符可以像其他控件一样被拖拽到界面上，并可以通过属性编辑器进行调整。
```

##### 4.1.2.3 QSplitter组件

###### 4.1.2.3.1 功能

```
QSplitter是一个高级的分隔类组件，它允许用户在应用程序窗口中创建可拖动的分隔器，以便动态地调整多个子窗口或控件的大小。
用户可以通过拖动分隔器来改变相邻子控件的尺寸比例。
```

###### 4.1.2.3.2 使用场景

```
QSplitter常用于需要同时展示多个内容区域，并且这些区域的大小可以动态调整的场景。
例如，在文本编辑器中，可以使用QSplitter来分隔代码编辑区和输出区；在图像查看器中，可以使用QSplitter来分隔缩略图区和详细图像查看区。
```

###### 4.1.2.3.3 特点

```
QSplitter支持水平和垂直两种方向的分隔。
可以嵌套使用QSplitter来创建更复杂的布局结构。
QSplitterHandle类实现了分隔器的分界线，允许用户通过拖动来调整子部件尺寸。
QSplitter提供了丰富的API，如setOrientation()、setOpaqueResize()、addWidget()等，用于设置分隔器的方向、透明度、添加子控件等。
```

|       属性名称        |                             描述                             |
| :-------------------: | :----------------------------------------------------------: |
|     `orientation`     | 方向，指定分割条是水平分割还是垂直分割。对于 `QSplitter` 来说，这个属性决定了子窗口的排列方向。 |
|    `opaqueResize`     | 如果值为 `true`，表示在拖动分割条时，组件的大小会动态改变，并且这种改变是可见的（即不是瞬间完成的，而是有动画效果或逐步进行的）。注意，这个属性的具体行为可能取决于具体的布局管理器或控件实现。 |
|     `handleWidth`     | 进行分割操作的拖动条的宽度（以像素为单位）。这个属性定义了用户可以通过拖动来改变子组件大小的条形区域的宽度。 |
| `childrenCollapsible` | 表示进行分割操作时，子组件的大小是否可以变为 0。如果为 `true`，则允许某些子组件在分割过程中被完全折叠（即其大小变为 0）。这通常用于实现可折叠的面板或窗口。 |

###### 4.1.2.3.4 注意事项

```
在使用QSplitter时，需要注意子控件的初始大小和最小尺寸设置，以避免界面布局出现混乱。

如果QSplitter中包含的控件较多或布局较为复杂，可能需要考虑性能优化问题。

可视化设计时同时选中这两个组件，再点击工具栏上的 Lay Out Horizontally in Splitter 按钮即可。

QSplitter 是界面组件，使用QMainWindow::setCentralWidget()函数将其设置为主窗口的中心组件，也就是填充满主窗口的工作区。
```

###### 4.1.2.3.5 分割示例

``` cpp
splitter = new QSplitter(Form); 
//创建 splitter，窗口对象是 Form 
splitter->setOrientation(Qt::Horizontal); 
splitter->setOpaqueResize(true); 
splitter->setHandleWidth(8); 
splitter->setChildrenCollapsible(true); 
groupBox = new QGroupBox(splitter); 
groupBox->setMinimumSize(QSize(150, 0)); 
//设置最小宽度
splitter->addWidget(groupBox); 
//添加到分割布局中
plainTextEdit = new QPlainTextEdit(splitter); 
splitter->addWidget(plainTextEdit); 
//添加到分割布局中

//创建分割布局就是将分割条对象 splitter 作为两个组件groupBox 和 plainTextEdit的父容器组件。

//可视化设计 UI 时为 groupBox 设置 minimumSize.Width 属性值为 150，这样在分割操作时，groupBox 达到最小宽度后就不能再缩小。

//尽量使用 Qt Designer 可视化设计窗口界面，当某些界面效果不能通过可视化设计实现时，可以通过添加代码来补充创建界面。
```

#### 4.1.3 按钮组件

##### 4.1.3.1 基本定义

```
按钮类组件是Qt中用于接收用户点击事件的界面元素。它们通常用于触发特定的操作或执行命令。Qt提供了多种类型的按钮组件，以满足不同的需求。
```

##### 4.1.3.2 按钮分类

###### 4.1.3.2.1 QPushButton

```cpp
功能：QPushButton是Qt中最常用的按钮组件，用于在界面中添加标准的按压按钮。
    
属性：包括名称（name）、显示的文本（text）、字体（font）、是否可用（enabled）等。
    
信号：常用的信号有clicked（）、pressed（）、released（）等，分别表示按钮被点击、按下和释放时触发的事件。
    
使用场景：适用于需要用户进行点击操作以触发某个事件的场景。
```

###### 4.1.3.2.2 QRadioButton

```
功能：QRadioButton是Qt中用于实现单选按钮的组件。在同一组中，只能选择一个单选按钮。

属性：包括名称、显示的文本、字体、是否可用、是否选中（checked）等。

信号：常用的信号有clicked（）、stateChanged（int state）等。其中，stateChanged信号在单选按钮的选中状态发生变化时触发。

使用场景：适用于需要从多个互斥选项中选择一个的场景，如性别选择、选项设置等。
```

###### 4.1.3.2.3 QCheckBox

```
功能：QCheckBox是Qt中用于实现复选框的组件。复选框允许用户选择多个选项。

属性：包括名称、显示的文本、字体、是否可用、是否选中、是否支持三种状态（tristate）等。

信号：常用的信号有stateChanged（int state）等。该信号在复选框的状态发生变化时触发。

使用场景：适用于需要从多个非互斥选项中选择多个的场景，如功能开关、选项设置等。
```

###### 4.1.3.2.4 QToolButton

```
功能：主要用于工具栏中，提供快速访问命令或选项的方式。

外观：通常较小，可以显示图标、文本或两者组合。

特性：支持设置弹出菜单，可以配置为检查框或单选按钮。

信号：包括clicked()、toggled()、triggered()等。
```

###### 4.1.3.2.5 QCommandLinkButton

```
功能：类似于普通按钮，但带有箭头图标，指示点击后将执行进一步操作。

外观：通常显示为带有描述性文本和箭头图标的按钮。

信号：包括clicked()等。
```

###### 4.1.3.2.6 QDialogButtonBox

```
功能：用于对话框中的自定义按钮集合。

外观：通常包含一组标准按钮，如“确定”、“取消”、“是”、“否”等。

特性：可以方便地添加、删除和配置按钮。

信号：包括clicked()、accepted()、rejected()等。
```

##### 4.1.3.3 组件共性

``` markdown
继承关系：按钮类组件通常继承自QAbstractButton类，因此具有一些共同的功能和属性。

事件处理：按钮类组件能够接收和处理各种事件，如鼠标点击、键盘按键等。

布局管理：按钮类组件可以在父窗口或布局中进行定位和管理，以实现灵活的界面布局。

样式和主题：Qt提供了丰富的样式和主题支持，可以方便地定制按钮类组件的外观和感觉。
```

##### 4.1.3.4 按钮示例

``` cpp
#include <QApplication>  
#include <QWidget>  
#include <QPushButton>  
#include <QRadioButton>  
#include <QCheckBox>  
#include <QVBoxLayout>  
#include <QDebug>  
  
class MyWidget : public QWidget {  
    Q_OBJECT  
  
public:  
    MyWidget(QWidget *parent = nullptr) : QWidget(parent) {  
        QVBoxLayout *layout = new QVBoxLayout(this);  
  
        // 创建QPushButton  
        QPushButton *button = new QPushButton("Click Me", this);  
        connect(button, &QPushButton::clicked, this, &MyWidget::onButtonClicked);  
        layout->addWidget(button);  
  
        // 创建QRadioButton组  
        QRadioButton *radio1 = new QRadioButton("Option 1", this);  
        QRadioButton *radio2 = new QRadioButton("Option 2", this);  
        radio1->setChecked(true); // 设置默认选项  
        QVBoxLayout *radioLayout = new QVBoxLayout();  
        radioLayout->addWidget(radio1);  
        radioLayout->addWidget(radio2);  
        layout->addLayout(radioLayout);  
  
        // 创建QCheckBox  
        QCheckBox *checkBox = new QCheckBox("Enable Feature", this);  
        checkBox->setChecked(true); // 设置默认状态  
        layout->addWidget(checkBox);  
  
        connect(radio1, &QRadioButton::clicked, this, &MyWidget::onRadioClicked);  
        connect(radio2, &QRadioButton::clicked, this, &MyWidget::onRadioClicked);  
        connect(checkBox, &QCheckBox::stateChanged, this, &MyWidget::onCheckBoxStateChanged);  
    }  
  
private slots:  
    void onButtonClicked() {  
        qDebug() << "Button clicked!";  
    }  
  
    void onRadioClicked() {  
        QRadioButton *clickedButton = qobject_cast<QRadioButton *>(sender());  
        qDebug() << "Radio button clicked:" << clickedButton->text();  
    }  
  
    void onCheckBoxStateChanged(int state) {  
        qDebug() << "Check box state changed to:" << (state == Qt::Checked ? "Checked" : "Unchecked");  
    }  
};  
  
int main(int argc, char *argv[]) {  
    QApplication app(argc, argv);  
  
    MyWidget widget;  
    widget.show();  
  
    return app.exec();  
}  
  
#include "main.moc"
```

#### 4.1.4 表项视图

##### 4.1.4.1 基本定义

```
项视图是Qt中用于展示数据模型的组件。它们负责将数据模型中的数据以可视化的方式呈现给用户，并允许用户通过界面与数据进行交互。Qt提供了几种不同类型的项视图，以满足不同的展示需求。
```

##### 4.1.4.2 项视图类型

| 项视图组件 | 描述                                                         | 常用模型                                                     |
| ---------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| QListView  | 用于展示一维列表数据                                         | QStandardItemModel, 自定义的 QAbstractItemModel 子类         |
| QTableView | 用于展示二维表格数据，适用于需要展示行和列数据的场景，如电子表格或数据库查询结果 | QStandardItemModel, 自定义的 QAbstractItemModel 子类         |
| QTreeView  | 用于展示层次结构数据，如文件系统目录、组织结构图或XML文档    | QStandardItemModel, QFileSystemModel, 自定义的 QAbstractItemModel 子类 |

##### 4.1.4.3 项视图功能

| 功能     | 描述                                                         |
| -------- | ------------------------------------------------------------ |
| 数据展示 | 项视图从模型中获取数据，并根据模型的索引将其展示在界面上。   |
| 选择     | 用户可以通过单击、双击或键盘快捷键来选择项视图中的项。       |
| 排序     | 项视图可以支持对模型数据的排序，以提供更加灵活的数据展示方式。 |
| 过滤     | 项视图可以支持对模型数据的过滤，以显示满足特定条件的子集。   |
| 拖放     | 项视图可以支持拖放操作，允许用户通过拖动来重新排序项或在不同视图之间移动项。 |
| 编辑     | 通过委托（delegate），项视图可以支持对模型数据的就地编辑，允许用户直接在界面上修改数据。 |

##### 4.1.4.4 项视图与模型

```
项视图不直接存储数据，而是从与之关联的模型中获取数据。模型负责数据的存储和管理，而视图则负责数据的展示和用户交互。这种分离使得开发者可以独立地修改模型或视图，而不会影响到另一方。
```

##### 4.1.4.5 自定义项视图

```
Qt的项视图架构非常灵活，允许开发者通过继承和重载来创建自定义的项视图。例如，你可以创建一个自定义的 QAbstractItemView 子类来实现特定的展示逻辑，或者通过自定义委托来改变项的渲染方式。
```

#### 4.1.5 表项组件

##### 4.1.5.1 基本定义

```
表项组件是Qt中用于展示和管理数据的一组控件。它们通常与Qt的模型/视图架构一起使用，其中模型负责数据的存储和管理，而视图（在这里特指表项组件）则负责数据的展示和用户交互。表项组件提供了丰富的功能和灵活的接口，使得开发者能够轻松地创建出符合需求的数据展示界面。
```

##### 4.1.5.2 常见组件

###### 4.1.5.2.1 QListWidget

```
用于展示一维列表数据。
提供了添加、删除、排序和查找列表项的功能。
支持拖放操作，允许用户重新排序列表项或在不同列表之间移动项。
```

###### 4.1.5.2.2 QTreeWidget

```
用于展示层次结构数据，如文件系统目录、组织结构图等。
提供了添加、删除、展开和折叠树形结构的功能。
支持自定义项的外观和行为，以满足特定的展示需求。
```

###### 4.1.5.2.3 QTableWidget

```
用于展示二维表格数据，如电子表格或数据库查询结果。
提供了设置列数、行数、表头和单元格内容的功能。
支持对表格数据进行排序、过滤和就地编辑。
```

##### 4.1.5.3 功能特点

```
数据展示：表项组件能够从模型中获取数据，并以可视化的方式展示在界面上。它们支持多种数据格式和展示方式，以满足不同的需求。

用户交互：表项组件允许用户通过单击、双击、拖放等操作与数据进行交互。这些操作可以触发事件或动作，从而实现数据的编辑、删除或重新排序等功能。

自定义：表项组件提供了丰富的自定义选项，包括外观、行为和数据展示方式等。开发者可以根据自己的需求对组件进行定制，以满足特定的应用场景。

信号与槽机制：Qt的表项组件支持信号与槽机制，这使得开发者能够轻松地实现组件之间的通信和数据传递。通过连接信号和槽，开发者可以定义组件之间的交互逻辑和响应行为。
```

##### 4.1.5.4 注意事项

```
性能优化：在处理大量数据时，表项组件的性能可能会受到影响。因此，开发者需要注意性能优化，如使用分页加载、虚拟滚动等技术来减少内存消耗和提高响应速度。

数据一致性：在编辑或删除数据时，开发者需要确保模型中的数据与视图中的展示保持一致。这可以通过在模型中实现相应的数据更新逻辑来实现。

用户体验：表项组件的用户体验对于应用程序的成功至关重要。因此，开发者需要关注组件的外观、交互方式和反馈机制等方面，以确保用户能够轻松地使用和理解这些组件。
```

#### 4.1.6 容器组件

##### 4.1.6.1 基本定义

```
容器类组件（Container Widgets）是用来组织和布局其他控件（Widgets）的组件。这些容器类组件使得开发者能够以灵活的方式安排界面元素，从而构建出复杂而美观的用户界面。

在可视化设计界面时，最好将一组需要布局管理的组件放置在一个容器组件里，然后对容器内的组件设置一种布局方式。这样，当容器的大小变化时，容器内组件的大小和位置就能相应自动变化。在设计复杂的界面时，内部有布局的容器组件也可以作为其他容器组件的子组件。

使用布局管理的组件也可以不放在某个容器组件里，而是直接使用布局管理。对于不使用容器组件的布局，其自身就相当于一个容器组件，可以和其他组件再次进行上层布局。
```

##### 4.1.6.2 常用组件

| 组件类名称     | 组件名称           | 功能                                                         |
| -------------- | ------------------ | ------------------------------------------------------------ |
| QGroupBox      | 分组框             | 提供了一个带有标题和边框的容器，用于将相关的控件分组在一起，使界面更加整洁和组织有序。 |
| QScrollArea    | 卷滚区域           | 允许在有限的显示区域内滚动查看大面积的内容。适用于显示大量文本、图像或复杂布局的情况。 |
| QToolBox       | 工具箱             | 类似于标签页，但每个页面都有一个可点击的标签，通常用于显示不同的工具或选项集。 |
| QTabWidget     | 带标签栏的多页组件 | 提供了一个标签栏，每个标签对应一个页面。用户可以通过点击标签来切换页面，非常适合用于显示不同的视图或设置。 |
| QStackedWidget | 堆叠多页组件       | 与QTabWidget类似，但没有标签栏。通常通过编程方式或外部控件（如按钮）来切换页面。 |
| QFrame         | 框架组件           | 提供了边框和可选的背景色。虽然它本身主要用于装饰，但也可以作为其他控件的容器。 |
| QWidget        | 界面组件           | Qt中所有用户界面对象的基类。当QWidget没有父组件时，它表现为一个独立的窗口。作为容器时，可以包含其他QWidget对象。 |
| QMdiArea       | MDI工作区组件      | 用于管理多个文档窗口（MDI，多文档界面）。每个文档窗口都是一个独立的QWidget，可以在QMdiArea中打开、关闭和移动。 |
| QDockWidget    | 停靠组件           | 可以在QMainWindow的边缘停靠，也可以浮动在窗口上方。通常用于提供辅助工具或信息面板。 |
| QAxWidget      | ActiveX显示组件    | 仅在Windows平台上可用，用于嵌入和显示ActiveX控件。这对于需要与Windows特定功能或控件交互的应用程序非常有用。 |

```cpp
QGroupBox 通常与布局管理器一起使用，以创建分组布局。
    
QScrollArea 的内容区域通常是通过设置其 widget() 或 setWidget() 方法来定义的，并且可以使用滚动条来查看超出视口的内容。
    
QToolBox 和 QTabWidget 都提供了方便的界面来切换不同的页面，但它们的使用场景略有不同。QToolBox更适合于工具或选项的集合，而QTabWidget则更适合于具有明显不同内容的页面。
    
QStackedWidget 可以通过 setCurrentIndex()、setCurrentWidget() 或 addWidget() 方法来管理其页面。
    
QFrame 可以通过设置其 setFrameShape()、setFrameShadow() 和 setLineWidth() 方法来自定义其边框样式。
    
QWidget 是Qt中所有用户界面组件的基类，因此它非常灵活，可以用作任何类型的容器。
    
QMdiArea 通常与 QMdiSubWindow 一起使用，以创建和管理多个子窗口。
    
QDockWidget 的停靠行为可以通过设置其 setAllowedAreas() 方法来定制，例如允许它停靠在窗口的左侧、右侧、顶部或底部。
    
QAxWidget 是Qt ActiveX模块的一部分，它允许Qt应用程序与ActiveX控件进行交互。这在使用Qt开发需要与Windows平台特定功能集成的应用程序时非常有用。
```

#### 4.1.7 输入组件

##### 4.1.7.1 基本定义

```
输入类组件是图形用户界面（GUI）中用于接收用户输入信息的重要元素。在Qt框架中，输入类组件提供了多种类型的输入框和选择器，以满足不同的用户输入需求。
```

##### 4.1.7.2 常见组件

###### 4.1.7.2.1 QLineEdit

``` cpp
功能：用于接收单行文本输入。
    
外观：通常显示为一个带有边框和文本的矩形输入框。
    
核心属性：
text：输入框中的文本。
inputMask：输入内容格式约束（支持简单的输入格式校验，但基于正则表达式的方式是更核心的方法）。
maxLength：最大输入长度。
frame：是否添加边框。
echoMode：显示方式（如正常显示、密码模式、不显示任何字符等）。
cursorPosition：光标所在的位置。
alignment：文字对齐方式。
dragEnabled：是否允许拖拽。
readOnly：是否是只读的。
placeHolderText：当输入框内容为空时显示的提示信息。
clearButtonEnabled：是否会自动显示出“清除按钮”。
    
核心信号：
cursorPositionChanged(int old, int new)
    //光标位置改变时发出。
editingFinished()
    //编辑完成时发出（如按下回车键或输入框失去焦点）。
returnPressed()
    //按下回车键时发出。
selectionChanged()
    //选中的文本改变时发出。
textChanged(const QString &text)
    //文本改变时发出（代码对文本的修改能触发此信号）。
textEdited(const QString &text)
    //文本改变时发出（代码对文本的修改不能触发此信号）。
```

###### 4.1.7.2.2 QTextEdit

``` cpp
功能：用于接收和显示多行文本输入，支持富文本格式。
    
外观：通常显示为一个较大的矩形编辑区域，支持滚动条。
    
核心属性：
markdown：支持Markdown格式的文本输入和渲染。
html：支持HTML格式的文本输入和显示。
placeHolderText：输入框为空时显示的提示信息。
readOnly：是否是只读的。
undoRedoEnabled：是否开启撤销/重做功能。
autoFormatting：是否开启自动格式化。
acceptRichText：是否接受富文本内容。
verticalScrollBarPolicy和horizontalScrollBarPolicy：滚动条的出现策略。
    
核心信号：
textChanged()：文本内容改变时触发。
selectionChanged()：选中范围改变时触发。
cursorPositionChanged()：光标移动时触发。
undoAvailable(bool)：可以进行撤销操作时触发。
redoAvailable(bool)：可以进行重做操作时触发。
copyAvailable(bool)：文本被选中/取消选中时触发。
```

###### 4.1.7.2.3 QComboBox

``` cpp
功能：用于从预定义选项中选择一个或多个项目。
    
外观：通常显示为一个下拉列表框，点击时展开显示选项。
    
核心属性：
currentText：当前选中的文本。
currentIndex：当前选中的条目下标（从0开始）。
editable：是否允许修改（设为true时，QComboBox的行为接近QLineEdit）。
iconSize：下拉框图标（小三角）的大小。
maxCount：最多允许有多少个条目。
    
核心方法：
addItem(const QString&)
    //添加一个条目。
currentIndex()
    //获取当前条目的下标。
currentText()
    //获取当前条目的文本内容。
    
核心信号：
activated(int)
    //当用户选择了一个选项时发出。
activated(const QString& text)
    //用户点开下拉框并划过某个选项时发出（尚未确认选择）。
currentIndexChanged(int)
    //当前选项改变时发出。
currentIndexChanged(const QString& text)
    //用户明确选择了一个选项时发出。
editTextChanged(const QString& text)
    //当编辑框中的文本改变时发出（如果QComboBox是可编辑的）。
```

###### 4.1.7.2.4 QSpinBox 和 QDoubleSpinBox

``` cpp
功能：用于输入整数或浮点数，通过点击按钮来修改数值大小。
    
外观：通常显示为一个带有上下箭头按钮和数值显示框的控件。
    
核心属性：
value：当前数值。
minimum和maximum：允许的最小值和最大值。
singleStep：每次点击按钮时数值改变的步长。
prefix和suffix：在数值前后显示的文本（如货币符号、单位等）。
    
核心信号：
valueChanged(int)：数值改变时发出（对于QSpinBox）。
valueChanged(double)：数值改变时发出（对于QDoubleSpinBox）。
```

###### 4.1.7.2.5 QDateEdit 和 QTimeEdit

``` cpp
功能：用于选择日期和时间。
    
外观：通常显示为一个带有日历或时间选择器的输入框。
    
核心属性：
date或time：当前选中的日期或时间。
minimumDate和maximumDate（对于QDateEdit）：允许的最小和最大日期。
minimumTime和maximumTime（对于QTimeEdit）：允许的最小和最大时间。
calendarPopup（对于QDateEdit）：是否显示日历弹出窗口。
    
核心信号：
dateChanged(QDate)：日期改变时发出（对于QDateEdit）。
timeChanged(QTime)：时间改变时发出（对于QTimeEdit）。
```

###### 4.1.7.2.6 QDial

``` cpp
功能：用于通过旋转选择数值。
    
外观：通常显示为一个圆形或弧形旋转控件。
    
核心属性：
value：当前数值。
minimum和maximum：允许的最小值和最大值。
notchTarget：旋转时对准的刻度值。
notchSize：每个刻度的宽度。
    
核心信号：
valueChanged(int)：数值改变时发出。
```

###### 4.1.7.2.7 QSlider

``` cpp
功能：用于通过拖动滑块选择数值。
    
外观：通常显示为一个水平或垂直的滑块控件。
    
核心属性：
value：当前数值。
minimum和maximum：允许的最小值和最大值。
singleStep和pageStep：每次拖动或点击时数值改变的步长。
orientation：控件的方向（水平或垂直）。
    
核心信号：
valueChanged(int)：数值改变时发出。
sliderPressed()：滑块被按下时发出。
sliderReleased()：滑块被释放时发出。
sliderMoved(int)：滑块移动时发出。
actionTriggered(int)：执行特定动作时发出（如点击滑块两端的箭头）。
```

#### 4.1.8 显示组件

##### 4.1.8.1 基本定义

```
显示类组件，顾名思义，是用于在屏幕上显示信息的组件。它们通常不具备交互性，即用户不能通过它们输入或修改数据。显示类组件的主要作用是向用户呈现信息，如文本、图像、动画等。
```

##### 4.1.8.2 常见组件

| 组件类名称      | 组件名称         | 功能                                                         |
| --------------- | ---------------- | ------------------------------------------------------------ |
| QLabel          | 标签             | 用于显示文字、图片等内容。QLabel非常灵活，可以显示简单的文本、HTML格式的富文本，甚至是图片。它通常用于显示静态信息或提示信息。 |
| QTextBrowser    | 文本浏览器       | 专门用于显示富文本格式的内容，如HTML或Markdown。QTextBrowser具有只读属性，用户不能通过它修改文本内容。此外，QTextBrowser还支持文本内的超链接跳转，非常适合用于显示文档或帮助信息。 |
| QGraphicsView   | 图形视图组件     | 是Graphics View Framework中的核心组件之一，用于展示和交互图形项。QGraphicsView提供了一个可以滚动和缩放的视图区域，可以显示复杂的图形场景，并支持对图形项的拖拽、旋转等操作。 |
| QCalendarWidget | 日历组件         | 用于显示日历，并允许用户选择和设置日期。虽然它主要用于显示日期，但由于用户可以通过它选择日期，因此也可以被视为一种输入组件。QCalendarWidget提供了丰富的日期选择和显示功能，非常适合用于需要日期选择功能的用户界面。 |
| QLCDNumber      | LCD 数值显示组件 | 模仿LCD显示效果的数值显示组件，可以显示整数和浮点数。QLCDNumber通常用于显示计数器、传感器读数等数值信息。它的外观类似于传统的LCD显示屏，给人一种直观、简洁的感觉。 |
| QProgressBar    | 进度条           | 用于表示某个操作的进度，通常以百分数表示。QProgressBar有水平和垂直两种方向，可以根据需要选择合适的方向。进度条是用户界面中的常见元素，它可以让用户了解操作的进度，从而提高用户体验。 |
| QOpenGLWidget   | OpenGL 显示组件  | 用于在Qt应用程序中显示OpenGL图形。QOpenGLWidget是一个高性能的OpenGL渲染窗口，可以支持复杂的3D图形渲染和交互。它非常适合用于需要高性能图形渲染的应用程序，如游戏、科学可视化等。 |
| QQuickWidget    | QML 显示组件     | 用于自动加载并显示QML文件的内容。QQuickWidget支持Qt Quick 2.x应用程序的集成，可以方便地将QML界面嵌入到Qt Widgets应用程序中。QML是一种声明式的UI编程语言，它使得创建复杂的用户界面变得更加简单和直观。 |

##### 4.1.8.3 属性设置

```
文本内容：对于文本显示组件，如Label和Text Browser，可以设置要显示的文本内容。

字体属性：包括字体类型、大小、颜色、粗体、斜体等。这些属性可以通过font属性进行设置。

尺寸策略：组件的尺寸策略决定了它在布局中的行为。常见的尺寸策略包括固定尺寸（Fixed）、最小尺寸（Minimum）、最大尺寸（Maximum）、首选尺寸（Preferred）、可扩展尺寸（Expanding）等。在Qt中，可以通过sizePolicy属性来设置组件的尺寸策略。

调色板：调色板属性（palette）管理着控件和窗体的所有颜色，可用于管理控件的外观显示以及设置组成。
```

##### 4.1.8.4 应用场景

```
信息提示：在应用程序中显示提示信息或状态信息。
数据显示：显示来自数据库或传感器的数据。
用户引导：通过显示文本或图像来引导用户完成操作。
娱乐应用：在游戏或多媒体应用中显示图像、动画或视频。
```

##### 4.1.8.5 注意事项

```
选择合适的组件：根据显示内容的需求选择合适的显示类组件。例如，对于简单的文本显示，可以选择Label；对于需要显示复杂文本格式的内容，可以选择Text Browser。

优化布局：合理设置组件的尺寸策略和布局管理器，以确保用户界面在不同设备和分辨率下都能保持良好的显示效果。

考虑可访问性：对于需要支持可访问性的应用程序，应确保显示类组件的内容可以通过屏幕阅读器等辅助技术进行访问。
```

### 4.2 布局管理

#### 4.2.1 实现方式

```
布局管理也是通过一些类实现的，UI 文件经过 MOC 编译后，可视化设计的布局管理会被转换为 C++代码。

表单布局只适用于两列组件的布局，例如第一列是 QLabel 组件，第二列是 QLineEdit、QComboBox 等输入组件，构成一种输入表单。表单布局可以看作网格布局的一种简化形式，网格布局可以管理更复杂的多行多列组件。

QSpacerItem 从 QLayoutItem 继承而来，QSpacerItem 可以用于在布局中占位，或填充剩余空间。
```

#### 4.2.2 QLayout类

##### 4.2.2.1 基本定义

```
QLayout 的父类是 QObject 和 QLayoutItem，QLayoutItem 没有父类。因为 QLayout 不是从 QWidget 继承而来的，所以布局管理类对象并不是窗口上可见的界面组件。
```

##### 4.2.2.2 布局管理器

|   布局管理器   |                             描述                             |
| :------------: | :----------------------------------------------------------: |
|  QVBoxLayout   |           垂直布局，自动将多个组件按垂直方向排列。           |
|  QHBoxLayout   |           水平布局，自动将多个组件按水平方向排列。           |
|  QGridLayout   |        网格布局，允许将多个组件按行和列排列成网格状。        |
|  QFormLayout   | 表单布局，适用于两列组件的布局管理，通常用于表单输入，如用户界面中的表单。 |
| QStackedLayout | 堆叠布局，用于管理多个`QWidget`对象（即多个页面），但每次只有一个页面可见。需要编程来控制页面的切换，没有内置的切换按钮。 |

##### 4.2.2.3 水平布局

```
对于水平布局的 layoutStretch 属性实现的效果，还可以通过设置单个组件的 sizePolicy 属性中的 Horizontal Stretch 来实现。在可视化设计布局时，可以通过配合设置组件的 sizePolicy、minimumSize、maximumSize 属性，以实现灵活的布局效果。
```

```
任何布局类对象在可视化设计时都有 layoutLeftMargin、layoutTopMargin、layoutRightMargin 和layoutBottomMargin 这 4 个边距属性，这 4 个边距属性用于设置布局组件与父容器的 4 个边距的最小值，单位是像素。水平布局和垂直布局还有一个属性 layoutSpacing，表示组件的最小间距。
```

``` cpp
groupBox = new QGroupBox(MainWindow); 
//创建 groupBox，将窗口作为父容器
groupBox->setGeometry(QRect(260, 310, 341, 43)); 
horizontalLayout = new QHBoxLayout(groupBox); 
//在 groupBox 里创建水平布局
horizontalLayout->setSpacing(10); 
//设置 layoutSpacing 
horizontalLayout->setContentsMargins(5, 5, 5, 5); 
//设置 4 个边距属性的值
pushButton = new QPushButton(groupBox); 
horizontalLayout->addWidget(pushButton); 
pushButton_2 = new QPushButton(groupBox); 
horizontalLayout->addWidget(pushButton_2); 
pushButton_3 = new QPushButton(groupBox); 
horizontalLayout->addWidget(pushButton_3); 

//从上述代码可以看到，创建水平布局对象 horizontalLayout 时，groupBox 是作为其父组件的。然后 horizontalLayout 运行函数 setSpacing()以设置组件的最小间距，运行函数 setContentsMargins()设置 4 个边距的值。

//水平布局的 layoutStretch 属性可以灵活控制各组件的宽度占比。

//第一个分组框中水平布局的layoutStretch 属性值为“0,0,0”，表示 3 个组件宽度平均。

//第二个分组框中水平布局的 layoutStretch属性值为“0,0,1”，表示两个按钮达到合适宽度后就不再增大，下拉列表框占据右边所有水平空间。

//第三个分组框中水平布局的 layoutStretch 属性值为“1,1,2”，这相当于把宽度分为四等份，两个按钮等宽，下拉列表框的宽度是其中一个按钮的 2 倍。
```

##### 4.2.2.5 网格布局

###### 4.2.2.5.1 基本定义

```
可视化设计网格布局时一般是在一个容器组件内先摆放组件，使各组件的位置和大小与期望的效果大致相同，然后点击工具栏上的网格布局按钮进行网格布局。
```

###### 4.2.2.5.2 网格属性

|          属性名称          |                             描述                             |
| :------------------------: | :----------------------------------------------------------: |
| `layoutHorizontalSpacing`  | 水平方向上组件之间的最小间距。这个属性定义了网格中相邻组件在水平方向上的最小距离。 |
|  `layoutVerticalSpacing`   | 垂直方向上组件之间的最小间距。这个属性定义了网格中相邻组件在垂直方向上的最小距离。 |
|     `layoutRowStretch`     | 各行的延展因子。这些因子决定了在垂直方向上，当网格布局需要扩展或收缩时，各行应该如何分配额外的空间。与垂直布局（`QVBoxLayout`）的`layoutStretch`属性功能相同。 |
|   `layoutColumnStretch`    | 各列的延展因子。这些因子决定了在水平方向上，当网格布局需要扩展或收缩时，各列应该如何分配额外的空间。与水平布局（`QHBoxLayout`）的`layoutStretch`属性功能相同。 |
|  `layoutRowMinimumHeight`  | 各行的最小高度（以像素为单位）。如果设置为0，则表示该行的最小高度将自动计算。 |
| `layoutColumnMinimumWidth` | 各列的最小宽度（以像素为单位）。如果设置为0，则表示该列的最小宽度将自动计算。 |
|   `layoutSizeConstraint`   | 布局的尺寸限制方式。这是一个枚举类型`QLayout::SizeConstraint`的值，用于控制网格布局如何确定其最小尺寸。默认值为`QLayout::SetDefaultConstraint`，意味着网格布局将使用其父组件的最小尺寸作为自己的最小尺寸。 |

###### 4.2.2.5.3 注意事项

```markdown
请注意，这些属性通常通过布局管理器的API进行设置，而不是直接在Qt Designer的属性编辑器中设置（尽管某些属性可能通过Qt Designer的“布局”对话框间接设置）。在代码中，您可以使用类似`gridLayout->setHorizontalSpacing(int)`、`gridLayout->setRowStretch(int row, int stretch)`等方法来设置这些属性。

此外，`layoutSizeConstraint`属性可能不是`QGridLayout`直接提供的属性，而是更一般地应用于所有布局管理器（通过`QLayout`类）的属性。在Qt中，布局的尺寸约束通常是通过布局管理器的整体行为来控制的，而不是通过单个属性来设置的。然而，`QLayout`类确实提供了一个`setSizeConstraint(SizeConstraint)`方法来设置布局的尺寸约束。
```

##### 4.2.2.6 布局示例

```cpp
 groupBox = new QGroupBox(MainWindow); 
//创建 groupBox，将窗口作为父容器
groupBox->setGeometry(QRect(290, 160, 200, 230)); 
gridLayout = new QGridLayout(groupBox); 
//创建网格布局，将 groupBox 作为父容器
gridLayout->setHorizontalSpacing(7); 
gridLayout->setVerticalSpacing(12); 
gridLayout->setContentsMargins(10, 10, -1, -1); 
pushButton = new QPushButton(groupBox); 
gridLayout->addWidget(pushButton, 0, 0, 1, 1); 
//添加左上角的按钮
//这表示将 pushButton 添加到网格布局的 0 行 0 列的位置，pushButton 占用 1 行 1 列。
pushButton_2 = new QPushButton(groupBox); 
gridLayout->addWidget(pushButton_2, 0, 1, 1, 1); 
comboBox = new QComboBox(groupBox); 
comboBox->addItem(QString()); 
gridLayout->addWidget(comboBox, 1, 0, 1, 2); 
//添加下拉列表框
//这表示将 comboBox 添加到网格布局的 1 行 0 列的位置，comboBox 占用 1 行 2 列。在设计网格布局的时候，并不意味着每个网格里都必须有组件，网格可以空着，也可以使用水平或垂直间隔组件占位。
plainTextEdit = new QPlainTextEdit(groupBox); 
gridLayout->addWidget(plainTextEdit, 2, 0, 1, 2); 
QGridLayout 类添加组件的函数是 addWidget()，其函数原型定义如下：
void QGridLayout::addWidget(QWidget *widget, int fromRow, int fromColumn, int rowSpan, 
 int columnSpan, Qt::Alignment alignment = Qt::Alignment()) 

//其中，widget 是需要添加到布局中的组件，fromRow 和 fromColumn 表示组件所在的行号和列号，rowSpan 和 columnSpan 表示组件占用的行数和列数，alignment 表示默认的对齐方式。
```

### 4.3 界面样式

#### 4.3.1 qss样式表

#### 4.2.2 多语言界面

## 5. 文件系统

## 6. 事件系统

## 7. 功能模块

### 7.1 图表模块

### 7.2 绘图模块

### 7.3 多媒体模块

### 7.4 数据可视化模块

### 7.5 自定义插件和库
