# EnrichAssignments

#include<stdio.h>
int thousans(int );
int thousan(int );
int thou(int );
int hundrds(int );
int tes(int );
int ten(int );
int ons(int );
int main()
{
	int ones,tens,hundreds,thousands,tenthousands;
 	long n;
	printf("Enter the number: \n");
 	scanf("%ld",&n);
 	if(n<=99999)
 	{
  		ones=n%10;
  		n=n/10;
  		tens=n%10;
  		
  		n=n/10;
  		hundreds=n%10;
  		n=n/10;
  		thousands=n%10;
  		n=n/10;
  		tenthousands=n%10;
  		if(tenthousands==1)
  		{
  			thousan(thousands);
  		}
  		else
  		{
  			thousans(tenthousands);
  			thou(thousands);
  		}
  		hundrds(hundreds);
  		if(tens==1)
  		{
   			ten(ones);
  		}
  		
  		if(tens!=1)
  		{
   			tes(tens);
   			ons(ones);
  		}
  		
 	}
 	else
 	{
 		printf("Limit exceeded\n");
 	}
	return 0;
}


int thousans(int x)
{
	if(x==2)
 	printf("Twenty ");
 	if(x==3)
	printf("Thirty ");
 	if(x==4)
 	printf("Forty ");
 	if(x==5)
 	printf("Fifty ");
 	if(x==6)
 	printf("Sixty ");
 	if(x==7)
 	printf("Seventy ");
 	if(x==8)
 	printf("Eighty ");
 	if(x==9)
 	printf("Ninety ");
 	return 0;
}


int thousan(int x)
{
 	if(x==0)
 	printf("Ten Thousand ");
 	if(x==1)
 	printf("Eleven Thousand ");
 	if(x==2)
 	printf("Twelve Thousand ");
 	if(x==3)
 	printf("Thirteen Thousand ");
 	if(x==4)
 	printf("Forteen Thousand ");
 	if(x==5)
 	printf("Fivteen Thousand ");
 	if(x==6)
 	printf("Sixteen Thousand ");
 	if(x==7)
 	printf("Seventeen Thousand ");
 	if(x==8)
 	printf("Eighteen Thousand ");
 	if(x==9)
 	printf("Nineteen Thousand ");
 	return 0;
}


int thou(int x)
{
 	if(x!=0)
 	{
  		if(x==1)
  		printf("One Thousand ");
  		if(x==2)
  		printf("Two Thousand ");
  		if(x==3)
  		printf("Three Thousand ");
  		if(x==4)
  		printf("Four Thousand ");
  		if(x==5)
  		printf("Five Thousand ");
  		if(x==6)
  		printf("Six Thousand ");
  		if(x==7)
  		printf("Seven Thousand ");
  		if(x==8)
  		printf("Eight Thousand ");
  		if(x==9)
  		printf("Nine Thousand ");
 	}
	return 0;
}


int hundrds(int x)
{
 	if(x!=0)
 	{
  		if(x==1)
  		printf("One Hundred ");
  		if(x==2)
  		printf("Two Hundred ");
  		if(x==3)
  		printf("Three Hundred ");
  		if(x==4)
  		printf("Four Hundred ");
  		if(x==5)
  		printf("Five Hundred ");
  		if(x==6)
  		printf("Six Hundred ");
  		if(x==7)
  		printf("Seven Hundred ");
  		if(x==8)
  		printf("Eight Hundred ");
  		if(x==9)
  		printf("Nine Hundred ");
 	}
	return 0;
}


int tes(int x)
{
 	if(x!=0)
 	{
  		if(x==2)
 	 	printf("Twenty ");
  		if(x==3)
  		printf("Thirty ");
  		if(x==4)
  		printf("Forty ");
  		if(x==5)
  		printf("Fifty ");
  		if(x==6)
  		printf("Sixty ");
  		if(x==7)
  		printf("Seventy ");
  		if(x==8)
  		printf("Eighty ");
  		if(x==9)
  		printf("Ninety ");
 	}
	return 0;
}


int ten(int x)
{
 	if(x==0)
 	printf("Ten\n");
 	if(x==1)
 	printf("Eleven\n");
 	if(x==2)
 	printf("Twelve\n");
 	if(x==3)
 	printf("Thirteen\n");
 	if(x==4)
 	printf("Forteen\n");
 	if(x==5)
 	printf("Fivteen\n");
 	if(x==6)
 	printf("Sixteen\n");
 	if(x==7)
 	printf("Seventeen\n");
 	if(x==8)
 	printf("Eighteen\n");
 	if(x==9)
 	printf("Nineteen\n");
	return 0;
}


int ons(int x)
{
 	if(x!=0)
 	{
  		if(x==1)
  		printf("One\n");
  		if(x==2)
  		printf("Two\n");
  		if(x==3)
  		printf("Three\n");
  		if(x==4)
  		printf("Four\n");
  		if(x==5)
  		printf("Five\n");
  		if(x==6)
  		printf("Six\n");
  		if(x==7)
  		printf("Seven\n");
  		if(x==8)
  		printf("Eight\n");
  		if(x==9)
  		printf("Nine\n");
 	}
	return 0;
}

