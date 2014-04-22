#include<iostream>
#include<stdlib.h>
using namespace std;

void merge(int a[], int left, int middle, int right){

  int leftLength = middle-left+1;
  int rightLength = right-middle;

  int *leftArray = (int *)malloc(sizeof(int)*leftLength);
  int *rightArray = (int *)malloc(sizeof(int)*rightLength);

  for(int i=0; i<leftLength; ++i){
    leftArray[i] = a[left+i];
  }
  for(int j=0; j<rightLength; ++j){
    rightArray[j] = a[middle+1+j];
  }

  int i=0, j=0;
  int k=left;

  while(i<leftLength && j<rightLength){
    if(leftArray[i]<=rightArray[j]){
      a[k] = leftArray[i];
      i++;
      k++;
    }else{
      a[k] = rightArray[j];
      j++;
      k++;
    }
  }

  for( ; i<leftLength; ++i){
    a[k] = leftArray[i];
    k++;
  }
  for( ; j<rightLength; ++j){
    a[k] = rightArray[j];
    k++;
  }

}

void mergeSort(int a[], int left, int right){

  if(left<right){
    int middle = (left+right)/2;
    mergeSort(a, left, middle);
    mergeSort(a, middle+1, right);
    merge(a, left, middle, right);
  }
}

int main(){

  int a[] = {21,5,3212,15151,111,2352};
  int length = 6;

  mergeSort(a, 0, length-1);

  for(int i=0; i<length; ++i){
    cout<<a[i]<<endl;
  }

}

