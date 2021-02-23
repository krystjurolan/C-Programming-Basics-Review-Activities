#include<stdio.h>
#include<conio.h>

int main()
{
    int num , str , fnum;
    int rev = 0;

    printf("Input any integer: ");
    scanf("%d", &num);

    fnum = num;

    if (num > 0){
        while (num > 0){
        str = num % 10;
        rev = (rev * 10) + str;
        num = num / 10;
        }
    } else{
        printf("\nThe inputted data is invalid");

    }



    printf("Revised for %d is %d\n", fnum , rev);

    return 0;
}
