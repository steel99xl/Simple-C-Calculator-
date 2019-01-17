#include <stdio.h>
#include <string.h>
char select[20];
float total =0;
float sum();
float mut();
float sub();
float div();
float INT_1;
float INT_2;

int main()
{
        printf("[1] ADD\n");
        printf("[2] SUBTRACT\n");
        printf("[3] MULTIPLY\n");
        printf("[4] DIVIDE\n");
        printf(" Please slect an option : ");
        scanf("%s",select);
        if(strcmp(select, "1") == 0){
                sum();
        }
        if(strcmp(select, "2") == 0){
                sub();
        }
        if(strcmp(select, "3") == 0){
                mut();
        }
        if(strcmp(select, "4") == 0){
                div();
        }
        return 0;
}

float sum(){
        printf("MODE : ADD \n");
        printf("Enter the first number : ");
        scanf("%f", &INT_1);
        printf("Enter the second number : ");
        scanf("%f", &INT_2);
        total = INT_1 + INT_2;
        printf("Total = %f \n", total);
}
float sub(){
        printf("MODE : SUBTRACT \n");
        printf("Enter the first number : ");
        scanf("%f", &INT_1);
        printf("Enter the second number : ");
        scanf("%f", &INT_2);
        total = INT_1 - INT_2;
        printf("Total = %f \n", total);
}
float mut(){
        printf("MODE : MULTIPLY \n");
        printf("Enter the first number : ");
        scanf("%f", &INT_1);
        printf("Enter the second number : ");
        scanf("%f", &INT_2);
        total = INT_1 * INT_2;
        printf("Total = %f \n", total);
}
float div(){
        printf("MODE : DIVIDE \n");
        printf("Enter the first number : ");
        scanf("%f", &INT_1);
        printf("Enter the second number : ");
        scanf("%f", &INT_2);
        total = INT_1 / INT_2;
        printf("Total : %f \n", total);
}
