#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){

    printf("Hello world!!!\n");
    uint64 free_bytes = freemem();
    printf("Free memory in bytes: %d\n", free_bytes);
    exit(0);

}