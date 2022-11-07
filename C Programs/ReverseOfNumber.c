/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
