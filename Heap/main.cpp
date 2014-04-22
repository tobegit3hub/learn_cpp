#include<iostream>
using namespace std;

class Heap{

public:
  int size;
  int capacity;
  int *array;

  Heap(){
    size = 0;
    capacity = 10;
    array = new int[capacity];
  }

  int findMin(){
    if(size>=1){
      return array[0];
    }else{
      return -1;
    }
  }

  void insert(int value){
    size++;
    int index = size-1;

    while(index>0 && value < array[(index-1)/2]){
      array[index] = array[(index-1)/2];
      index = (index-1)/2;
    }
    array[index] = value;
  }

  int deleteMin(){
    int child;
    int minNumber = array[0];
    int lastNumber = array[size-1];
    size--;
        
    for(int i=1;i*2<=size;i=child){        
      child = i*2;
      if(child!=size && array[child+1-1]<array[child-1]){
        child++;
      }

      if(lastNumber>array[child-1]) {
        array[i-1] = array[child-1];
      }else{
        array[i-1] = lastNumber;
      }
                                                                            
    }

    return minNumber;
  }
};

int main(){

  Heap *heap = new Heap();
  heap->insert(5);
  heap->insert(3);
  heap->insert(7);
  heap->insert(1);
  heap->insert(3);

  //for(int i=0; i<heap->size; ++i){
  //    cout<<heap->array[i]<<endl;
  //}

  cout<<heap->deleteMin()<<endl;
  cout<<heap->deleteMin()<<endl;
    
}
