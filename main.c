#include<stdio.h>
int main ()
{
int a ;
int b;
printf("\n saisie du premier nombre ");
scanf("%d",&a);
do
{
printf("\n saisie du seconde nombre ");
scanf("%d",&b);
}
while(b==0);
printf("\n %d+%d=%d,a,b,a+b);
printf("\n %d-%d=%d,a,b,a-b);
printf("\n %d/%d=%d,a,b,(float)a/b);
return (0);
}

