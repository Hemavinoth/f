#include<stdio.h>
#include<conio.h>
int main()
{
int aray[100],i,j,k;
clrscr();
printf("enter the n value\n");
scanf("%d",&k);
printf("enter the element 1 by 1\n");
for(i=0;i<k;i++)
scanf("%d",&aray[i]);
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(aray[i]==aray[j])
{
printf("%d ",aray[i]);
}
}
}
getch();
}
    
