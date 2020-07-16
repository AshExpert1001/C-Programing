// C Programing array

#include <stdio.h>

int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter Subject %d marks : ",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The Marks %d of Subject %d\n",marks[i],i);
    }
    
    
    return 0;
}
