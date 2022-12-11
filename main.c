//
//  main.c
//  Sum_1-D_Array
//
//  Created by Nimish Vadgaonkar on 10/12/22.
//
#include <stdio.h>
int main()
{
    int n,a[100],sum=0;
    printf("enter numbers of elements you want to store in the array: ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
        printf("Enter the elements of the arrays: ");
        scanf("%d", &a[i]);
        
    }
    for(int i=0; i<n; i++)
    {
        printf("element %d is at %d position of array \n", a[i], i);
    }
    for(int i = 0; i<n; i++)
    {
      sum += a[i];
      
    }
    printf("sum is: %d\n", sum);
    return 0;
}
