#include <sys/statvfs.h>

int statvfs (const char *__restrict path, struct statvfs *__restrict buf) {
  buf->f_bsize = 0;
  buf->f_blocks = 0;
  buf->f_bfree = 0;
  buf->f_bavail = 0;
  buf->f_flags = MNT_LOCAL;
  return 0;
}

int fstatvfs (int fd, struct statvfs *buf) {
  buf->f_bsize = 0;
  buf->f_blocks = 0;
  buf->f_bfree = 0;
  buf->f_bavail = 0;
  buf->f_flags = MNT_LOCAL;
  return 0;
}
