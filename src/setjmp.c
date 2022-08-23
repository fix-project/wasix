#include <setjmp.h>


int setjmp (jmp_buf env) {
  return -1;
}

void longjmp (jmp_buf env, int savesigs) {
  return;
}
