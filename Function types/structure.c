#include <stdio.h>

struct info{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
} ;

int main(){
    int num;
    printf("Enter number of students: ");
    scanf("%d", &num);
    struct info student[num];

    for (int i=0; i<num; i++){
        printf("\nName: ");
        scanf("%s", student[i].name);
        printf("\nDate: ");
        scanf("%d %s %d", &student[i].day, student[i].month, &student[i].year);
        printf("\nSalary: ");
        scanf("%f", &student[i].salary);
    }
    return 0;
}