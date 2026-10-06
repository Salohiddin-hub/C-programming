#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    int x_1, y_1, x_2, y_2;
    float d, r, Area;
    
    // Points
    x_1=2;
    y_1=2;
    x_2=5;
    y_2=6;
   
    // d=diameter
    d=sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    
    // r=radius
    r=d/2;
    
    // Area of circle
    Area= PI * pow(r, 2);
    printf("Area: %.3f", Area);
    return 0;
}
