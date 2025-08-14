/*
*****************************************************************************
                          Workshop - #2 (P1)

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';
    float sPrice, mPrice, lPrice;
    int shirtCount;
    int subTotal;
    int taxes;
    int total;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",&sPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f",&mPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f",&lPrice);
    
    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n",sPrice);
    printf("MEDIUM : $%.2f\n",mPrice);
    printf("LARGE  : $%.2f\n\n",lPrice);
   
    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf ("%d",&shirtCount);
    
   
    //calculate the amount to be paid
    subTotal = shirtCount * sPrice * 100 + 0.5;
    taxes = TAX * subTotal + 0.5;
    total = taxes + subTotal + 0.5;
    
    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n",shirtCount);
    printf("Sub-Total: $%8.4f\n",subTotal/100.0);
    printf("Taxes    : $%8.4f\n",taxes/100.0);
    printf("Total    : $%8.4f\n",total/100.0);




    return 0;
}
