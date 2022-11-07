

#include <stdio.h>

int
main ()
{
  int num, rev = 0, tmp, rem;
  printf ("enter the number:");
  scanf ("%d", &num);
  tmp = num;

  while (num != 0)
    {
      rem = num % 10;
      rev = rev * 10 + rem;
      num /= 10;
    }
  printf ("\treversed:%d", rev);
  return 0;
}
