#include <stdlib.h>
#include "sequence.h"
#include <string.h>
#include <stdio.h>

struct sequence{
    int len;
    int max; 
    int *data;
}

struct sequence *seq_create(void){
    struct sequence new{
        new.len = 0;
        new.max = 0;
        new.data = NULL;
    };
    return new;
}

int seq_insert_at(const struct sequence *seq, int pos, int itm){
    assert(seq->len >= pos);
    int len = seq->len;
    int *newdata = malloc(len * sizeof(int) + 1);
    for(int i = 0; i < len; i++){
        if(i == pos){
            newdata[i] = itm;
        }
        if(i < pos){
            newdata[i] = str->data[i];
        }
        else{
            newdata[i] = str->data[i - 1];
        }
    }
    return newdata;
}
