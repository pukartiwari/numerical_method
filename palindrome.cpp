#include<stdio.h>
#include<conio.h>
int palin(int);
int sum=0;
int main()
{
	int n,rev;
	printf("enter a number");
	scanf("%d",&n);
	rev=palin(n);
	if(rev==n)
	{
		printf("it is palindrome");
	}
	else
	{
		printf("it is not palindrome");
	}
	return 0;
}
int palin(int num)
{
	static int r,sum=0,rev=0;
	if(num!=0)
	{
		r=num%10;
		sum=sum*10+r;
		rev (num/10);
	}
	else
	{
		return sum;
	}
}
