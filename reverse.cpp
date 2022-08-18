#include<stdio.h>
#include<conio.h>

int reverse(int n);
int main()
{
	int num,rev;
	printf("enter the number");
	scanf("%d",&num);
	rev=reverse(num);
	printf("\n after reverse the no is:%d",rev);
	return 0;
}
int reverse(int num)
{
	static int n,r,sum=0,rev=0;
	if(num!=0)
	{
		r=n%10;
		sum=sum*10+r;
		rev=(num/10);
	}
	else
	return sum;
}
