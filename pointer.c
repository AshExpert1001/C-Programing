// C Programing Pointer 
#include <stdio.h>

int main(){
    printf("C Pointers\n");
    int a= 76;
    int *ptr = &a;
    printf("the address of pointer a is %p \n",&ptr); //ptr address
    printf("the address of a is %p\n",&a);
    printf("the value of a is %p\n",ptr);  
    printf("the value of a is %d\n",*ptr);   // ptr value of a
    printf("the value of a is %d\n",a); 
    return 0;
}