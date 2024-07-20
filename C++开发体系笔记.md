## 第一阶段

### 一、预科

``` markdown
* Ubuntu
* VSCode
* C语言基础
* Linux高级编程
* 数据结构
* 系统编程
* IO
* 并发编程
* 网络编程Socket
* 数据库编程
* C++
* QtGUI
* STM32
```

### 二、环境

#### 2.1 系统设置

##### 		2.1.1关闭防火墙

``` markdown
用于网络编程等开发环境
```

##### 		2.1.2文件扩展名

``` markdown
控制面板搜索文件资源管理器进行显示
```

#### 2.2 编辑器

##### 		2.2.1 文件编码

###### 2.2.1.1 编码类型

```  markdown
* gb2312
* gp936
* utf-8
```

###### 2.2.1.2 存储格式

``` markdown
* 单字符char 8位 256
* 多char用于存储更多字符
```

##### 2.2.2 VSCode编辑器

###### 2.2.2.1 注意事项

``` markdown
纯文本文件在Windows下不要用记事本打开（历史遗留问题）
```

###### 2.2.2.2 特性

``` markdown
* 跨平台，有丰富插件
* 安装中文插件和C/C++插件
```

##### 2.2.3 Vim编辑器

###### 2.2.3.1 命令模式

``` markdown
* hjkl 代替左下上右方向键
* yy 复制一行
* nyy 复制n行
* p 粘贴
* dd 删除一行
* nddd 删除n行
* u 撤销操作
* Ctrl+r 重做
* gg 回到开头位置
* G 回到最后位置
* 0 移动到当前行的行首
* $ 移动到当前行的行尾
* i 当前位置进入插入模式
* o 在下方插入空行，在空行进入插入模式
* a 光标后移一位进入插入模式
* I 回到当前行开头O进入插入模式
* O 在上方插入空行，在空行进入插入模式
* A 光标进入当前行末尾插入模式
```

``` bash
vim Test.c
#当文件不存在时会自动创建
#进入文件时即进入命令模式
```

###### 2.2.3.2 插入模式

``` markdown
可进行编辑操作
```

###### 2.2.3.3 底行模式

``` bash
#在命令模式下输入:进入底行模式"英文冒号"
#w 保存
#q 退出
#w！强制保存
#q！强制退出
#在底行模式连续按两次Esc进入命令模式
#3,5y复制3到5行
#p 粘贴
#3,5d删除3到5行
#set nu显示行号
#set nonu不显示行号
#n 进入第n行
#/ 查找字符串
#当查找到多个相同元素时，按n查找下一个
#3,4s/字符串1/字符串2
#替换选定范围匹配到的第一个字符串1
#3,4s/字符串1/字符串2/g
#%s/字符串1/字符串2
#替换全部范围匹配到的第一个字符串1
#%s/字符串1/字符串2/g
#替换全部范围匹配到的全部字符串1
```

###### 2.2.3.4 模式切换图

```mermaid
graph LR
A[底行模式]-->|双击Esc|B[命令模式]
B-->|:|A
B-->|i/o/a/I/O/A|C[插入模式]
C-->|Esc|B
```

#### 2.3 配置虚拟机

##### 2.4.1 Ubuntu系统

``` markdown
Ctrl +Alt+t：打开终端
```

##### 2.4.2 设置Win和Linux共享目录

``` markdown
1.新建softeem文件夹（暂放D盘）
2./mnt/hgfs/softeem$ 位于VMware Linux的共享目录
```
##### 2.4.3 外部网络配置

``` markdown
桥接模式和NAT模式
```

#### 2.4 学习工具

##### 2.4.1  思维导图

``` markdown
CMMI 能力成熟度模型集成（实施开发标准）
过程域->目的->实践
```

##### 2.4.2 流程图

```mermaid
graph LR
A[开始] --> B(步骤1)
B --> C(步骤2)
C -->|是| D[结束]
C -->|否| E(步骤3)
E --> D
```

###### 2.4.2.1 图形含义

``` makedown
圆角矩形：开始与结束
矩形：行动方案
菱形：问题判断或判定（审核/审批/评审）环节
平行四边形：输入或输出
箭头：工作流方向
```

#### 2.5 Linux系统

##### 2.5.1 常用命令

###### 2.5.1.1 切换命令

``` bash
cd
#切换路径
cd /
#根目录
cd ./
#当前目录
cd ../
#上级目录
cd -
#上次目录
```

###### 2.5.1.2 查看命令

