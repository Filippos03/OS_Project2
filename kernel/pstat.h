struct pstat {
    int pid[NPROC];
    int ppid[NPROC];
    char name[NPROC][16];
    int pty[NPROC];
    enum procstate state[NPROC];
    uint64 sz[NPROC];
    int active_proc;
};