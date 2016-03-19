# EnrichAssignments
//
//  election.c
//  
//
//  Created by R.M.D. Engineering College  on 19/03/16.
//
//

#include "election.h"
int vote(int , int);
int main()
{
    int contestants,n=1,v,ch,max;
    int i,vote[100]={0};
    printf("Enter the number of contestants");
    scanf("%d",&contestants);
       while (n==1)
    {
    
        if(n==1)
        {
            printf("\nEnter your choice of party");
            scanf("%d",&ch);
        }
        
        if(ch<=contestants)
        {
            for(i=1;i<=contestants;i++)
            {
                if(i==ch)
                {
                    vote[i]++;
                }
            }
        }

        printf("\nVote 0 or 1");
        scanf("\n%d",&n);
        scanf("%d",&n);

    }
    max=1;
    for(i=1;i<=contestants;i++)
    {
        if(vote[max]<vote[i])
        {
            max=i;
        }
    
    }
    printf("%d is the number of votes of %d",vote[max],max);
    return 0;
}