``` bash
pwd
#查看当前目录的绝对路径
ls
#查看当前目录下的文件
ls -a
#查看当前目录下的所有文件（包括隐藏文件）
ls -l
#查看当前目录下文件的详细信息
softeem@ubuntu:~$ ls -l
#文件名=文件类型+用户权限+组权限+其它权限+硬链接数+用户名+组名+文件大小+最近修改时间
drwxr-xr-x 2 softeem softeem    4096 Dec 10  2017 Documents
drwxr-xr-x 2 softeem softeem    4096 Dec 10  2017 Downloads
#开头一号位字符代表了不同的文件[bcd~lsp]
#-：普通文件
#d:目录
#b:block 块设备文件
#c:char 字符设备文件
#l:链接文件（软链接，硬链接）inode
#s:套接字文件
#p:管道文件
#--------------------------------
#开头二三四号位字符代表当前用户权限
#r:read可读
#w:write可写
#-:不可读/不可写
#开头五六七号位字符代表当前组权限
#--------------------------------
#后三位代表其它组用户权限
#--------------------------------
#权限后数字代表硬链接数
#--------------------------------
#硬链接数后是用户名和组名
#--------------------------------
#用户名后是大小和最近一次修改时间
cat 文件名
#查看文件内容
cat 文件名1 文件名2
#合并两个文件
```

###### 2.5.1.3 创建命令

``` bash
touch 文件名
#创建一个文件
mkdir 文件夹名
#创建一个目录/文件夹
mv 就文件名 新文件名
#更改文件名
```

###### 2.5.1.4 删除命令

``` shell
rm 文件名
#删除文件
rmdir 目录名
#删空目录
rm -r 目录名
#删非空目录
```

###### 2.5.1.5 复制命令

``` bash
cp 源文件名字 目标路径/新文件名
#复制文件
cp 源文件夹名字 目标路径/新文件目录名 -r
#-r代表递归，将整个目录进行拷贝
#复制文件目录
```

###### 2.5.1.6 系统命令

``` bash
clear
#终端清屏
poweroff
#关机
shutdown -h now
#关机
exit
#退出终端
```

###### 2.5.1.7 查询命令

``` bash
$ man 7 ascill
#查看ASCII编码
$ man 3 函数名
#查看对应函数信息
```

##### 2.5.2 快捷键

###### 2.5.2.1 终端命令

``` markdown
Ctrl+Alt+T 打开终端
Ctrl+Shift+N 新建终端
Ctrl+Shift+T 多标签页终端
Ctrl+Shift+'+' 终端放大
Ctrl+'-' 终端缩小
Ctrl+Alt+F7/F1 图形界面/终端界面
```

###### 2.5.2.2 补全命令

``` markdown
Tab 补全命令行代码
⬆⬇（方向键）使用历史命令
```

#### 2.6 Git版本控制

##### 2.6.1 git基本概念

###### 2.6.1.1 基本功能
``` markdown
分布式版本管理控制
```

###### 2.6.1.2 git组成

``` markdown
Index（缓存区）:master主分支，HEAD"指针",commit命令将缓存区文件提交到本地仓库
Repository（本地仓库）:
Workspace（工作区）:add指令将工作区文件提交到缓存区
Remote（远程仓库）
将路径纳入git中后出现的.git目录包含了本地仓库和缓存区
```


##### 2.6.2 git安装

``` markdown
Windows平台下安装
通过国内镜像地址快速下载
初学git时，安装使用默认选项即可
Linux环境下安装：
$ sudo apt-get install git
```

##### 2.6.2 git界面

``` bash
#水漫金山@DESKTOP-BRHPETA MINGW64 ~/Desktop/git-lerning (master)
#用户名+计算机名+windows平台特有标识+当前目录
#新装git需要配置全局用户信息
$ git config --global user.name "DamnJone"
$ git config --global user.email "2469463883@qq.com"
#邮箱地址用于区分提交用户，便于团队合作
$ git config --list
#查看配置
$ git init
$ git status
#目录中的中文名文件会显示乱码，需要配置
#左上角右键打开选项选择文本设置字符集UTF-8
$ git config --global core.quotepath false
#显示status编码
$ git config --global gui.encoding utf-8
#图形界面编码
$ git config --global i18n.commit.encoding utf-8
#提交信息编码
$ git config --global i18n.logoutputencoding utf-8
#输出log编码
$ export LESSCHARSET=utf-8
#git log 默认使用less分页， 需要bash对less命令进行utf-8编码
```

##### 2.6.3 git存储图解

``` mermaid
graph RL
    Workspace("Workspace\n(本地文件夹)")
    Index("Index\n(暂存区)")
    LocalRepo("Local Repository\n(本地仓库)")
    RemoteRepo("Remote Repository\n(远程仓库)")

    Workspace -->|git add| Index
    Index -->|git commit| LocalRepo
    LocalRepo -->|git push| RemoteRepo
    RemoteRepo -->|git pull| LocalRepo
    LocalRepo -->|git checkout| Workspace
    RemoteRepo -.->|间接影响| Workspace
    
    subgraph Commit
        A[Commit A] --> B[Commit B]
        B --> C[Commit C]
    end

    style Index fill:#f9f,stroke:#333,stroke-width:2px,stroke-dasharray: 5, 5
    style Workspace fill:#def,stroke:#333,stroke-width:2px
    style LocalRepo fill:#acf,stroke:#333,stroke-width:2px
    style RemoteRepo fill:#acf,stroke:#333,stroke-width:2px,stroke-dasharray: 10, 5
```

``` markdown
Workspace:工作区
Index:缓存区
Repository:本地仓库
Remote:远程仓库
选定目录下的.git文件包括Repository和Index文件
```

