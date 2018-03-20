#include <stdio.h>
void
main ()
{
  char str[40];
  int i, count = 1;
  printf ("enter the sentence:");
  scanf ("%^\ns", str);
  for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == ' ')
	{
	  count = count + 1;
	}
    }
  printf ("\nno of words=%d", count);
  return 0;
}
