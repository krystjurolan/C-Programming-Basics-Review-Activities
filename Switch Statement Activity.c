#include<stdio.h>


int main(){
    int num;
    int circuit = 1;

    printf("Input any integer: ");
    scanf("%d", &num);

    switch(circuit){
        case 1:
            if (num > 0){
                printf("\nThe integer is a positive number");

            } else if(num < 0){
                printf("\nThe integer is a negative number");

            } else {
                printf("\nThe inputed data is invalid");

            }
            break;


    }

    return 0;
}