##### 2.6.4 git基础语法

###### 2.6.4.1 提交与状态查看

``` bash
$ git status
#查看当前工作区的状态信息
$ git add README.txt
#将文件提交到缓存区
#缓存区只记录最后一次提交
$ git add .
#提交当前工作区下的所有文件
#部分文件打开时会在当前目录添加一个临时文件
#该操作会将临时文件也进行提交，注意！！！
On branch master
#在当前分支
No commits yet
Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   README.txt
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   README.txt
```

###### 2.6.4.2 版本比较

``` bash
$ git add README.txt
#新创建和修改过的文件，都是用git add来添加到缓存区
$ git diff README.txt
#当工作区和本地仓库一致时该代码无输出
#实测比较的是缓存区版本和工作区修改过的版本
$ git diff README.txt
diff --git a/README.txt b/README.txt
#a代表修改前版本，b代表修改后版本
index 4ec7751..be9a177 100644
#由哈希方式生成修改前版本..修改后版本。
#100代表普通文件，64代表权限
--- a/README.txt
+++ b/README.txt
#---代表修改前版本
#+++代表修改后版本
@@ -1 +1,2 @@
#-改动前，+改动后，1、2代表第一行开始的连续两行
-This is a sentence.
\ No newline at end of file
+This is a sentence.
+The second line.
\ No newline at end of file
#-之前版本
#+之后版本
$ git difftool README.txt
#会通过对比展示改动前和改动后的版本
```

###### 2.6.4.3 日志管理

``` bash
$ git add README.txt
#文件跟踪只能针对纯文本文件，如果是二进制文件，只会跟踪文件的大小
$ git commit -m "This is a commit"
#提交至仓库,可加备注
$ git log
#查看提交日志
$ git log Example.txt
#Example.txt提交了三次修改和日志
commit ffedbd25ce9a80a7861e09773edcbf0278ad9aba (HEAD -> master)
#commit 后面为该次提交的ID，该标识码唯一
#master 代表主分支
#HEAD 可以理解C语言指针，指向该分区
#正式的开发一般不会位于主分支
Author: DamnJone <2469463883@qq.com>
#提交用户的信息
Date:   Wed Jul 3 10:22:52 2024 +0800
#提交时间
    This is the third modification.

commit 121846a858cf39fa7d53ffa610adfaf10ba7734c
Author: DamnJone <2469463883@qq.com>
Date:   Wed Jul 3 10:19:53 2024 +0800

    This is the second modification.

commit 818cb8dd08c8c957a05fb2465af296e27101018d
Author: DamnJone <2469463883@qq.com>
Date:   Wed Jul 3 10:18:41 2024 +0800

    This is the first modification.
#顶部信息为最后一次提交
$ git log --pretty=oneline
#一行显示一次提交
$ git log --pretty=oneline Example.txt
#显示该目录下指定文件的提交（每次单行显示）
```

###### 2.6.4.4 版本穿梭

``` bash
$ git reset --hard HEAD^
#将HEAD"指针"指向上一个节点
$ git reset --hard HEAD^^
#将HEAD"指针"指向上上一个节点,以此类推
#执行操作后，文件将回退上一个版本
$ git reset --hard ffedbd25ce9a80a7861e09773edcbf0278ad9aba
#将HEAD替换为版本ID，即回到对应版本
$ git reflog
#查看所有日志，包括版本回退后的状态
```

###### 2.6.4.5 分支管理

```mermaid
graph LR
A[节点1]-->B[节点2]
B-->|主分支|C[节点3稳定版本]
C-->D[节点4稳定版本]
D-->E[节点5稳定版本]
B-->F[节点2.1]
F-->G[节点2.2]
G-->H[节点2.3]
H-->I[节点2.4]
F-->J[节点3.1]
J-->K[节点3.2]
K-->L[节点3.3]
L-->M[节点3.4]
M-->|回到分支|I
F-->|回到分支|I
I-->|提交稳定版本|E
C-->N[其它发行版本]
```

``` bash
#分支策略
#Master:主分支，正式版本
#Dev:开发版本
#在开发版本上新建个人分支进行团队协作
#当个人分支成熟后合并到dev分支
#团队成员都会含有master分支和dev分支
#用HEAD指向可合并和切换分支
$ git branch
#查看分支
$ git switch -c dev
$ git branch 分支名
#创建一个分支
$ git switch 分支名
#切换一个分支
$ git merge 分支名
#将分支合并到当前分支
$ git branch -d 分支名
水漫金山@DESKTOP-BRHPETA MINGW64 ~/Desktop/1 (master)
$ git merge dev
Auto-merging a.txt
CONFLICT (content): Merge conflict in a.txt
Automatic merge failed; fix conflicts and then commit the result.
#发生冲突，自动合并失败
水漫金山@DESKTOP-BRHPETA MINGW64 ~/Desktop/1 (master|MERGING)
$ cat a.txt
a
<<<<<<< HEAD
master
=======
dev
>>>>>>> dev
#手动合并过程
#分支合并策略
#当dev再次提交之后
$ git merge 分支名
#会自动把最新的dev作为master的下一个版本
#HEAD指针回退会出现问题
$ git merge --no--ff dev
#普通合并模式，会产生新的提交
```

