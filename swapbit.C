#include<stdio.h>
int main()
{
int r,b;
printf("enter the element:");
scanf("%d%d",&r,&b);
r^=b;
b^=r;
r^=b;
printf("the swaped element is %d\t%d",r,b);
return 0;
}
