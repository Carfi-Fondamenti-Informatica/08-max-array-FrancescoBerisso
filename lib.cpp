#include "lib.h"
float maxArray(float array[], int d){
    for(int i = 0; i < d; ++i){
        if(array[0] > array[i]){

        }
        else{
            array[0] = array[i];
        }
    }
    return array[0];
}