###### 2.6.4.6 撤销工作区

``` bash
#1.新文件，没有在缓冲区中add过，也没有commit过
#处理：直接删除
$ rm 新文件
#2.修改文件
#a.缓存区存过（add）,没有commit过
#b.缓存区空了,commit过
$ git checkout HEAD--README.txt
#相当于撤销工作区未add的操作，回退到上一次add的版本。
#用缓存区覆盖工作区
$ git restore 文件名
#将缓存区文件取出覆盖工作区
#也能将本地仓库文件取出覆盖工作区
#缓存区和本地仓库哪个新用哪个
```

###### 2.6.4.7 撤销缓存区

``` bash
#首先工作区的状态是干净的
#然后，修改文件，做一次add
$ git reset HEAD readme.txt
Unstaged changes after reset:
M       readme.txt
#该命令会撤销add操作，将文件从缓存区放回工作区
#用缓存区覆盖工作区
#想完全撤销就继续使用工作区撤销的方式。
$ git restore --staged 文件名
```

###### 2.6.4.8 撤销本地仓库

``` bash
#实质：版本回退
$ git reset --hard <commit id>
```

###### 2.6.4.9 删除操作

``` bash
$ git rm 文件名
$ git rm -f 文件名
#强制删除
```

##### 2.6.5 最佳使用方案

``` bash
$ git add 文件名
#git使用的最佳方案
#多次git add 提交到缓存区
#一次 git commit 提交到本地仓库
```

##### 2.6.6 创建远程私有库

###### 2.6.6.1 gitee注册和添加公钥

``` bash
$ ssh-keygen -t rsa -C "邮箱"
#生成公钥，位于C盘用户目录下的.ssh目录
#用VSCode打开.pub文件
#将内容复制进gitee的SSH公钥
```

###### 2.6.6.2 创建仓库

``` markdown
页面右上角加号添加仓库
仓库名使用英文
```

###### 2.6.6.3 关联本地仓库与远程仓库

``` bash
#先创建一个本地仓库
$ git remote add 名称 仓库地址(SSH)
#可以做两次不同远程仓库的关联
#git默认名称origin,可修改。
$ git push -u 名称 master
#本地仓库的内容推送到远程库
#第一次推送＋-u,git不但会把本地的master分支推送到远程库的master分支，还会把本地的master分支跟远程库的master分支关联起来，关联以后可简化指令不用加u。
$ git pull 名称 分支名
#将远程库的内容推送到本地
#在远程仓库界面查看克隆和下载选项可得到ssh链接
#在push之前先从远程仓库拉取再合并
```

###### 2.6.6.4 解除本地仓库与远程仓库关联

``` bash
$ git remote -v
#查看远程库信息
GitLearning     git@gitee.com:damnjone/git-lerning.git (fetch)
GitLearning     git@gitee.com:damnjone/git-lerning.git (push)
#根据名字进行删除
$ git remote rm GitLearning
#删除选定远程库
```

###### 2.6.6.5 克隆远程仓库

``` bash
$ git clone 地址
#在本地运行克隆指令后，会新建一个仓库目录
```

#### 2.7 Gdb调试工具

##### 2.7.1 启动与退出

``` markdown
启动GDB：使用gdb [可执行文件名]命令启动GDB，并装入想要调试的可执行文件。
退出GDB：使用quit或简写为q命令退出GDB调试器。
```

##### 2.7.2 程序运行控制

``` markdown
运行程序：使用run或简写为r命令启动或重启被调试的程序。如果程序已经启动，再次输入run会重启程序。
继续执行：使用continue或简写为c命令让程序继续运行，直到遇到下一个断点或程序结束。
单步执行：
next或简写为n：单步执行，遇到函数调用时不会进入函数体内部，而是直接跳过。
step或简写为s：单步执行，遇到函数调用时会进入函数体内部。
跳转到指定位置：使用jump命令让程序执行流跳转到指定位置执行。
```

##### 2.7.3 断点管理

``` markdown
设置断点：
break或简写为b：在指定行号、函数名或程序地址处设置断点。例如，break 10在第10行设置断点，break main在main函数入口处设置断点。
设置条件断点：break 10 if i==5在第10行设置条件断点，当i等于5时触发。
查看断点：使用info break或简写为i b命令查看当前设置的断点信息。
删除断点：
delete：删除指定编号的断点，如delete 1删除编号为1的断点。
delete不加编号时，删除所有断点。
clear命令用于删除指定位置处的所有断点，如clear 10删除第10行上的所有断点。
启用/禁用断点：使用enable和disable命令启用或禁用指定编号的断点。
```

##### 2.7.4 查看与修改

``` markdown
查看源代码：使用`list`或简写为`l`命令查看当前文件的源代码。可以指定行号或函数名来查看特定部分的代码。
查看变量值：使用`print`或简写为`p`命令查看变量的值。也可以输出特定表达式的计算结果。
修改变量值：使用`set var`命令在调试过程中修改变量的值，如`set var i=10`将变量`i`的值修改为10。
```

