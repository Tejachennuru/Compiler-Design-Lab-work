#include <stdio.h>
#include <ctype.h>
struct prod
{
    char left[1];
    char right[20];
}prod[10];

void main()
{
    int i=0,j=0,n,m=0,k=0,id1=0,id2=0;
    char alpha[20],beta[20],beta2[20];
    printf("Enter no of Production\n");
    scanf("%d",&n);
    printf("Enter the productions\n");
    for(m = 0; m < n; m++){
        printf("Enter the left prodution \n");
        scanf("%c",prod[m].left);
        printf("Enter the right side of prodution \n");
        scanf("%s",prod[m].right);
    }
    printf("The produtions are:-\n");
    for(m=0; m<n ; m++){
        printf("%c%c%c",prod[m].left[0],'-','>');
        printf("%s\n",prod[m].right);
    }
    for(m=0; m<n ; m++){
        while(prod[m].right[id2]!='/')
        {
            id2++;
        }
        id2++;
        while(prod[m].right[id1]==prod[m].right[id2])
        {
            alpha[i++]=prod[m].right[id1];
            alpha[i]='\0';
            id1++;
            id2++;
        }
        while(prod[m].right[id1]!='/')
        {
            beta[j++]=prod[m].right[id1];
            beta[j]='\0';
            id1++;
        }
        if(prod[m].right[id2]=='\0')
        {
            beta2[k++]='$';
            beta[k]='\0';
        }
        else
        {
            beta2[k++]=prod[m].right[id2];
            beta2[k]='\0';
            id2++;
        }
        printf("The given prodution is left factoring \n");
        printf("After removal of left factoring the grammer is:-\n");
        printf("%c ->%s%c'\n",prod[m].left[0],alpha,prod[m].left[0]);
        printf("%c ->%s/%s",prod[m].left[0],beta,beta2);
    }
}









#include <stdio.h>
#include <ctype.h>

struct prod {
    char left;
    char right[20];
} prod[10];

void main() {
    int i = 0, j = 0, n, m = 0, k = 0, id1 = 0, id2 = 0;
    char alpha[20], beta[20], beta2[20];
    printf("Enter no of Production\n");
    scanf("%d", &n);
    getchar();
    printf("Enter the productions\n");
    for (m = 0; m < n; m++) {
        printf("Enter the left production \n");
        scanf("%c", &prod[m].left);
        getchar();
        printf("Enter the right side of production \n");
        scanf("%s", prod[m].right);
    }
    printf("The productions are:-\n");
    for (m = 0; m < n; m++) {
        printf("%c%c%c", prod[m].left, '-', '>');
        printf("%s\n", prod[m].right);
    }
    for (m = 0; m < n; m++) {
        id1 = 0;
        id2 = 0;
        i = 0;
        j = 0;
        k = 0;
        while (prod[m].right[id2] != '/' && prod[m].right[id2] != '\0') {
            id2++;
        }
        if (prod[m].right[id2] == '/') {
            id2++;
            while (prod[m].right[id1] == prod[m].right[id2]) {
                alpha[i++] = prod[m].right[id1];
                alpha[i] = '\0';
                id1++;
                id2++;
            }
            while (prod[m].right[id1] != '/' && prod[m].right[id1] != '\0') {
                beta[j++] = prod[m].right[id1];
                beta[j] = '\0';
                id1++;
            }
            if (prod[m].right[id2] == '\0') {
                beta2[k++] = '$';
                beta2[k] = '\0';
            } else {
                while (prod[m].right[id2] != '\0') {
                    beta2[k++] = prod[m].right[id2++];
                }
                beta2[k] = '\0';
            }
            printf("The given production is left factoring\n");
            printf("After removal of left factoring the grammar is:-\n");
            printf("%c -> %s%c'\n", prod[m].left, alpha, prod[m].left);
            printf("%c' -> %s/%s\n", prod[m].left, beta, beta2);
        }
    }
}
