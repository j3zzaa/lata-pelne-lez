#include <stdio.h>
#include <math.h>

int main(void) {

    float tempIn;
    float tempOut;

    printf("What is the temperature of the steam entering the turbine?(Celcius): ");

    if(scanf("%f", &tempIn) != 1) {

        printf("Invalid Temperature \n");
        return 1;
    }

    printf("What is the temperature of the steam leaving the turbine?(Celcius): ");

    if(scanf("%f", &tempOut) != 1) {

        printf("Invalid Temperature\n");
        return 1;
    }

    if (tempIn < tempOut) {

        printf("Invalid Temperature\n");
        return 1;
    }

    tempIn = 273.15 + tempIn;
    tempOut = 273.15 + tempOut;

    float eff;
    eff = 1 - (tempOut/tempIn);



    printf("Your Engines Efficiency is: %.3f\n", eff);

}