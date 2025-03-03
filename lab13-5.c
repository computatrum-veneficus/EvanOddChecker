/*

description: enter 5 values into array, checks if even or odd, display in function, return number of evens
author: jake lynam
date:
*/

#include <stdio.h>

#define SIZE 5

int function(int[]);


void main(){

    int array[SIZE] = {0};

    for(int i=0; i<SIZE; ++i){
        printf("Enter value: ");
        scanf("%d", &array[i]);
    }

    printf("\nEven count: %d", function(array));

}


// fhsdajhfkhsfkhsfkhsdk
int function(int arr[]){

    int count = 0;

    for(int i=0; i<SIZE;++i){

        // check if even
        if(arr[i] % 2 == 0){
            count += 1;
            printf("\nThis number %d is even", arr[i]);
        }

        else{
            printf("\nThis number %d is odd", arr[i]);
        }
    }

    return count;
}