// C Programing Break And Countinue 
#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter Your age\n",i);
        scanf("%d", &age);
        // if (age>10)
        // {
        //     break;
        // }

        if (age>10)
        {
            continue;
        }
        printf("we have not across any continue statements");
    }
    
    return 0;
}

