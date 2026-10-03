#include <stdio.h>
#include <math.h>
int main() {
    // Points
    float x_1; 
    float x_2; 
    float y_1;
    float y_2;
    // Distance
    double Distance;
    
    // Input
    printf ("Distance between two points \n");
    printf("Enter the x_1: ");
    scanf("%f", &x_1);
    printf("Enter the x_2: ");
    scanf("%f", &x_2);
    printf("Enter the y_1: ");
    scanf("%f", &y_1);
    printf("Enter the y_2: ");
    scanf("%f", &y_2);

    Distance=sqrt( (x_2-x_1)*(x_2-x_1) + (y_2-y_1)*(y_2-y_1) );
    
   
    printf("Area = %lf\n", Distance);
    return 0;
}
