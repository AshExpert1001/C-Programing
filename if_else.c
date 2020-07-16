// C Programing If Else Conditions
#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your age : ");
    scanf("%d",&age);
    if(age>=18 && age<99){
        printf("You can drive a car");
    }
    else if (age>99)
    {
        printf("now you die");
    } 
    else
    {
        printf("you cannot drive a car");
    }
    return 0;
}
