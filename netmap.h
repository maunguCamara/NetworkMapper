#include _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h> 
#include <stdbool.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;

in_addr_t generate(void);
int main(int, char)
