#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nQual operação será realizada(+, -, *, /):");
    scanf("%c",&operator);
    
    printf("Digite o primeiro número:");
    scanf("%lf",&num1);

    printf("Digite o segundo número:");
    scanf("%lf",&num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\n resultado: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n resultado: %.2lf", result);
            break;
        
        case '*':
            result = num1 * num2;
            printf("\n resultado: %.2lf", result);
            break;

        case '/':
            result = num1 / num2;
            printf("\n resultado: %.2lf", result);
            break;




        default:
            printf("%c não é um operador válido.", operator);
    }





}