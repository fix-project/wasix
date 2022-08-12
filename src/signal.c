
#include <errno.h>
#include <signal.h>
#include <sys/stat.h>
#include <unimplemented.h>

typedef int pid_t;

int kill(pid_t pid, int sig) {
    (void)unimplemented(errno);
    return -1;
}

int sigaction(int sig, const struct sigaction *__restrict sa, struct sigaction *__restrict old) {
    (void)unimplemented(ENOTSUP);
    return -1;
}

int sigemptyset(sigset_t * set) {
    (void)unimplemented(ENOTSUP);
    return -1;
}

int sigfillset(sigset_t * set) {
    (void)unimplemented(ENOTSUP);
    return -1;
}

int sigaddset(sigset_t * set, int sig) {
    (void)unimplemented(ENOTSUP);
    return -1;
}

int sigprocmask(int how, const sigset_t *__restrict set, sigset_t *__restrict old) {
    (void)unimplemented(ENOTSUP);
    return -1;
}
