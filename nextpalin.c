#include<stdio.h>
int main()
{
	int n,temp,sum,rem;
	scanf("%d",&n);
	while(n++)
	{
		temp=n;
		sum=0;
		while(n>0)
		{
			rem=n%10;
			sum=sum*10+rem;
			n=n/10;
		}
		if(sum==temp)
		{
			printf("%d is a palindrome",sum);
			break;
		}
		else
		{
			continue;
		}
	}
}

	
	return 0;
}