##### 2.7.5 其他常用命令

``` markdown
查看堆栈信息：使用`backtrace`或简写为`bt`命令查看当前线程的调用堆栈。
自动查看变量：使用`display`命令在每次断点处自动显示指定变量的值。使用`undisplay`命令取消自动显示。
监视变量：使用`watch`命令监视变量的值，当变量的值发生变化时，程序会停止执行。
查看当前线程：使用`info thread`命令查看当前进程中的所有线程信息。
切换线程：使用`thread`命令切换到指定编号的线程进行调试。
```

### 三、C语言基础

#### 	3.1 语言特性

``` markdown
面向过程、面向对象、泛型编程
```

#### 	3.2 语言发展过程

##### 3.2.1 机器语言示例

``` plaintext
010110110101010
```
##### 3.2.2 汇编语言示例

``` assembly
mov eax, n
add eax, 2
mov n, eax
```
##### 3.2.3 高级语言示例

``` c
n=n+2;
```
##### 3.2.4 语言发展过程

``` mermaid
graph TD
A[Java]-->B[JVM]
B-->C[Linux、Windows]
D[C/C++系统级语言]-->E[汇编语言]
E-->F[硬件]

```

``` markdown
机器语言->汇编语言
(会汇编语言薪资更高)
C++语言高效
用于多数大规模项目开发
```

#### 	3.3 C语言概念

``` c
//工业级C语言一般采用C89(ANSI C)标准
//开发阶段一般使用C99标准
```
#### 	3.4 C语言概要

``` markdown
语句、表达式、数据类型、变量、占用字节数、输入输出
运算操作符（算术、位、逻辑、关系）
循环
分支
数组（一维数组、二维数组）
函数（返回值类型，参数传递方式，封装）
复杂函数（递归函数，静态函数，回调函数，变参函数）
指针（定义、运算、一级指针、二级指针）
内存管理
字符串指针、字符数组、内存分布
复杂数据结构（结构体、大小、结构体数组、共用体、枚举、复杂宏定义，条件编译）
代码评审
```

#### 	3.5 编程开发工具

##### 3.5.1 Windows平台

``` markdown
Windows平台：Visual Studio IDE（Office, Wps, QQ, Wechat) 游戏
```

##### 3.5.2 Linux平台

``` markdown
Ubuntu：编辑器vim emacs VSCode、编译器GCC、调试器GDB（分部件）
Git：代码管理工具
```



#### 	3.6 C语言学习

##### 3.6.1 简单C程序示例

``` c
//第一个简单C程序
#include<stdio.h>
//由<>定义的处于系统文件
//由""定义的处于当前目录
//包含头文件
//主函数也是被调用的函数
//返回值最好是int类型，返回0代表结果正常
int main(int argc, char* argv[])
//标准main函数
//argc 参数个数 char* argv[]字符指针数组
//cd E:\文件
//argv[0]="cd"
//argc[1]="E:\文件"
{
    printf("Hello, World\n");
    //语句以分号结尾
    return 0;
}
//分组以花括号表示
//代码结束，会进行资源管理工作
```

##### 3.6.2 C语言编译过程

``` bash
#Linux环境编译C代码

#gcc编译程序：依赖于.h .so .a
gcc Test.c -o Test
#编译Test.c文件，不添加-o Test的话会生成一个Test.out文件
#生成的文件为可执行文件
#四个步骤一气呵成
gcc Test.c -o Test.i -E
#预处理，展开头文件
gcc Test.i -o Test.s -S
#编译，汇编文件
gcc Test.s -0 Test.o -c
#汇编，机器语言
gcc Test.o -o Test.out
#链接，生成可执行二进制文件

#-l 链接某个库，如 libabc.so -labc libabc.a -labc libabc.a or libabc.so
libaaa.a -laaa.a
#-L 指定库目录 如-L/mnt/hgs
readelf -a Test
#查看文件信息
#-I 指定头文件目录

#.dll .so动态链接库
#.lib .a静态链接库

#程序=数据结构+算法
#可执行文件=代码+数据+依赖+依赖库中的函数地址
```

``` mermaid
graph LR
A[源代码Test.c]-->B[预处理Test.i（展开头文件等）]
B-->C[汇编Test.s]
C-->D[编译Test.o（汇编语言文件）]
D-->E[链接Test.out]
```

##### 3.6.3 内存分区模型

###### 3.6.3.1 数据存放

``` markdown
代码区：存放函数体的二进制代码
全局区：存放全局变量和静态变量以及常量
栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
```
###### 3.6.3.2 内存分布图解

```  mermaid
graph TD
A[内存]-->B[代码区]
A-->C[全局数据区]
A-->D[堆区]
A-->E[栈区]

```

##### 3.6.4 进制

###### 3.6.4.1 常见进制及转换

``` markdown
八进制和十六进制方便阅读和使用。
N进制->十进制:Σ(位值×权值)
十进制->N进制:短除法（侧列逆写）
十进制小数->二进制:循环Num×2,进位则1，不进位则0
```

