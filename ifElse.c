#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    
    if (num >0)
    {
       printf("Positive ");
    }
    else if (num = 0)
    {
        printf("zero");

    }
    else{
        printf("Negative");
    }
    return 0;
}