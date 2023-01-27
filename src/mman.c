#include <sys/mman.h>
#include <errno.h>
#include <unimplemented.h>

int mprotect(void * addr, size_t len, int prot)
{
    (void)unimplemented(ENOTSUP);
    return -1;
}
