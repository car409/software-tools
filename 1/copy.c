#include <sys/param.h>
#include <sys/ucred.h>
#include <sys/mount.h>
#include <stdio.h>
#include <stdlib.h>

/* copy input to output; 1st version */

int main() {
  struct statfs* mounts;
  int num_mounts = getmntinfo(&mounts, MNT_WAIT);
  if (num_mounts < 0) {
    printf("num_mounts was: %d\n", num_mounts);
    exit(1);
  }

  for (int i = 0; i < num_mounts; i++) {
    printf("Disk type '%s' mounted at: %s\n", mounts[i].f_fstypename, mounts[i].f_mntonname);
  } 


  //int c;

  //printf("EOF is: %d\n", EOF);
  //printf("getchar() != EOF 0 or 1? %d\n", getchar() != EOF);
  //c = getchar();
  //while (c != EOF) {
  //  putchar(c);
  //  c = getchar();
 // }
}
