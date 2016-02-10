#include <stdio.h>
int substring(char str[],char substr[],int n,int *len)
{
	int i,j,flag=0;
	substr[0]=str[0];
	(*len)++;
	for(i=1;i<=n;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(str[i]!=substr[j])
			{
				flag=0;
			}
			else 
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			substr[*len]=str[i];
			(*len)++;
		}
	}
	substr[*len]='\0';
	return substr;
}

int main()
{
	char str[50],substr[50];
	int n,i,len=0;
	printf("enter the string :\n");
	scanf("%s\n",str);
	n=strlen(str);
	substring(str,substr,n,&len);
	len=strlen(substr);
	printf("substring is : %s\n",substr);
	printf("substring length is : %d",len);
	return 0;
}
