#include<stdio.h>
int main (){
    int marks [] = {45, 95, 85 , 76};

    int *ptr = &marks[0];
    //int *ptr = marks; // same as  int *ptr = &marks[0];
    for (int i = 0; i < 4; i++){
        printf ("The marks of student %d is: %d\n", i+1, marks[i]);
        printf ("The address of marks of student %d is: %u\n", i+1, *ptr);
        ptr++;
    }

    /*for (int i = 0; i < 4; i++){
        printf ("The marks of student %d is: %d\n", i+1, *(ptr+i));
    }*/ // this is the easy method.
    return 0;
}