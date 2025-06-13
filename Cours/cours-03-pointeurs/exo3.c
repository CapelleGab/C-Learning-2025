#include <stdio.h>

void increment(int *p) { (*p)++; }

int main(void) {
  int val = 27;
  increment(&val);
  printf("%d \n", val);
  return 0;
}
