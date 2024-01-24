#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define NPROC 64
enum procstate { UNUSED, USED, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };


// void printps(struct pstat ps){
//     printf("NAME        PID     PPID    PTY     STATE    SIZE\n");
//     for (int i = 0; i<ps.active_proc; i++){
//         printf("%s          %d      %d      %d      %d        %d\n", ps.name[i]
//         , ps.pid[i], ps.ppid[i], ps.pty[i], ps.state[i], ps.sz[i]);
//     }
// }




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
    setpriority(14);
    printf("GETPINFO: %d\n",getpinfo(&ps));
    printf("Active procs (pls be smth >0): %d\n", ps.active_proc);
    exit(0);
}