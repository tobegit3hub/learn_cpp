#include<stdio.h>

main(){
    
  int array[5] = {1, 22, 9, 9, 19912};
  int length = 5;

  int i, j;

  for(i=1; i<length; ++i){

    //[0,i-1] is sorted, now insert array[i] to be [0, i]

    int key = array[i];
        
    for(j=i-1; j>=0; --j){

      if(key>array[j]){
        break;
      }else{
        array[j+1] = array[j];
      }

    }

    array[j+1] = key;

  }

  for(i=0; i<length; ++i){
    printf("%d \t", array[i]);
  }

}

