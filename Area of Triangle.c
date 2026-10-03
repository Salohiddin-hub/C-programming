// #include <stdio.h>
// #include <math.h>
// int main() {
//     // Sides of triangle
//     float a; 
//     float b; 
//     float c;
//     // Perimeter & Area
//     float Perimeter;
//     double Area;
    
//     // Input
//     printf("Enter the first side of triangle: a= ");
//     scanf("%f", &a);
//     printf("Enter the second side of triangle: b= ");
//     scanf("%f", &b);
//     printf("Enter the third side of triangle: c= ");
//     scanf("%f", &c);
    
//     // Half perimetr
//     Perimeter=(a+b+c)/2;
//     // Area of triangle
//     Area=sqrt(Perimeter*(Perimeter-a)*(Perimeter-b)*(Perimeter-c));
   
//     printf("Area = %lf\n", Area);
//     return 0;
// }




#include <stdio.h>
#include <math.h>
int main() {
    // Points
    float x_1 = 0; 
    float x_2 = 4; 
    float y_1= 0;
    float y_2 = 5;
    
    double Radius;
    double Length;
    double Area;
    
    Radius=sqrt( (x_2-x_1)*(x_2-x_1) + (y_2-y_1)*(y_2-y_1) );
    Length =2*M_PI*Radius;
    Area = M_PI*pow(Radius,2);
    printf("Area = %.2lf\n", Area);
    printf("Length = %.2lf\n", Length);
    return 0;
}
