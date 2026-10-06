/* 
 * Area of a triangle is given by the formula:
 * Area = sqrt(S * (S - a) * (S - b) * (S - c))
 * Where a, b, and c are sides of the triangle and 2S = a + b + c.
 * Write a program to compute the area of the triangle given the values of a, b, and c.
 */
#include <stdio.h>
#include <math.h>
int main() {
    // Sides of triangle
    float a; 
    float b; 
    float c;
    // Perimeter & Area
    float Perimeter;
    double Area;
    
    // Input
    printf("Enter the first side of triangle: a= ");
    scanf("%f", &a);
    printf("Enter the second side of triangle: b= ");
    scanf("%f", &b);
    printf("Enter the third side of triangle: c= ");
    scanf("%f", &c);
    
    // Half perimetr
    Perimeter=(a+b+c)/2;
    // Area of triangle
    Area=sqrt(Perimeter*(Perimeter-a)*(Perimeter-b)*(Perimeter-c));
   
    printf("Area = %lf\n", Area);
    return 0;
}




