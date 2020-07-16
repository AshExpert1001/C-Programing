// C Programing goto
#include <stdio.h>

int main()
{
    label:
        printf("We are insie label\n");
        goto end;
    
    printf("Hello World\n");
    end:
        printf("we are at end\n");
    return 0;
}
