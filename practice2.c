#include<stdio.h>
int main(){
char c;
printf("Enter the letter :");
scanf("%c", &c);
lowercase_vowel = (c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u');
uppercase_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

return 0;
}