//
//  new.c
//  
//
//  Created by R.M.D. Engineering College  on 20/02/16.
//
//

#include "new.h"
#include<stdio.h>
int main()
{
    char str[10],a[4];
    int i,j=0,count=0;
    printf("Enter the string of format dd-mm-yyyy");
    scanf("%s",&str);
    printf("%s\n",str);
    if(str[5]=='-')
    {
        if(str[6]!=0)
        {
            
        }
    }
    
    
    
    if(str[4]==1||str[4]==3||str[4]==5||str[4]==7||str[4]==8)
    {
        if(str[3]==0)
        {
            if(str[0]>3||str[1]>1)
            {
                printf("Date is invalid");
                exit(0);
            }
        }
    }
    if(str[4]==0||str[4]==2)
    {
        if(str[3]==1)
        {
            if(str[0]>3||str[1]>1)
            {
                printf("Date is invalid");
            }
        }
    }
    if(str[4]==4||str[4]==6||str[4]==9)
    {
        if(str[3]==0)
        {
            if(str[0]>3||str[1]>0)
            {
                printf("Date is invalid");
                exit(0);
            }
        }
    }
    if(str[4]==1&&str[3]==1)
    {
        if(str[0]>3||str[1]>0)
        {
            printf("Date is invalid");
        }
    }
    if(str[3]>1||str[4]>2)
    {
        printf("Date is invalid");
        exit(0);
    }
    printf("It is a valid date");
    return 0;
}