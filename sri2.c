#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
sacnf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("it is a vowel");
}
else
printf("consonant");
return 0;
}
