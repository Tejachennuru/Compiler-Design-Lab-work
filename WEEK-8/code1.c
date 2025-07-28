#include<stdio.h>
#include<string.h>

int n, m = 0, p, i = 0, j = 0;
char a[10][10], followResult[10];
void follow(char c);
void first(char c);
void addToResult(char);
int main(){
    int i;
    int choice;
    char c,ch;
    printf("Enter no.of production");
    scanf("Enter %d productions", n);
    for(int i = 0; i < n; i++){
        scanf("%s", a[i]);
    }
    gets(a[i]);
    do{
        m = 0;
        printf("Find FOLLOW of -->");
        scanf("%c", &c);
        follow(c);
        printf("%c", followResult[i]);
        printf("}\n");
        printf("Do you want to continue");
        scanf("%d", &choice);
    }
    while(choice == 1);
}

void 






















