// C Programing While Loop
#include <stdio.h>

int main()
{
    int n,i=0;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (i<n)
    {
        printf("%d\n",i+1);
        i++;
    }
    
    return 0;
}
