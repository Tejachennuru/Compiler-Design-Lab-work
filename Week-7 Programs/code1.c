//Write a program to remove left recurssion
//A-> A@/B

#include<stdio.h>
#include<ctype.h>

struct prod 
{
    char left[1];
    char right[20];
}prod;

int main(){
    int i = 0, j = 1, k = 0;
    char alpha[20], beta[20];
    printf("Enter the left productions\n");
    scanf("%c", prod.left);
    printf("Enter the right side of production:\n");
    scanf("%s", prod.right);

    printf("The production are:-");
    printf("%c%c%c", prod.left[0],'-','>');
    scanf("%s\n", prod.right);
    
    if(prod.left[0] == prod.right[0]){
        printf("The given production is left recrusive\n");
        printf("After removal of left recurssion the grammer is: \n");
        while(prod.right[j] != '/'){
            alpha[i++] = prod.right[j];
            alpha[i]='\0';
            j++;
        }
        j++;
        while(prod.right[j]!= '\0'){
            beta[k++] = prod.right[j];
            beta[k]='\0';
            j++;
        }
        printf("%c->%s%c'\n", prod.left[0], beta, prod.left[0]);
        printf("%c'->%s%c'/$\n", prod.left[0], alpha, prod.left[0]);
    }
    else{
        printf("The given production is not a left recrusive\n");
    }
    return 0;
}