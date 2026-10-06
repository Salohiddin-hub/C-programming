// Apoint on the circumference of a circle whose center is (0,0) is  (4,5).
// Writeaprogramtocomputeperimeterandareaofthecircle.  
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
