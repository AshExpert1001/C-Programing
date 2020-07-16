// C Programing Nested Switch case 
#include <stdio.h>

int main()
{
    int a,x,y,m;
    printf("Enter Your Choice\n");
    printf("1. addition\n2. Subtraction\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Enter a and b value\n");
        scanf("%d %d", &x, &y);
        printf("Sum = %d", x+y);
        break;
    
    case 2:
        printf("Enter 1 for Sub and 2 for exit\n");
        scanf("%d", &m);
        switch(m){
            case 1:
            printf("Enter a and b value\n");
            scanf("%d %d", &x, &y);
            printf("Sum = %d", x-y);
            break;

            default:
            printf("App Exit");
            break;
        }
        break;

    default:
        printf("App Exit");
        break;
    }
    return 0;
}