##### 3.6.5 变量

###### 3.6.5.1 变量作用

``` c
//变量和常量用于表示内存某一块区域
//变量标识的这一区域可以修改
```

###### 3.6.5.2 常见变量

``` C
//Linux64平台下的大小
char ch;//1 Byte
short sh;//2 Byte
int i;//4 Byte
long l;//8 Byte
long long ll;//8 Byte
float f;//4 Byte
double d;//8 Byte
//Linux32平台下的大小
long l;//4 Byte
double Size=sizeof(Element Type);
//sizeof()是运算符，在编译期间即计算出大小
//所有类型的数据都以二进制补码的形式存储
```

###### 3.6.5.3 声明赋值和初始化

``` c
//声明，在内存栈区开辟一块内存空间用于存放变量。
//类型+变量名称
int i;
i=10;//赋值
//初始化
int j=10;
//只声明不初始化，内存中含有脏数据
//初始化比声明赋值速度快，不用执行赋值语句
//全局变量不初始化，默认值为0
//全局变量位于全局数据区
//局部变量不初始化，默认为脏数据；
//局部变量位于栈区
//企业级开发默认初始化，便于阅读代码
int i=1.9827;
//当将浮点型赋值给整型，只保留整数部分，即i=1
```

###### 3.6.5.4 整数数据类型

``` markdown
有符号的数=最高位符号位+有效数据位
无符号的数=所有的位都是有效的数据位
```

###### 3.6.5.5 小数数据类型

``` markdown
1.十进制：1.2345
2.指数方式：2.1E7 1.3E-5(大小写皆可)
```

``` c
float f = 1.23;
double d = 2.1e5;
printf("%f\n", f);
printf("%lf\n", d);
printf("%e\n", f);
printf("%E\n", f);
printf("%le\n", d);
printf("%lE\n", d);
//%f 用十进制打印float
//%lf 用十进制打印double
//%e 以指数形式输出float类型（小写e)
//%E 以指数形式输出float类型（大写E）
//%le 以指数形式输出double类型（小写e)
//%lE 以指数形式输出double类型（大写E）
printf("%g\n", f);
printf("%g\n", d);
//%g/%G 以最短的形式输出小数，最多保留6位，不会添0
```

###### 3.6.5.6 字符数据类型

``` c
char a='a';
printf("%c\n",a);
//以字符形式打印
//中文等特殊字符存储超过一个char的大小
//考虑用int等进行特殊字符的存储
//转义字符'\n'等为一个字符
char a='\n';//换行符
char b='\t';//制表符
char d='\104';//三位，不带x表示用8进制表示一个数
char f='\x23';//16进制转义字符
char g=0x23;//16进制表示一个字符#
```

###### 3.6.5.7 字符串类型表示

``` c
char str[]="这是一个字符串";
const char* str="这是一个字符串";
pintf("%s\n",str);
puts(str);
```

###### 3.6.5.8 数据类型转换

``` c
//自动转换
int value=10.73
//由浮点型自动转换为整型，舍弃.73
//存储小的会自动的向存储大的转换
//数据类型相同的情况下
//有符号数会转换为无符号数
//强制转换
double sum=(double)10/3;
//"宽"数据向"窄"数据转换
//会截取低位数据
//注意数据一输入到计算机就以补码形式存储
//！！！截取也是在补码上进行操作的
//低类型向高类型转换，是在原码的基础上补0，再转换为补码
//直接操作补码，则负数补1，正数补0
```

###### 3.6.5.9 计算机数据存储

``` markdown
原码:本身
反码:原码取反（除了符号位都取反）
补码:正数，补码=原码;负数，补码=原码取反+1
!!!整数的反码补码都与原码一致
计算机中所有的数据都使用补码存储
!!!截断的基础是在数据的补码上
原码的加减运算都能转换为对应补码的加运算
有效精简了运算电路（只用设计加法计算器）
例：-129
	原码：1 1000 0001
	反码：1 0111 1110
	补码：1 0111 1111
	当将-129赋值给一个字节的char类型时，
	截取补码的8位，即0111 1111，结果为127
	注意数据一输入到计算机就以补码形式存储
	！！！截取也是在补码上进行操作的
例：-8在8位系统中的表示
	原码：10001000
	反码：11110111
	补码：11111000
1 B(Byte) = 8 b(bit)
1 kB = 1024 B
1 kb = 1024 b
ASCII编码
```

##### 3.6.6 标准输入输出

###### 3.6.6.1 输出语句

