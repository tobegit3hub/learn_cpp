#include<iostream>
using namespace std;

void selectSort(int array[], int length){

  int minIndex;

  for(int i=0; i<length-1; ++i){

    minIndex = i;

    for(int j=i; j<length; ++j){

      if(array[j]<array[minIndex]){
        minIndex = j;
      }

    }

    int temp = array[i];
    array[i] = array[minIndex];
    array[minIndex] = temp;

  }

}

int main(){

  int a[5] = {11,5,3,12,51};

  selectSort(a, 5);

  for(int i=0;i<5;++i){
    cout<<a[i]<<endl;
  }

}
