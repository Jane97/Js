#include<stdio.h>
int main()
{
char ch;
printf("\nEnter the character");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
printf("\n Alphabet",ch);
}
else
{
printf("\n Not a Alphabet",ch);
}
return 0;
}
