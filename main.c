//
//  main.c
//  Prime Number
//
//  Created by Nimish Vadgaonkar on 12/12/22.
//
#include <stdio.h>

int main()
{
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  
  for (i = 1; i <= n; i++)
  {
      if (n % i == 0)
      {
         c++;
      }
  }

  if (c == 2)
  {
        printf("%d is a Prime number\n",n);
  }
  else
  {
         printf("%d is not a Prime number\n",n);
  }
  return 0;
}
