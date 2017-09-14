#include<stdio.h>
main()
{
int a,b,c;
printf("\n Enter the numbers");
scanf("\n %d %d %d",&a,&b,&c);
if(a>b)
{
printf("A is largest");
}
else if(b>c)
{
printf("B is largest");
}
else
{
printf("C is largest");
}
return 0;
}
