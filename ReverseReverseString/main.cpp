#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

  char str[] = "what the hell";

  int p, q;
  char temp;

  p = 0;
  //q = strlen(str)-1;
  q = 13-1;
    
  while(p<q){
    str[p] = str[p]^str[q];
    str[q] = str[p]^str[q];
    str[p] = str[p]^str[q];
    p++;
    q--;
  }

  int i=0;
  int begin=0, end=0;
  while(str[i]){
    if(str[i]!=' '){
      begin = i;
      while(str[i] && str[i]!=' '){
        i++;
      }
      i--;
      end = i;
    }

    while(begin<end){
      str[begin] = str[begin]^str[end];
      str[end] = str[begin]^str[end];
      str[begin] = str[begin]^str[end];
      begin++;
      end--;
    }
    i++;
  }

  printf(str);

}
