#include <stdio.h>
#include <math.h>

int main(void) {

    float TPS;
    float TPD;
    float net;

    printf("What is the total power supply (numerically, MW): ");

    if(scanf("%f", &TPS) != 1 || TPS <= 0 ) {

        printf("Invalid Amount\n");
        return 1;
    }

    printf("What is the total power demand (numerically, MW): ");

    if(scanf("%f", &TPD) != 1 || TPD <= 0) {

        printf("Invalid Amount\n");
        return 1;
    }

    net = TPS - TPD;

    if (net < 0.1 && net > -0.1 ) {

        printf("Everything Balanced, Frequency 50Hz. \n");
    }

    else if (net >= 0.1) {

        printf("Supply is too high, frequency above 50Hz! \n");
    }

    else {

        printf("Supply too low! frequency below 50Hz! \n");
    }

return 0;

    

    
}