#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define NPROC 64
enum procstate { UNUSED, USED, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

struct pstat {
    int pid[NPROC];
    int ppid[NPROC];
    char name[NPROC][16];
    int pty[NPROC];
    enum procstate state[NPROC];
    uint64 sz[NPROC];
    int active_proc;
};

int main(){
    struct pstat ps;
    //setpriority(14);
    getpinfo(&ps);
    exit(0);
}