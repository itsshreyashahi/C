#include<stdio.h>
int main()
{
    int age = 789;
    if (age > 120)
    {
        printf("Invalid age");
    }
    else if (age >= 18)
    {
        printf("eligible to vote");
    }
    else if (age < 0)
    {
        printf("Invalid age");
    }
    else {
    
        printf("not eligible to vote");
    }
    return 0 ;
    
}