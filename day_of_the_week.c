#include <stdio.h> 

int main(void){
    int userInput;

    printf("Enter number (1-7) >>> "); 
    scanf("%d", &userInput); 

    switch (userInput)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    default:
        printf("Invalid \n"); 
        break;
    }

    return 0; 
}