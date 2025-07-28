#include<stdio.h>

int i = 0, t = 1;
char str[20];
void E();
void EPRIME();
void T();
void TPRIME();
void F();
void error();

void main()
{
    printf("The given grammer is:|n");
    printf("\n E->TE' ");
    printf("\n E' ->+TE'/$");
    printf("\n T -> FT' ");
    printf("\n T' -> *FT/$ ");
    printf("\n F -> (E)/a ");
    printf("\n Enter the string to be parrsed:");
    gets(str);
    E();
    if(t!=1||str[i]!='\0'){
        printf("\n Given string is not accepted");
    }
    else{
        printf("The given string is accepted");
    }
}

void E(){
    T();
    EPRIME();
}

void EPRIME(){
    if(str[i] == "+"){
        i++;
        T();
        EPRIME();
    }
    else{
        return;
    }
}
void T(){
    F();
    TPRIME();
}

void TPRIME(){
    if(str[i] == "*"){
        i++;
        F();
        TPRIME();
    }
    else return;
}

void F(){
    if(str[i] == "a"){
        i++;
    }
    else if(str[i] == "("){
        i++;
        E();
        if(str[i]==")"){
            i++;
        }
        else error();
    }
    else{
        error();
    }
}

void error(){
    t=-1;
}