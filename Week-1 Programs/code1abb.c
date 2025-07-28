//abb
#include <stdio.h>

int main() {
    int i =0, state = 0;
    char str[50];
    printf("Enter the sring to be tested\n");
    scanf("%s",&str);

    while(str[i] != '\0'){
        switch (state)
        {
        case 0:
            if(str[i] == 'a'){
                state = 1;
            }
            else if(str[i] == 'b'){
                state = 0;
            }
            else{
                state = 10;
            }
            break;
        case 1:
            if(str[i] == 'a'){
                state = 1;
            }
            else if(str[i] == 'b'){
                state = 2;
            }
            else{
                state = 10;
            }
            break;
        case 2:
            if(str[i] == 'a'){
                state = 1;
            }
            else if(str[i] == 'b'){
                state = 3;
            }
            else{
                state = 10;
            }
            break;
        case 3:
            if(str[i] == 'a'){
                state = 1;
            }
            else if(str[i] == 'b'){
                state = 0;
            }
            else{
                state = 10;
            }
            break;
        default:
            break;
        }
    i++;
    }


    if(state ==3){
        printf("String is Accepted ");
    }
    else{
        printf("String is Not Accepted ");
    }

    return 0;
}