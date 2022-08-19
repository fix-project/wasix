
#include <stdlib.h>
#include <string.h>

char* realpath(const char* path, char* resolved_path) {
  if (resolved_path == NULL) {
    resolved_path = strdup(path);
  } else {
    strncpy(resolved_path, path, 4096);
  }
  return resolved_path;
}
