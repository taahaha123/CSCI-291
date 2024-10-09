#include <stdio.h>

#define ESPRESSO_BEANS 8
#define ESPRESSO_WATER 30
#define CAPPUCCINO_MILK 0
#define ESPRESSO_PRICE 3.50

#define CAPPUCCINO_BEANS 8        
#define CAPPUCCINO_WATER 30
#define CAPPUCCINO_MILK 70
#define CAPPUCCINO_PRICE 4.50

#define MOCHA_BEANS 8    
#define MOCHA_WATER 39
#define MOCHA_MILK 160
#define MOCHA_SYRUP 30
#define MOCHA_PRICE 5.50

#define Beans_Lower_THRESHOLD 10
#define Water_lower_THRESHOLD 50
#define less_milk_THRESHOLD 100
#define less_syrup_THRESHOLD 20

#define ADMIN_PASSWORD "BWMS"

int beans_availability = 50;
int water_availability = 125;
int milk_avilability = 75;
int syrup_availability = 90;

float tot_amt = 0.0;
int Beans_Q, Water_Q, Milk_Q, Syrup_Q;

float espresso_amt = ESPRESSO_PRICE;
float cappuncino_amt = CAPPUCCINO_PRICE;
float mocha_amt = MOCHA_PRICE;

void Order_Coffee();
void Adm_Mod();           
void Change_Price_Coffee();
void Display_Total_Sales();
void Show_the_Coffee_Menu();

bool Coffee_availability(int beans, int water, int milk, int syrup); {
return Beans_Q >= beans && Water_Q >= water && Milk_Q >= milk && Syrup_Q >= syrup;
}

void Replensihing_Ingredients(int beans, int water, int milk, int syrup) {
    Beans_Q -= beans;
    Water_Q -= water;
    Milk_Q -= milk;
    Syrup_Q -= syrup;

}

void Check_Of_Ingredients() {
    if (Beans_Q <= Beans_Lower_THRESHOLD)
    printf("WARNING!!!! Low Coffee Beans in the machine");
    if (Water_Q <= Water_lower_THRESHOLD)
    printf("WARNING!!!! Water is running out");
    if (Milk_Q <=  less_milk_THRESHOLD)
    printf("WARINING!!!! Less Milk Availability");
    if (Syrup_Q <= less_syrup_THRESHOLD);
    printf("WARNING!!!! Syrup is not available");

}
int main() {
    srand(time(NULL));
    Beans_Q = rand() % 300 + 56;
    Water_Q = rand() % 450 + 75;
    Milk_Q = rand() % 320 + 45;
    Syrup_Q = rand() % 410 +30;

}

int choice;

while (true) {
    printf("\nCoffee Machine Simulator");
    printf("1.Coffee Order\n");
    printf("2.Administrator Mode\n");
    printf("3.Exit the Machine\n");
    printf("Enter the choice of Coffee you want");
    scanf("%d", &choice);

switch (choice)
{
case 1: 
    Order_Coffee();
    break;
case 2:
Adm_Mod();
case 3:
printf("Thank for using our Coffee machine service\n");
return 0;
default:
printf("Not Valid, Please Try Again\n");
}
}
 return 0;
    

 