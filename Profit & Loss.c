//
//  main.c
//  Profit & Loss
//
//  Created by Nimish Vadgaonkar on 12/12/22.
//
#include <stdio.h>
#include <math.h>
int main()
{
    int cp,sp, amt;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("\nEnter selling price: "); scanf("%d", &sp);
    if(sp > cp)
    {
        amt = sp - cp;
        printf("\nProfit = %d\n\n", amt); }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("\nLoss = %d\n\n", amt);
        
    }
    else
    {
        printf("\nNo Profit No Loss.\n\n");
    }
    return 0;
}

