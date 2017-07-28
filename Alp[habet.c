#include<stdio.h>
int main()
{
char c;
printf("\nEnter the character");
scanf("%c",&c);
if((c>='a' && c>='z')||(c>='A' && c>='z'))
{
printf("\n Alphabet");
}
else
{
printf("\n Not a Alphabet");
}
return 0;
}
