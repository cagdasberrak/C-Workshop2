/*
*****************************************************************************
                          Workshop - #2 (P2)


*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    float sPrice, mPrice, lPrice;
    int shirtCountP;
    int shirtCountS;
    int shirtCountT;
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
    scanf ("%d",&shirtCountP);

    printf("\nTommy's shirt size is '%c'\n",tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf ("%d",&shirtCountT);
    printf("\nSally's shirt size is '%c'\n",salSize);
    printf("Number of shirts Sally is buying: ");
    scanf ("%d",&shirtCountS);
    
    
    
   
    //calculate the amount to be paid from Patty
    int subTotalP = shirtCountP * sPrice * 100 + 0.5;
    int taxesP = TAX * subTotalP + 0.5;
    int totalP = taxesP + subTotalP + 0.5;
    //calculate the amount to be paid from Sally
    int subTotalS = shirtCountS * mPrice * 100 + 0.5;
    int taxesS = TAX * subTotalS + 0.5;
    int totalS = taxesS + subTotalS + 0.5;
    //calculate the amount to be paid from Tommy
    int subTotalT = shirtCountT * lPrice * 100 + 0.5;
    int taxesT = TAX * subTotalT + 0.5;
    int totalT = taxesT + subTotalT + 0.5;
    //calculate totals
    subTotal = subTotalP + subTotalS + subTotalT;
    taxes = taxesP + taxesS + taxesT;
    total = taxes + subTotal;

    printf("\nCustomer Size Price Qty Sub-Total%9s%9s\n","Tax","Total");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%-8s %-4c %-5.2f %3d %9.4f %9.4f %9.4f\n","Patty", patSize,sPrice,
          shirtCountP, subTotalP/100.0, taxesP/100.0, totalP/100.0);
    printf("%-8s %-4c %-5.2f %3d %9.4f %9.4f %9.4f\n","Sally", salSize,mPrice,
          shirtCountS, subTotalS/100.0, taxesS/100.0, totalS/100.0);
    printf("%-8s %-4c %-5.2f %3d %9.4f %9.4f %9.4f\n","Tommy", tomSize,lPrice,
          shirtCountT, subTotalT/100.0, taxesT/100.0, totalT/100.0);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n",subTotal/100.0,taxes/100.0,total/100.0);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    
   //Sales excluding taxes
   int ex_tax_balance = subTotal;
   int toonies_ex, loonies_ex, quarters_ex, dimes_ex, nickels_ex, pennies_ex;

   toonies_ex = ex_tax_balance / 200;
   ex_tax_balance %= 200;

   loonies_ex = ex_tax_balance / 100;
   ex_tax_balance %= 100;

   quarters_ex = ex_tax_balance / 25;
   ex_tax_balance %= 25;

   dimes_ex = ex_tax_balance / 10;
   ex_tax_balance %= 10;

   nickels_ex = ex_tax_balance / 5;
   ex_tax_balance %= 5;

   pennies_ex = ex_tax_balance;
   ex_tax_balance = 0;

    printf("Sales EXCLUDING tax\n");
    printf("%-8s %3s %9s\n","Coin","Qty","Balance");
    printf("-------- --- ---------\n");

    ex_tax_balance = subTotal;
    printf("%22.4lf\n",ex_tax_balance/100.0);

    ex_tax_balance -= toonies_ex * 200; 
    printf("Toonies %3d %9.4lf\n", toonies_ex, ex_tax_balance / 100.0);

    ex_tax_balance -= loonies_ex * 100;
    printf("Loonies %3d %9.4lf\n", loonies_ex, ex_tax_balance / 100.0);

    ex_tax_balance -= quarters_ex * 25;
    printf("Quarters%3d %9.4lf\n", quarters_ex, ex_tax_balance / 100.0);

    ex_tax_balance -= dimes_ex * 10;
    printf("Dimes   %3d %9.4lf\n", dimes_ex, ex_tax_balance / 100.0);
    
    ex_tax_balance -= dimes_ex * 5;
    printf("Nickels %3d %9.4lf\n", nickels_ex, ex_tax_balance / 100.0);

    ex_tax_balance -= pennies_ex;
    printf("Pennies %3d %9.4lf\n\n", pennies_ex, ex_tax_balance / 100.0);
    
    int totalQty = shirtCountP + shirtCountS + shirtCountT;
    int avrg_cost_ex = (subTotal * 100 + (totalQty / 2)) / totalQty;

    printf("Average cost/shirt: $%.4lf\n\n", avrg_cost_ex / 10000.0);


   //Sales including taxes
   int in_tax_balance = total;
   int toonies_in, loonies_in, quarters_in, dimes_in, nickels_in, pennies_in;

   toonies_in = in_tax_balance / 200;
   in_tax_balance %= 200;

   loonies_in = in_tax_balance / 100;
   in_tax_balance %= 100;

   quarters_in = in_tax_balance / 25;
   in_tax_balance %= 25;

   dimes_in = in_tax_balance / 10;
   in_tax_balance %= 10;

   nickels_in = in_tax_balance / 5;
   in_tax_balance %= 5;

   pennies_in = in_tax_balance;
   in_tax_balance = 0;

    printf("Sales INCLUDING tax\n");
    printf("%-8s %3s %9s\n","Coin","Qty","Balance");
    printf("-------- --- ---------\n");

    in_tax_balance = total;
    printf("%22.4lf\n",in_tax_balance/100.0);

    in_tax_balance -= toonies_in * 200; 
    printf("Toonies %3d %9.4lf\n", toonies_in, in_tax_balance / 100.0);

    in_tax_balance -= loonies_in * 100;
    printf("Loonies %3d %9.4lf\n", loonies_in, in_tax_balance / 100.0);

    in_tax_balance -= quarters_in * 25;
    printf("Quarters%3d %9.4lf\n", quarters_in, in_tax_balance / 100.0);

    in_tax_balance -= dimes_in * 10;
    printf("Dimes   %3d %9.4lf\n", dimes_in, in_tax_balance / 100.0);
    
    in_tax_balance -= nickels_in * 5;
    printf("Nickels %3d %9.4lf\n", nickels_in, in_tax_balance / 100.0);

    in_tax_balance -= pennies_in;
    printf("Pennies %3d %9.4lf\n\n", pennies_in, in_tax_balance / 100.0);
    
    int avrg_cost_in = ((total * 100) + totalQty/2) / totalQty;

    printf("Average cost/shirt: $%.4lf\n\n", avrg_cost_in / 10000.0);

    return 0;
}
