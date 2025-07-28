#include <stdio.h>
#include <ctype.h>
struct prod
{
    char left[1];
    char right[20];
}prod;
void main()
{
    int i=0,j=0,k=0,id1=0,id2=0;
    char alpha[20],beta[20],beta2[20];
    printf("Enter the left prodution \n");
    scanf("%c",prod.left);
    printf("Enter the right side of prodution \n");
    scanf("%s",prod.right);
    printf("The prodution is:-");
    printf("%c%c%c",prod.left[0],'-','>');
    printf("%s\n",prod.right);
    while(prod.right[id2]!='/')
    {
        id2++;
    }
    id2++;
    while(prod.right[id1]==prod.right[id2])
    {
        alpha[i++]=prod.right[id1];
        alpha[i]='\0';
        id1++;
        id2++;
    }
    while(prod.right[id1]!='/')
    {
        beta[j++]=prod.right[id1];
        beta[j]='\0';
        id1++;
    }
    if(prod.right[id2]=='\0')
    {
        beta2[k++]='$';
        beta[k]='\0';
    }
    else
    {
        beta2[k++]=prod.right[id2];
        beta2[k]='\0';
        id2++;
    }
    printf("The given prodution is left factoring \n");
    printf("After removal of left factoring the grammer is:-\n");
    printf("%c ->%s%c'\n",prod.left[0],alpha,prod.left[0]);
    printf("%c ->%s/%s",prod.left[0],beta,beta2);
}