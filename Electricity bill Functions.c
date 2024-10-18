// Functions
/*
Name : Owaya E Augustine
Reg  : CT101/G/23524/24
Date : 16/10/2024
*/

#include <stdio.h>
#include <math.h>

float calculateChargesPerUnit(int units);
float calculateTotalBill(float chargesPerUnit, int units);
float applySurcharge(float totalBill);
void printBillDetails(int customerID, char customerName[], int unitsConsumed, float chargesPerUnit, float totalAmount);

int main(){
	int customerID, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalBill, totalAmount;
        
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    
     chargesPerUnit = calculateChargesPerUnit(unitsConsumed);
     
      totalBill = calculateTotalBill(chargesPerUnit, unitsConsumed);
      
        totalAmount = applySurcharge(totalBill);
        
        if (totalAmount < 100) {
        totalAmount = 100;
    }
	
	 printBillDetails(customerID, customerName, unitsConsumed, chargesPerUnit, totalAmount);
	  
	
	return 0;
}
float calculateChargesPerUnit(int units) {
    if (units <= 199) {
        return 1.20;
    } else if (units >= 200 && units < 400) {
        return 1.50;
    } else if (units >= 400 && units < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}

float calculateTotalBill(float chargesPerUnit, int units) {
    return chargesPerUnit * units;
}

float applySurcharge(float totalBill) {
    if (totalBill > 400) {
        return totalBill + (totalBill * 0.15); // 15% surcharge
    }
    return totalBill;
}

void printBillDetails(int customerID, char customerName[], int unitsConsumed, float chargesPerUnit, float totalAmount) {
    printf("\n Electricity Bill Details \n");
    printf("Customer ID        : %d\n", customerID);
    printf("Customer Name      : %s\n", customerName);
    printf("Units Consumed     : %d\n", unitsConsumed);
    printf("Charges Per Unit   : %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Kshs. %.2f\n", totalAmount);
}