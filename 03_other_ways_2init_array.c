#include<stdio.h>
int main (){
    int cgpa[3] = {8, 9, 9};

    for (int i = 0; i < 3; i++){
        printf ("The cgpa of student %d is: %d\n", i+1, cgpa[i]);
    }
    return 0;
}