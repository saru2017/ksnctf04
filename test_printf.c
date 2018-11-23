#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  short int b;
  char c;
  printf("%s,%n\n", "hello", &a);
  printf("%d\n", a);
  printf("%s,%hn\n", "blue", &b);
  printf("%d\n", b);
  printf("%s,%hhn\n", "yellow", &c);
  printf("%d\n", c);


  printf("%s,%n,%s,%hn\n", "hello", &a, "blue", &b);
  printf("a = %d, b = %d\n", a, b);
}
