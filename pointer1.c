// C Programing for pointer 
#include <stdio.h>

int main()
{
    // int a= '3';
    // int *ptr = &a;
    // printf("%p\n",ptr);
    // ptr++;
    // printf("%p\n",ptr);
    // printf("%p\n",ptr-2);

    int arr[]= {1,2,3,4,5,6};
    printf("value at position 3 of the array is %d\n", arr[3]);
    printf("the address of first element of the array is %d\n",&arr[0]);
    printf("the address of first element of the array is %d\n",arr);
    printf("the address of second element of the array is %d\n",&arr[1]);
    printf("the address of second element of the array is %d\n",arr+1);

    printf("the address of first element of the array is %d\n",*(&arr[0]));
    printf("the address of first element of the array is %d\n",*(arr));
    printf("the address of second element of the array is %d\n",*(&arr[1]));
    printf("the address of second element of the array is %d\n",*(arr+1));

    return 0;
}
