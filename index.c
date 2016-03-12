# EnrichAssignments
#include "class.h"
#include<stdlib.h>
#include<string.h>
struct student
{
    int stud_id;
    char name[15];
    char firstname[10];
    
};

void firstname(struct student *s,int no);

int main()
{
    int no,i;
    printf("Enter the number of students");
    scanf("%d",&no);
    if(no<1)
    {
        return 0;
    }
    struct student* s= (struct student*)malloc(no*sizeof(struct student));
    printf("enter the student name and id");
    for(i=0;i<no;i++)
    {
        scanf("%d",&s[i].stud_id);
        scanf("%[^\n]",s[i].name);
        
    }
    firstname(s,no);
    for(i=0;i<no;i++)
    {
        printf("%s",s[i].firstname);
    }
    
}
void firstname(struct student *s, int no)
{
    int i,j,k;
    for(i=0;i<no;i++)
    {
        k=0;
        for(j=0;j<(strlen(s[i].name));j++)
        {
            if(s[i].name[j]=='.')
            {
                k=0;
                continue;
            }
            else
            if(s[i].name[j]==' ')
            {
                
                break;
            }
            else
            {
                s[i].firstname[k++]=s[i].name[j];
            }
        }
        s[i].firstname[k]='\0';
    }
}
