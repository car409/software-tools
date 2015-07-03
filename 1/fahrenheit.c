#include <stdio.h>

#define LOWER  0       /* LOWER limit of temperature table */
#define UPPER  300     /* UPPER limit */
#define STEP  20       /* STEP size */

int main() {
  double fahr, celsius;
  
  fahr = LOWER;
  while (fahr <= UPPER) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3.1f\t%6.1f\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}
