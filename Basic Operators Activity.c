#include<stdio.h>


int main(){
    int a , b;
    int add , sub , mul;
    double div;

    printf("Input any 2 integer: \n");

    scanf("%d", &a);

    scanf("%d", &b);

    add = a + b;
    mul = a * b;
    div = a / b;
    sub = a - b;

    printf("\nADD = %d", add);
    printf("\nMUL = %d", mul);
    printf("\nDIV = %lf", div);
    printf("\nSUB = %d\n", sub);


    return 0;
}
