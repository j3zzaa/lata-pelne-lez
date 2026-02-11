#include <stdio.h>
#include <math.h>

int main(void) {

    float InitialMass;
    float HalfLife;
    float SafetyThreshold = 1.5;
    
    printf("What is the mass of the isotope (g): ");

    if(scanf("%f", &InitialMass) != 1 || InitialMass <= 0 ) {

        printf("Invalid\n");
        return 1;
    }

    printf("What is the half-life of the isotope? (yrs): ");

    if(scanf("%f", &HalfLife) != 1 || HalfLife <= 0) {

        printf("Invalid\n");
        return 1;
    }
    
    printf("\nDecay: \n");
    float CurrentMass = InitialMass;
    int Year = 0;

    while(CurrentMass > SafetyThreshold) {

        printf("Year %d, %.4fg remaining.\n", Year, CurrentMass);
        Year++;

        CurrentMass = InitialMass * pow(0.5, (float)Year / HalfLife);
    }

    printf("Safety Threshold reached. Mass: %.4fg.\n", CurrentMass);

}
