//Sum of even number 1 to n number
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=1,n=200;
    clrscr();
    for(i=1;i<=n;i++)
    {
	if(i%2==0)
	{
	    printf("%d\t",i);
	    sum=sum+i;
	}
    }
    printf("sum=%d",sum);

getch();
}
