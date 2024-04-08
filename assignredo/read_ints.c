#include "cs136-trace.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>



int *read_ints(int *len){
    *len = 0;
    int acc = 10; 
    int *arr = malloc(sizeof(int) * acc);
    int val = 0;
    while(scanf("%d", &val) == 1){
        if(acc > *len){
            acc = acc * 2;
            arr = realloc(arr, sizeof(int) * acc);
        }
        else{
            arr[(*len)] = val;
        }
        (*len)++;
    }
    if((*len) != acc){
        arr = realloc(arr, sizeof(int) * (*len));
    }
    return arr;
}

