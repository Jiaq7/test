#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <sys/socket.h>
#include <sys/unistd.h>
#include <sys/types.h>
#include <sys/errno.h>
#include <netinet/in.h>
#include <signal.h>

#define BUFFSIZE 2048
#define DEFAULT_PORT 16555    // 指定端口为16555
#define MAXLINK 2048
int main(int, char**){
    struct sockaddr_in servaddr;    // 用于存放ip和端口的结构
    char buff[BUFFSIZE];    // 用于收发数据
    
}
