#include<stdio.h>
#include<conio.h>
#include<math.h>
#define  f(x) x * sin(x) - 1
int main(){
	
	float a,b,c;
	float E,f1,f2,f3,n;
	int t=1;
	up:
	printf("enter the initial guess.");
	scanf("%f %f",&a,&b);
	printf("Enter the error.");
	scanf("%f",&E);
	printf("Enter the total guess iteration");
	scanf("%f",&n);
	f1=f(a);
	f2=f(b);
	if(f1*f2==0){
		printf("Wrong guess");
		goto up;
	}
	printf("Iteration starts:\n");
	do{
		printf("Iteration %d: %f\n",t,c);
		c=(a+b)/2;
		f3=f(c);
		if(f1*f3<0){
			b=c;
			f2=f3;
		}
		else{
			a=c;
			f1=f3;
		}
		t++;
	}while(t<=n);
	printf("The root is %f",c);
	return 0;
	

}
