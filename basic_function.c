// C programing basic function

#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(int argc, char const *argv[])
{
    int x,y,c;
    printf("Enter a and b value for sum\n");
    scanf("%d %d", &x, &y);
    c = sum(x,y);
    printf("Sum : %d",c);
    return 0;
}
