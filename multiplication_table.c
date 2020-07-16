// C Programing multiplication table
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number for multiplication table:\n");
    scanf("%d",&num);
    printf("Multiplication %d is as follow as :\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d : %d\n",i, num, i*num);
    }
    
    return 0;
}