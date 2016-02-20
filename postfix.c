//
//  postfix.c
//  
//
//  Created by R.M.D. Engineering College  on 20/02/16.
//
//

#include "postfix.h"
#include<stdio.h>
#include<string.h>
int main()
{
    char stk[15],a[15];
    int m,top=-1,i,index;
    printf("enter the string");
    scanf("%s",a);
    m=strlen(a);
    printf("%d\n",m);
    for(i=0;i<m;i++)
    {
        if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        {
            printf("%c",a[i]);
        }
        
        if(top>=-1)
        {
            if(a[i]=='+'||a[i]=='*'||a[i]=='('||a[i]==')')
            {
                top++;
                stk[top]=a[i];
            }
        }
        if(a[i]==')')
        {
           
            top=top-1;
            
            for(i=0;i<=top;i++)
            {
                if(stk[i]=='(')
                {
                    index=i;
                    break;
                }
            }
            
            for(i=top;i>=index;i--)
            {
             
                if(stk[i]!='(')
                {
                    printf("%c",stk[i]);
                    top--;
                }
                else
                {
                    a[i]=stk[top];
                    top=top-1;
                }
            }
        }
        
        
    }
    if(top!=-1)
    {
        for(i=top;i>=0;i--)
        {
            printf("%c",stk[i]);
            top--;
        }
    }
    return 0;
}