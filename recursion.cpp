#include<stdio.h>
#include<conio.h>
float factorial (int n);
int main(){
	int n;
	float res;
	printf("enter the number\n");
	scanf("%d",&n);
	res=factorial(n);
	printf("the factorial of %d is %f \n",n,res);
	 return 0;
}
float factorial (int a)
{
	int n;
	if (a==1)
	{
		return 1;
	}
	else
	{
		return a*factorial(n-1);
	}
}
