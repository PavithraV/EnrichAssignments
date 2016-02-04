#include<stdio.h>
unsigned int sqrt(int n)
{
	int x=n;
	int y=1;
	
	while(x>y)
	{
		x=(x+y)/2;
		y=n/2;
	}
	return x;
}
 int main()
 {
 	int x,f;
 	printf("Enter the number\n");
 	scanf("%d",&n);
 	f=sqrt(int n);
 	printf("Square root of %d is %d\n",n,f);
 }
