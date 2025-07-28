//Write a program to remove left recurssion
//A-> A@/B

#include<stdio.h>
#include<ctype.h>

struct prod 
{
    char left[1];
    char right[20];
}prod[20];

int main(){
    int i = 0, j = 1, k = 0, n, l = 0, m = 0;
    char alpha[20][20], beta[20][20];
    printf("Enter the no.of productions\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the left production:\n");
        scanf("%s", prod[i].left);
        printf("Enter the right production:\n");
        printf("%s\n", prod[i].right);
    }

    for(i = 0; i < n; i++){
        printf("%c%c%c", prod[i].left[0],'-','>');
        printf("%s\n", prod[i].right);
    }
    printf("Enter the left production \n");
    printf("After removal of left recurssion the grammer is: \n");
    for(i = 0; i < n; i++){
        if(prod[i].left[0] == prod[i].right[0])
        {
            j = 1;
            while(prod[i].right[j] != '/')
            {
                alpha[i][l++] == prod[i].right[j];
                alpha[i][l] = '\0';
                j++;
            }
            j++;
            while(prod[i].right[j] != '/')
            {
                beta[i][m++] == prod[i].right[j];
                beta[i][m] = '\0';
                j++;
            }
            printf("%c->%s%c'\n", prod[i].left[0], beta[i], prod[i].left[0]);
            printf("%c'->%s%c'/$\n", prod[i].left[0], alpha[i], prod[i].left[0]);
            l = 0, m = 0; 
        }
        else
        {
            printf("%c->%s", prod[i].left[0], prod[i].right);
        }
    }



    return 0;
}