``` c
int Base_2 = 0b100;  // 2进制
int Base_8 = 0100;   // 8进制
int Base_10 = 100;   // 10进制
int Base_16 = 0x100; // 16进制

printf("100(2)=%d\n", Base_2);
printf("100(8)=%d\n", Base_8);
printf("100(10)=%d\n", Base_10);
printf("100(16)=%d\n", Base_16);
// 以十进制输出不同进制数

printf("100(8)=%o\n", Base_8);
// 以八进制格式输出

printf("100(16)=%x\n", Base_16);
// a~f以小写输出
printf("100(16)=%X\n", Base_16);
// A~F以大写输出
printf("100(16)=%#x\n", Base_16);
// 带0x前缀，a~f以小写输出
printf("100(16)=%#X\n", Base_16);
// 带0x前缀，A~F以大写输出

float floatNum = 1.2345;
printf("f=%.3f", floatNum);
// 精度控制3位小数

char str[] = "这是一个字符串";
printf("%s\n", str);

puts(str); // 输出字符串
putc(ch);  // 输出字符
// 会自动换行

printf("%%");
// 两个百分号才会输出一个百分号
//%d 输出10进制的有符号数int类型
//%x 输出16进制的int类型
//%X 大写输出16进制的int类型
//%u 输出10进制的无符号的int类型

//程序需要刷新缓冲区
//'/n'或用fflush(std)
```

###### 3.6.6.2 输入语句

``` c
int a=0;
scanf("%d",&a);
char str[100];
scanf("%s",str);
//str 作为数组首元素地址传入
//%d 输入10进制的有符号数int类型
//%x 输入16进制的int类型
//%u 输入10进制的无符号的int类型
//%s 输入字符串
//程序运行时遇到sanf函数，程序会挂起
scanf("%d+%f-%u %s",&a ,&b, &u, %s);
//控制台应该严格输入格式
//如此时10+10.0-16 字符串
```

##### 3.6.7 标识符

###### 3.6.7.1 定义

``` c
//变量名、函数名、宏定义所有的名称即为标识符
```

###### 3.6.7.2 命名规范

``` c
//标识符只能以字母、下划线、美元符号开头
//不能使用关键字作为标识符
```

##### 3.6.8 关键字

###### 3.6.8.1 定义

``` c
//有特殊含义的名称称关键字
```

###### 3.6.8.2 常见关键字

``` c
//数据类型
// int short long char float double void struct union signed unsigned enum

//控制语句
//for while do while do break continue
//if else switch case goto case default
//return

//存储类型
//auto static extern regigster(寄存器)

//其它
//const sizeof typedef volatile
```

##### 3.6.9  运算符

###### 3.6.9.1 算数运算符

``` c
int x=1;
int y=2;
int result=0;
result=x+y;//加法
result=x-y;//减法
result=x*y;//乘法
result=x/y;//除法
result=x%y;//取余

x=x <operation> <num>;
x <operation>=<num>;
//一种语句的简写方式

Num++;
//先参与计算后自增
++Num;
//先自增后参与计算
```

###### 3.6.9.2 关系运算符

``` c
int a = 5;
int b = 3;
printf("%d < %d=%d\n", a, b, a < b);
printf("%d <= %d=%d\n", a, b, a <= b);
printf("%d > %d=%d\n", a, b, a > b);
printf("%d >= %d=%d\n", a, b, a >= b);
printf("%d == %d=%d\n", a, b, a == b);
printf("%d != %d=%d\n", a, b, a != b);
//运算结果为0或1
```

###### 3.6.9.3 位运算符

``` c
//按位取反 ~
//按位与 &
//按位或 |
//异或 ^
//左移 << 扩大进制倍
//右移 >> 缩小进制倍

//最右侧算作0位
int a=3;
int b=5;
a=a^b;
b=a^b;
a=a^b;
//交换两个数(通过异或运算)
```

###### 3.6.9.4 逻辑运算符

``` c
int a=0,b=1;
&& //逻辑与
|| //逻辑或
！ //逻辑非
```

###### 3.6.9.5 三元运算符

``` c
int age=20;
int result=age>18? 1:0;
```

###### 3.6.9.5 运算符优先级

``` markdown
单目右>单目左>算术>关系>逻辑单>逻辑双>逻辑三>赋值>逗号
逻辑非运算符>算术运算符>关系运算符>与、或逻辑运算符>赋值运算符
```

##### 3.6.10 随机数

###### 3.6.10.1 分类

``` markdown
真随机数
伪随机数
c语言一般实现伪随机数
```

###### 3.6.10.2 时间实现

``` c
#include<time.h>
time_t seconds=time(0);
srand(seconds);//设置随机数种子
//随机数种子只需要初始化一次
//如果将取随机数封装函数使用
//初始化种子应放在main函数中
int n=rand()%8;//0~8之间的数，不包括8;
```

##### 3.6.11 分支和循环结构

###### 3.6.11.1 分支结构if...else

``` c
int num01=5;
int num02=10;
int num03=15;
if(num01==5)
    printf("num01>num02");
//单if语句
if(num01>num02)
    printf("num01>num02");
else
    printf("num01<num02");
//if...else组合
if(num01>num02)
    printf("语句1");
else if(num01>num03)
    printf("语句2");
else 
    printf("语句3");
//if...else if...else组合
if(num01>num02)
    if(num01>num03)
        printf("语句");
//嵌套if组合
//if条件表达式可以使用逻辑运算符
//条件判断，从上至下依次判断
//判断条件依次递增即可
//浮点数比较
//浮点数本身不准确，不能用==简单比较
//用差值比较精度，（可以作四舍五入的条件）
float f=0.5;
int abs=0.00001;
if((f-0.5)<=abs)
    printf("true\n");
```

