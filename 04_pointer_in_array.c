#include<stdio.h>
int main (){
   /*Pointer in array using integer pointer arithmetic
    int a = 5;
    int* ptr = &a;
    printf ("the adress of a is %u\n" , &a);
    printf ("the adress of a is %u\n" , ptr);

    ptr++;
    printf ("the adress of a is %u\n" , ptr); */

 // Pointer in array using character pointer arithmetic
    char a = 'A';
    char* ptr = &a;
    printf ("the adress of a is %u\n" , &a);
    printf ("the adress of a is %u\n" , ptr);

    ptr++;
    printf ("the adress of a is %u\n" , ptr);
    return 0;
}