#include<iostream>
using namespace std;

class Stack{

public:
  int number;
  int capcity;
  int *array;

  Stack(){
    number = 0;
    capcity = 10;
    array = new int[capcity];
  }

  int top(){
    if(number>=1){
      return array[number-1];
    }else{
      return -1;
    }
  }

  void push(int value){
    array[number] = value;
    number++;
  }

  int pop(){
    number--;
    return array[number];
  }

};

int main(){

  Stack *stack = new Stack();

  stack->push(1);
  stack->push(2);
  cout<<stack->top()<<endl;
  stack->push(3);
  cout<<stack->pop()<<endl;
  cout<<stack->top()<<endl;

}
