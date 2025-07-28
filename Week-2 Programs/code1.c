#include<stdio.h>
#include<ctype.h>

int main() {
    int i = 0, state = 0;
    char str[50];
    
    printf("Enter the string to be tested: ");
    scanf("%s", str);
    
    while (str[i] != '\0') {  
        switch (state) {
        case 0: 
            if (isalpha(str[i])) {
                state = 1;
            } else {
                state = 10; 
            }
            break;
            
        case 1: 
            if (isalnum(str[i])) {
                state = 1; 
            } else if (str[i] == '(') {
                state = 2;  
            } else if (str[i] == '[') {
                state = 4;
            } else {
                state = 10; 
            }
            break;
            
        case 2:  
            if (str[i] == ')') {
                state = 3; 
            } else {
                state = 10;  
            }
            break;
            
        case 4:  
            if (str[i] == ']') {
                state = 5; 
            } else {
                state = 10; 
            }
            break;
            
        default:
            state = 10; 
        }
        i++;
    }
    
   
    if (state == 1) {
        printf("It is a Variable.\n");
    } else if (state == 3) {
        printf("It is a Function.\n");
    } else if (state == 5) {
        printf("It is an Array.\n");
    } else {
        printf("Not Identified.\n");
    }
    
    return 0;
}
