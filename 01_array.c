#include<stdio.h>
int main (){
    int marks[90]; // in this case we can go all the way up to 89 but we are only using 3 elements.


    marks [0] = 45; 
    marks [1] = 95;
    marks [2] = 85;


    printf ("the value of marks [0] marks [1] marks [2] is %d %d %d\n", marks[0], marks[1], marks[2]);
    return 0;
}