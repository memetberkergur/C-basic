#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cleaningTheTerminal();
int operationSelectorFunc(char);
float calculator (double,double,char);

int main(int argc, char const *argv[]){
    cleaningTheTerminal();
    char operation;
    float number_1,number_2;
 
    printf("Please Select Your Operation and Enter \'+ - * /\' : ");
    operation = getchar();
    
    printf("Please enter the first number and press enter : ");
    scanf("%f", &number_1);
    printf("Please enter the secondly number and press enter : ");
    scanf("%f", &number_2);
    calculator(number_1,number_2,operation);
    return 0;
}

float calculator(double number_1,double number_2, char operation){
    int operationSelector = operationSelectorFunc(operation);
    switch (operationSelector)
    {
    case 1:
        printf("\t%.4f + %.4f = %.4f\n\n",number_1,number_2,(number_1+number_2));
        break;
    case 2:
        printf("\t%.4f - %.4f = %.4f\n\n",number_1,number_2,(number_1-number_2));
        break;
    case 3:
        printf("\t%.4f * %.4f = %.4f\n\n",number_1,number_2,(number_1*number_2));
        break;
    case 4:
        printf("\t%.4f / %.4f = %.4f\n\n",number_1,number_2,(number_1/number_2));
        break;
    default:
        break;
    }
    return 0;
}
int operationSelectorFunc(char operate){
    int selector;
    if (operate == '+')
    {
        selector = 1;
    }
    else if (operate == '-')
    {
        selector = 2;
    }
    else if (operate == '*')
    {
        selector = 3;
    }
    else if (operate == '/')
    {
        selector = 4;
    }
    return selector;
}
void cleaningTheTerminal(){
    char command[4]="cls";
    system(command);
}