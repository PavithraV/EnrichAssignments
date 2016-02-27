#include <stdio.h>
#include <string.h>
int sort(char **a, int n)
{	
	int i,j,k;temp;
	for(i = 0;i<n; i++)
	{
		for(j = 0;j<n-1; j++)
		{
			k=j+1;
			if(strlen(a[j]) > strlen(a[k])||(strlen(a[j]) == strlen(a[k]) && strcmp(a[j], a[k]) > 0))
			{
				temp = a[j];
				a[j] = a[k];
				a[k] = temp;
			}
		}
	}
	return 0;
}

int main(){
	char *a[] = {"0", "99", "10", "17", "62","201", "77", "1", "9", "32"};
	int i, n = 10;
	sort(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%s ", a[i] );
	}
	return 0;
}
