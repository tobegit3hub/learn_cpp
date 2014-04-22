#include<iostream>
using namespace std;

int main(){

  int m = 27;
  int n = 18;
  int remainder = 1;

  while(remainder!=0){

    remainder = m%n;
    m = n;
    n = remainder;

  }

  cout<<"okay ,it's "<<27*28/m<<endl;

}
