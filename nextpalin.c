#include<stdio.h>
int main()
{
	int a,n,temp,sum,rem;
	scanf("%d",&n);
	temp=n;
	while(temp++)
	{
		a=temp;
		sum=0;
		while(a>0)
		{
			rem=a%10;
			sum=sum*10+rem;
			a=a/10;
		}

		if(sum==temp)
		{
			printf("%d is a palindrome",sum);
			break;
		}

	}

	
	return 0;
}
