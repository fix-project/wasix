
#include <pwd.h>

static struct passwd PASSWD_INFO = {
    "",
    "",
    0,
    0,
    "",
    "/",
    "bash"
};

struct passwd *getpwnam(const char *name) {
    return &PASSWD_INFO;
}

struct passwd *getpwuid(uid_t uid) {
    return &PASSWD_INFO;
}

int getpwnam_r(const char *name, struct passwd *pwd,
	       char *buf, size_t buflen,
	       struct passwd **result)
{
  pwd = &PASSWD_INFO;
  result = &pwd;
  return 0;
}

int getpwuid_r(uid_t uid, struct passwd *pwd,
	       char *buf, size_t buflen,
	       struct passwd **result)
{
  pwd = &PASSWD_INFO;
  result = &pwd;
  return 0;
}
