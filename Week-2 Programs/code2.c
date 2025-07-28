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
            if (isdigit(str[i])) {
                state = 1;
            } else {
                state = 10; 
            }
            break;
            
        case 1: 
            if (isdigit(str[i])) {
                state = 1; 
            } else if (str[i] == '.') {
                state = 2;  
            }
            else {
                state = 10; 
            }
            break;
            
        case 2:  
            if (isdigit(str[i])) {
                state = 2; 
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
        printf("It is a Integer Constant.\n");
    } else if (state == 2) {
        printf("It is a Real Constant.\n");
    }
    else {
        printf("Not Identified.\n");
    }
    
    return 0;
}
