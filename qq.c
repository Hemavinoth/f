#include<stdio.h>
#include<conio.h>
int  main()
{
int b,i,j,k=0;
char a[100][100],s[100];
clrscr();
scanf("%d",&b);
for(i=0;i<b;i++)
scanf("%s",a[i]);
for(i=0;a[0][i];i++)
{
for(j=1;a[j][i];j++)
{
if(a[j][i]!=a[j-1][i])
{
printf("%s",&s);
k=1;
}
}
if(k==1)
return 0;
else
s[i]=a[0][i];
}
getch();
return 0;
}
