#include<stdio.h>
int main()
{ 
    int age;
    printf("Enter your age :");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("you are eligible to vote");
    }
    
    if (age < 18)
    {
        printf("you are not eligible");

    }
    return 0;
    
    
}