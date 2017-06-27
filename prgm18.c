#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i,temp,num,rem;
printf("enter two intervals:");
scanf("%d%d",&n1,&n2);
for(i=n1+1;i<n2;++i)
{
temp=i;
num=0;
while(temp!=0)
{
rem=temp%10;
rem=num+(rem*rem*rem);
temp=temp/10;
if(i==num)
{
printf("%d",i);
}
}
}
getch();
}
