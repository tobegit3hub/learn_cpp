#include<iostream>
using namespace std;

void bubbleSort(int array[], int length){

  for(int i=length; i>1; --i){

    for(int j=0; j<i-1; ++j){

      if(array[j]>array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }

}

int main(){

  int a[5] = {11,5,3,12,51};

  bubbleSort(a, 5);

  for(int i=0;i<5;++i){
    cout<<a[i]<<endl;
  }

}
