#include <stdio.h>
#include <pwd.h>
#include <unistd.h>

int
main(void)
{
  struct passwd *user_data = getpwuid(getuid());
  printf("%s\n",user_data->pw_name);
}
