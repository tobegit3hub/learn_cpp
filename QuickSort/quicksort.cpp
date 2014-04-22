#include<iostream>
using namespace std;

int partition(int a[], int left, int right){

  int i=left+1;
  int j=right;
  int pivot = left;

  while(i<=j){

    while(a[i]<=a[pivot]){
      i++;
    }
    while(a[j]>a[pivot]){
      j--;
    }

    if(i<j){
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;

      i++;
      j--;
    }

  }

  int temp = a[pivot];
  a[pivot] = a[j];
  a[j] = temp;

  return j;
}

void quicksort(int a[], int left, int right){
  if(left<right){
    int r = partition(a, left, right);
    quicksort(a, left, r-1);
    quicksort(a, r+1, right);
  }
}

int main(){
  int a[] = {12,651,2,16512,1,2};
  int length = 6;

  quicksort(a, 0, length-1);

  for(int i=0; i<length; ++i){
    cout<<a[i]<<endl;
  }

}
