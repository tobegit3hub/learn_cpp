#include<stdio.h>

main(){

    int array[6] = {22, 1, 1992, 9, 9, 1991};
    int length = 6;

    int d, i, j, temp;

    for(d = length/2; d >= 1; d = d/2){

        for(i = d; i < length; ++i){

            temp = array[i];

            for(j = i - d; (j >= 0) && (array[j] > temp); j = j-d){
                array[j + d] = array[j];
            }

            array[j + d] = temp;
        }   

    }


    for(i=0; i<length; ++i){
        printf("%d \t", array[i]);
    }

}
