#include<stdio.h>
int
main ()
{
  int a, b, t;
  printf ("Enter two numbers 'a' and 'b':");
  scanf ("%d%d", &a, &b);
  printf ("a=%d\nb=%d\n", a, b);
  t = a;
  a = b;
  b = t;
  printf ("After swapping, the values are:\na=%d\nb=%d\n", a, b);
  return 0;
}
