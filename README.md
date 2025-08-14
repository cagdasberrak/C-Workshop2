# C Workshop 2: Shirt Store Pricing and Sales Calculation

This project is a C programming workshop assignment consisting of two parts.

## Part-1
- Prompts the user to enter prices for three different shirt sizes (SMALL, MEDIUM, LARGE).
- Displays the shirt price list.
- Calculates the sub-total, taxes, and total for the number of shirts the user wants to buy.
- Monetary values are stored in cents to prevent rounding errors.
- Outputs prices with proper precision (both integer and decimal parts).

## Part-2
- Builds on Part-1 by handling multiple customers.
- Displays customer purchase details in a formatted table.
- Calculates sub-totals, taxes, and totals for each customer.
- Distributes total sales into different coin denominations (Toonies, Loonies, Quarters, Dimes, Nickels, Pennies).
- Computes and displays the average cost per shirt.
- Uses cent-based calculations and rounding rules to avoid data loss.

## Usage
Compile the programs with GCC:

  ```bash
  gcc -Wall -Werror w2p1.c -o prg_w2p1
  gcc -Wall -Werror w2p2.c -o prg_w2p2
