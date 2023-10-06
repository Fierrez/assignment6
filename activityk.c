#include <stdio.h>
int main(){

    int num1=72,num2=7;
    int sum,product,difference,remainder,c;
    double qoutient;

    sum=num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    qoutient = (double)num1 / (double)num2;
    remainder = num1 % num2;

    printf("num1 + num2 = %d",sum);
    printf("\nnum1 - num2 = %d",difference);
    printf("\nnum1 * num2 = %d",product);
    printf("\nnum1 / num2 = %.0f",qoutient);
    printf("\nnum1 %% num2 = %d",remainder);

    scanf("%[^\n]s", &c);
}