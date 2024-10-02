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

#define ADMIN_PASSWORD 8192

int beans_availability = 50;
int water_availability = 125;
int milk_avilability = 75;
int syrup_availability = 90;

float tot_amt = 0.0;
int Beans_Q, Water_Q, Milk_Q, Syrup_Q;

float espresso_amt = ESPRESSO_PRICE;
float cappuncino_amt = CAPPUCCINO_PRICE;
float mocha_amt = MOCHA_PRICE;
