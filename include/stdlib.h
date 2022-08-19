
#ifndef _WASIX_STDLIB_H
#define _WASIX_STDLIB_H

#ifdef __cplusplus
extern "C" {
#endif

#include_next <stdlib.h>

char* realpath(const char* path, char* resolved_path);

#ifdef __cplusplus
}
#endif

#endif
