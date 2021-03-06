/*
 * Test program for hello syscall you just added.
 */

#define _GNU_SOURCE
#include <sys/syscall.h>
#include <stdio.h>

/*
 * Find your system call number from syscall_64.tbl.
 */

#define SYS_hello syscall_sequence_number

int main(int argc, char **argv)
{
  if (argc <= 1)
  {
    printf("Please provide a string input.")
    return -1;
  }
  char *arg = argv[1];
  printf("System call running\"%s\".\n", arg);
  long res = syscall(SYS_hello, arg);
  printf("System call returned %ld.\n", res);
  return res;
}
