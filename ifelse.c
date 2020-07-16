// C Programing if else Conditions
#include <stdio.h>

int main()
{
    int num;
    printf("Enter A number :");
    scanf("%d", &num);
    if(num<20){
        printf("U entered number %d is less than 20",num);
    }
    else if (num<40)
    {
        printf("U entered number %d is less than 40",num);
    }
     else if (num<60)
    {
        printf("U entered number %d is less than 60",num);
    }
    else
    {
        printf("U entered number %d is greater than 60", num);
    }
    
    return 0;
}
