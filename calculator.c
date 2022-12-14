#include <stdio.h>

int main(void){
    char operator;
    double first, second;
    printf("Enter the operator ( +, -, *, / ): ");
    scanf("%c",&operator);

    printf("Enter the two Numbers one by one : ");
    scanf("%lf %lf",&first,&second);

    switch (operator)
    {
    case '+':
            printf("%lf + %lf = %lf",first,second,(first+second));
            break;

    case '-':
            printf("%lf - %lf = %lf",first,second,(first-second));
            break;

    case '*':
            printf("%lf * %lf = %lf",first,second,(first*second));
            break;

    case '/':
            if(second != 0.0)
            printf("%lf / %lf = %lf",first,second,(first/second));
            else
                printf("Divide by Zero situation");
            break;

        default:
            printf("Invalid Operator");
    }


    return 0;
}