###### 3.6.11.2 选择结构switch case

``` c
<Type> Option;
scanf("%<>",&Option);
//Option的值只能是整型，字符型，枚举型
switch(Option)
{
    case <value01>:
        <code01>;
        break;
    case <value02>:
        <code02>;
        break;
    default:
        <code03>;
        break;
}
```

###### 3.6.11.2 循环结构while

``` c
while(<条件表达式>)
    //当条件表达式为真时进入循环
    //需要有循环退出条件，避免死循环
    //在Linux下死循环用Ctrl+c退出死循环
    //可能一次都不会执行
```

###### 3.6.11.3 循环结构do{ }while( )

``` c
do{
    <code block>
}while(<条件>);
//至少会执行一次
```

###### 3.6.11.4循环结构for

``` c
int i=0;
int sum=0;
for(i;i<101;i++)
{
    //语句2条件为真时执行代码块
    //语句2条件为假时退出循环
    sum=sum+i;
}
//for(语句1;语句2;语句3)
//先执行语句1
//再执行条件判断语句2
//后执行语句3
//break可用于退出循环
//continue结束本次循环，进入下一次循环
```

###### 3.6.11.5 goto语句

``` c
label:
//标签，记录goto点
	if(i<10)
    {
        printf("i = %d\n",i);
        i++;
        goto label;
    }
//用goto语句模拟循环
```

##### 3.6.12 数组

###### 3.6.12.1 数组概念

``` c
<Typename> <ArrayName>[<size>];
//一片用于存储同类型元素的存储空间
//C中，创建时是静态，已经确定了大小
//元素的类型也是数组的类型
//通常情况下数组名代表首元素地址
//数组下标从0开始
int Test01[100];
//定长数组
int Test02[]={1,2,3,4,5};
//柔性数组
int n=0;
scanf("%d",n);
int array[n];
//变长数组，此操作不推荐，只能在Linux Gcc下编译
//*(<ArrayName>+i)
//数组的底层逻辑是指针
//在sizeof(ArrayName)和&ArrayName中ArrayName代表整个数组
//&ArrayName==><Type> (*)[Size];
//指向整个数组的指针
```

###### 3.6.12.2 数组内存占用

``` c
printf("数组占用内存的大小：%d",sizeof(<ArrayName>));
//求取数组占用内存
```

###### 3.6.12.2 数组初始化

``` c
int Array[4]={0,1,2,3};
int Test03[100]={1,2,3};
//数组长度为100，前三个元素初始化为1、2、3
//后面元素全部初始化为0；
int Array[100]={[0 ... 30]=10,[31 ... 60]=20,[61 ... 99]=30};
//范围初始化，此操作不推荐，只能在Linux Gcc下编译
<ArrayName>[Index]=<Value>;
//数组元素的赋值
```

###### 3.6.12.3 数组遍历

``` c
int Array[100];
for(int i=0;i<100;i++)
{
    printf("%d",Array[i]);
}
//循环遍历时的范围是数值，称魔术字
//在修改数组大小时，需要同步修改遍历范围
//在正式开发中不推荐，易出错
int length=sizeof(Array)/sizeof(Array[0]);
//通过这种方法获取数组长度更易于维护
```

###### 3.6.12.4 二维数组

``` c
int array[3][4]=
{//子数组可不带括号
    //可只初始化部分元素，其余元素补0
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
};
//初始化时，行和列至少需要列数
//数组初始化不能存在歧义
//二维数组在C语言的存储形式为线性存储
//逻辑上是矩阵存储
int rows=sizeof(array)/sizeof(array[0]);
int cols=sizeof(array[0]/sizeof(array[0][0]));
//获取二维数组行数列数
int temp=*((*array+i)+j);
//用指针访问二维数组
// *(array + i) 是指向 array 中第i+1个子数组的指针
//+ j指向这个子数组中的第j+1个元素（索引为j）
//*((*array+i)+j)即为该元素的值
```

###### 3.6.12.5 多维数组

``` c
int array[i][j][k];
//平常很难遇到，初始化与一二维数组类似
```

#### 3.7 数据结构

##### 3.7.1 排序

###### 3.7.1.1 冒泡排序

``` c
void BubblingSort(int array[], int size)
{
	int j = 0;
	for (j; j < size - 1; j++)
	{
		int i = 0;
		for (i; i < size - 1 - j; i++)
         //只用对未排序的部分进行操作
         //如果用size-1,会进行无效遍历
		{
			if (array[i] > array[i + 1])
			{
				Swap(&array[i], &array[i + 1]);
			}
		}
	}
}
```

###### 3.7.1.2 选择排序

``` c
void SelectSort(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{//n个元素n-1轮
		int MinIndex = i;
		for (int j = i+1; j < size; j++)
		{
			if (array[MinIndex] > array[j])
			{
				MinIndex = j;//直接更新下标
			}
		}
		if (MinIndex != i)
		{
			Swap(&array[MinIndex], &array[i]);
		}
	}
}
```

