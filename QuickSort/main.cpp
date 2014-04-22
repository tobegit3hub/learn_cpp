#include<iostream>
using namespace std;

int partition(int array[], int left, int right){

  int i = left+1;
  int j = right;
  int pivot = left; // the first one

  while(i<=j){

    while(array[i]<=array[pivot]){
      i++;
    }
    while(array[j]>array[pivot]){
      j--;
    }

    if(i<j){
      int temp = array[i];
      array[i] = array[j];
      array[j] = temp;
        
      i++;
      j--;
    }

  }

  int temp = array[pivot];
  array[pivot] = array[j];
  array[j] = temp;
  return j;

}


void quickSort(int array[], int left, int right){

  if(left<right){

    int pivot = partition(array, left, right);    
    quickSort(array, left, pivot-1);
    quickSort(array, pivot+1, right);

  }

}

int main(){

  int a[12] = {0,23432,23,4,35345,4,4,11,5,3,12,51};

  quickSort(a, 0, 11);

  for(int i=0;i<12;++i){
    cout<<a[i]<<endl;
  }

}

