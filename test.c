#include <stdio.h>

int main() {
   // printf() displays the string inside quotation
  int testVar = 20;
  int *ip;

  ip = &testVar;

      /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );
    printf("Address of var variable: %x\n", *ip);
}