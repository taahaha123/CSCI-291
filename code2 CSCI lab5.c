#include <stdio.h>
#include <stdlib.h>

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

#define ADMIN_PASSWORD "8328675"

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
    void Order_Coffee() 
    int choice;        
    float price;        
    float payment = 0;  
    float coin;

    while(true) {
        printf("\nCoffee Available Types");
        if(Coffee_availability(ESPRESSO_BEANS,ESPRESSO_WATER,0,0))
        printf("1. Espresso - %2f AED\n",espresso_amt);
    else
    printf("Sorry- Insufficient Ingredients\n");
if(Coffee_availability(CAPPUCCINO_BEANS,CAPPUCCINO_WATER,CAPPUCCINO_MILK,0))
printf("2. Cappuccino - %2f AED\n",cappuncino_amt);
else
printf("Sorry - Insufficient Ingredients");
if(Coffee_availability(MOCHA_BEANS,MOCHA_MILK,MOCHA_WATER,MOCHA_SYRUP))
printf("3. Mocha - %2f AED\n",mocha_amt);
else
printf("Sorry - Insufficient Ingredients");
printf("0. Exit\n");
printf("Enter your choice");
scanf("%d",&choice);
if (choice == 0) return;
switch(choice) {
    case 1:
    if(!Coffee_availability(ESPRESSO_BEANS,ESPRESSO_WATER,0,0)) {
        printf("Espresso is not available, Select another option\n");
        continue;
    }
        price = espresso_amt;
        break;
        case 2:
        if(!Coffee_availability(CAPPUCCINO_BEANS,CAPPUCCINO_WATER,CAPPUCCINO_MILK,0)) {
        printf("Cappucino is not avialable, Select another option\n");
    continue;
        }
    price = cappuncino_amt;
    break;
    case 3:
    if(!Coffee_availability(MOCHA_BEANS,MOCHA_MILK,MOCHA_WATER,MOCHA_SYRUP)){
    printf("Mocha is not available, Select your option\n");
continue;
    }
price = mocha_amt;
break;
default :
printf("Invalid choice, try again\n");
continue;    
}
printf("Your selection");
switch (choice) {
    case 1: 
    printf("Espresso");
    break;
    case 2: 
    printf("Cappuccino");
    break;
    case 3:
    printf("Mocha");
    break;
}
printf("Price is %f AED\n", price);
printf("Confirm your selection (1 for Yes, 0 for No): "); 
        int confirm; 
        scanf("%d", &confirm); 
        if (!confirm) 
        continue;  
           while (payment < price) { 
            printf("Please insert coins (0.5 or 1 AED). Remaining: %.2f AED\n", payment - price); 
            scanf("%f", &coin);  // Accept coins 
            if (coin != 0.5 && coin != 1) { 
                printf("Invalid coin. Please insert 0.5 or 1 AED.\n"); 
                 continue; 
            } 
            payment += coin;  
           }
            continue; 
            switch (choice) { 
            case 1: 
                Replensihing_Ingredients(ESPRESSO_BEANS, ESPRESSO_WATER, 0, 0); 
                break; 
            case 2: 
                Replensihing_Ingredients(CAPPUCCINO_BEANS, CAPPUCCINO_WATER, CAPPUCCINO_MILK, 0); 
                break; 
            case 3: 
                Replensihing_Ingredients(MOCHA_BEANS, MOCHA_MILK, MOCHA_WATER, MOCHA_SYRUP); 
                break; 
            }