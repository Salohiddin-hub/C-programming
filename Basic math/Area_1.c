#include <stdio.h>
#include <math.h>
int main() {
    // The line joining the points(2,2) and (5,6) which lie on the   circumference of a circle is the diameter of the circle. Write a   program to compute the area of the circle.
    float x_1 = 2; 
    float x_2 = 5; 
    float y_1= 2;
    float y_2 = 6;
    
    double Radius;
    double Length;
    double Area;
    
    Radius=(sqrt( pow(x_2-x_1, 2) + pow(y_2-y_1, 2) ) )/2;
    Area = M_PI*pow(Radius,2);
    printf("Area = %.2lf\n", Area);
    return 0;
}
