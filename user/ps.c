#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){

    setpriority(5);
    setpriority(24);
    setpriority(4);
    setpriority(-3);
    exit(0);
}