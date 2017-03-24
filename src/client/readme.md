#SOCK_STREAM与SOCK_DGRAM
```
SOCK_STREAM是有保障的（即能保证数据正确传送到对方），是面向连接的，多用于资料（如文件）传送；
SOCK_DGRAM是无保障的面向消息的socket，主要用于在网络上发布广播消息；
可以说，SOCK_STREAM是基于TCP的，数据传送比较有保障；
而SOCK_DGRAM是基于UDP的，专门用于局域网，基于广播的。
SOCK_STREAM是数据流，一般为TCP/IP协议的编程；
SOCK_DGRAM是数据包，一般为UDP协议的网络编程；
UDP特性：
UDP协议适用端口分别运行在同一台设备上的多个应用程序。
具有的特点为：
（1）分组在发送后，可能无序地到达接收端；
（2）分组可能丢失。若发生丢失，则不会采取任何补救措施，而且接收端不必知道有分组丢失；
（3）数据报分组有尺寸大小的限制。若超出限制，在某些路由器和节点上就无法传送；
（4）分组在不建立连接的情况下被发送到远程进程。
TCP特性：
（1）不保留任何消息的边界；
举例说明：本地主机通过两次独立的write(2)调用向远程主机发送数据，第一次本地进程写入25字节的数据，并通过套接口发送到远程进程，第二次再写入30字节的数据发往远程进程，总共55字节的数据，而远程进程从套接口接收数据时，将消息作为一个完整的单元来接收，或是通过若干次独立的读操作来将数据取走，即接受端并不知道这55字节的数据是分25字节和30字节两次来发送的；
（2）有序性 
可以保证接受的数据字节与发送是顺序完全一致（意味着通信之前必须建立一个连接）；
（3）无错性
可以保证接受的数据在接收端被无错的接受。如果有错误发生，在尝试完所有的错误恢复措施后仍无法消除错误，流套接口就会报告错误。所进行的错误恢复措施尝试是完全自动的，不需编程者的指导。
```

#GCC
```
-MT指定了新的target文件名，
-MF指定了依赖关系输出文件，
-MP要求生成所有头文件的phony target,
-MD选项包含以后就不会隐性包含-E了，就能编译下去了。
```

#GCC 语言标准
```
若没有使用-std参数来指定GCC的C标准, 则使用默认的GNUC90标准(GCC对C99和C11支持得不完整), GNUC90标准在C90标准的基础上进行了扩展.
熟知的C标准大概有三种: c90( or c89), c99, c11. 分别于1990年, 1999年, 2011年发布.
在编译的时候指定c90标准: -ansi, -std=c90 or -std=iso9899:1990;
指定C99标准: -std=c99 or -std=iso9899:1999
指定C11标准(目前正在开发中): -std=c11 or -std=iso9899:2011
原来的ANSI C标准(X3.159-1989)在1989年获得批准, 并在1990年发布. 之后(1990年)被批准为ISO标准(ISO/IEC 9899:1990). C89和C90在技术上没有区别.

```