
#include <sys/wait.h>
#include <errno.h>
#include <unimplemented.h>


pid_t wait(int *wstatus) {
    (void)unimplemented(ENOTSUP);
    return -1;
}

pid_t waitpid(pid_t pid, int *wstatus, int options) {
    (void)unimplemented(ENOTSUP);
    return -1;
}

pid_t wait4 (pid_t pid, int *status, int options, struct rusage *usage) {
    (void)unimplemented(ENOTSUP);
    return -1;
}
