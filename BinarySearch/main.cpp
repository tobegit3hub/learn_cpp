#include<iostream>
using namespace std;

int binarySearch(int a[], int length, int value){

  int left = 0;
  int right = length-1;

  while(left<=right){

    int middle = (left+right)/2;
        
    if(value>a[middle]){
      left = middle;
    }else if(value < a[middle]){
      right = middle;
    }else if(value == a[middle]){
      return middle;
    }
  }

  return -1;
}


int main(){
    
  int length = 8;
  int a[8] = {1,31,99,153,213,15155,321321,8161561};

  cout<<binarySearch(a, 8, 153)<<endl; 
}

