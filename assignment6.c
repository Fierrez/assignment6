#include <stdio.h>

void ActivityA(){
            printf("\n\tActivity 1\n");
            printf("\nStorage size for char: %d", sizeof(char));
            printf("\nStorage size for int: %d", sizeof(int));
            printf("\nStorage size for signed int: %d", sizeof(signed));
            printf("\nStorage size for unsigned int: %d", sizeof(unsigned));
            printf("\nStorage size for short int: %d", sizeof(short));
            printf("\nStorage size for long int: %d", sizeof(long));
            printf("\nStorage size for double: %d", sizeof(double));
}
void ActivityB(){
    float milk,soda,juice;
    double result;
    
    milk=250.10;
    soda=150.54;
    juice=250.86;

    result=(milk+soda+juice);
    
    
    printf("\n\tActivity B\n");
    printf("Milk is 250.10\n");
    printf("Soda is 150.54\n");
    printf("Juice is 250.86\n");
    printf("Total amount is %.2f",result);



   
}
void ActivityC(){

    printf("\n\tActivity C\n");
    int floatsize ,floatsizedoubled;

    floatsize= sizeof(float);
    floatsizedoubled = floatsize*2;

    printf("\nThe size of float is %d",floatsize);
    printf("\nWhen multiplied by two is equal to %d",floatsizedoubled);
}
void ActivityD(){
    char firstname[]="Maria Teresita Michelle Aquino De Ayalla", secondname[]="Rodrigo Pablo Marie Callanta Boton";


    printf("\n\tActivity D\n");

    printf("%.23s ",firstname,secondname);
    printf("\n%.23s ",secondname);
}
void ActivityE(){
    printf("\n\tActivity E\n");

    int firstoperand=0,secondoperand=0,sum=0,difference=0,product=0;
    double qoutient;

    printf("First operand:");
    scanf("\n%d", &firstoperand);

    printf("Second operand:");
    scanf("\n%d", &secondoperand);
    
    sum = firstoperand + secondoperand;
    difference = firstoperand - secondoperand;
    product = firstoperand * secondoperand;
    qoutient = (double)firstoperand / (double)secondoperand;

    printf("\nThe sum of %d and %d is %d",firstoperand,secondoperand,sum);
    printf("\nThe difference of %d and %d is %d",firstoperand,secondoperand,difference);
    printf("\nThe product of %d and %d is %d",firstoperand,secondoperand,product);
    printf("\nThe qoutientof %d and %d is %f",firstoperand,secondoperand,qoutient);
    
}
void ActivityF(){
    printf("\n\tActivity F\n");

    int num1,num2,num3,num4,num5,average;

    
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);
    printf("Enter 3rd number:");
    scanf("%d", &num3);
    printf("Enter 4th number:");
    scanf("%d", &num4);
    printf("Enter 5th number:");
    scanf("%d", &num5);

    average=(num1+num2+num3+num4+num5)/5;

    printf("The average of 5 numbers is %d",average);
    
}
void ActivityG(){
    printf("\n\tActivity G\n");

    int firstoperand=0,secondoperand=0,sum=0,difference=0,product=0,remainder;
    double qoutient;

    printf("Enter your first number:");
    scanf("\n%d", &firstoperand);

    printf("Enter your second number:");
    scanf("\n%d", &secondoperand);
    
    sum = firstoperand + secondoperand;
    difference = firstoperand - secondoperand;
    product = firstoperand * secondoperand;
    qoutient = (double)firstoperand / (double)secondoperand;
    remainder= firstoperand % secondoperand;

    printf("\nThe sum of %d and %d is %d",firstoperand,secondoperand,sum);
    printf("\nThe difference of %d and %d is %d",firstoperand,secondoperand,difference);
    printf("\nThe product of %d and %d is %d",firstoperand,secondoperand,product);
    printf("\nThe qoutientof %d and %d is %.0f",firstoperand,secondoperand,qoutient);
    printf("\nThe remainder %d and %d is %d",firstoperand,secondoperand,remainder);
}   
void ActivityH(){
    printf("\n\tActivity H\n");
    int num1,num2,num3,num4;
    
    
    printf("\nEnter your numbers: ");
    
   
     scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printf("Your numbers are %d %d %d %d",num1,num2,num3,num4);

    
}
void ActivityI(){
    printf("\n\tActivity I\n");
    char osver[20]="",systype[20]="",osmf[20]="",sysmf[20]="";

    printf("SYSTEM INFORMATION\n");
    printf("Enter OS: ");
    scanf("\n%[^\n]s", &osver);
    printf("Enter system type: ");
    scanf("\n%[^\n]s", &systype);
    printf("Enter OS manufacturer: ");
    scanf("\n%[^\n]s", &osmf);
    printf("Enter system manufacturer: ");
    scanf("\n%[^\n]s", &sysmf);
    
    printf("\nOperating System: %s",osver);
    printf("\nOS version: %s",systype);
    printf("\nOS manufacturer: %s",osmf);
    printf("\nSystem Manufacturer: %s",sysmf);

}
void ActivityJ(){
    printf("\n\tActivity J\n");

    int grade;
    printf("Enter Final Grade:");
    scanf("\n%d", &grade);

    if(grade >= 75){
        printf("\nPassed");
    }else{
        printf("\nFailed");
    }

}
void ActivityK(){
    printf("\n\tActivity K\n");

    int num1=72,num2=7;
    int sum,product,difference,remainder;
    double qoutient;

    sum=num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    qoutient = (double)num1 / (double)num2;
    remainder = num1 % num2;

    printf("\nnum1 + num2 = %d",sum);
    printf("\nnum1 - num2 = %d",difference);
    printf("\nnum1 * num2 = %d",product);
    printf("\nnum1 / num2 = %.0f",qoutient);
    printf("\nnum1 %% num2 = %d",remainder);

}

int main(){
    int activityselect=0,selected=0;

    printf("Select Activity");
    printf("\n1 for Activity A \t5 for Activity E  \t9  for Activity I");
    printf("\n2 for Activity B \t6 for Activity F  \t10 for Activity J");
    printf("\n3 for Activity C \t7 for Activity G  \t11 for Activity K");
    printf("\n4 for Activity D \t8 for Activity H  \t0 to end  ");


    do{

        printf("\n\nSelect a number:");
        scanf("%d", &activityselect);

        selected=activityselect;

        switch (selected){
        case 1:
            ActivityA();
            break;

        case 2:
            ActivityB();
            break;

        case 3:
            ActivityC();
            break;

        case 4:
            ActivityD();
            break;

        case 5:
            ActivityE();
            break;

        case 6:
            ActivityF();
            break;
        
        case 7:
            ActivityG();
            break;
        
        case 8:
            ActivityH();
            break;
        
        case 9:
            ActivityI();
            break;
        
        case 10:
            ActivityJ();
            break;
        
        case 11:
            ActivityK();
            break;
        }

    }while (selected!=0);
}
