#include <stdio.h>

int main(){
    float salary, hra, da, gross_salary;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    if(salary <= 10000){
        hra = 0.20 * salary;
        da = 0.80 * salary;

    }

    else if(salary <= 20000){
        hra = 0.25 * salary;
        da = 0.90 * salary;
    }

    else{
        hra = 0.30 * salary;
        da = 0.95 * salary;
    }

    gross_salary = salary + hra + da;

    printf("Your gross salary is: %.2f", gross_salary);


    return 0;
}
