// C Programing Switch Case
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    switch (age)
    {
    case 5:
        printf("the age is 5");
        break;
    
    case 10:
        printf("the age is 10");
        break;
    
    case 15:
        printf("the age is 15");
        break;
    
    case 20:
        printf("the age is 20");
        break;
    
    default:
        printf("Age is not 5, 10, 15 or 20");
        break;
    }
    return 0;
}
