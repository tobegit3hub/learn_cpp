#include<stdio.h>

int main(){

  int numberToGuess = 43;

  int tryNumber;

  printf("Please try a number between 1 and 100: ");
  scanf("%i", &tryNumber);

  while(tryNumber!=numberToGuess){
    if(tryNumber>numberToGuess){
      printf("Oh, it's too big \n");
    }else{
      printf("Oh, it's too small \n");
    }

    printf("Please try a number between 1 and 100: ");
    scanf("%i", &tryNumber);

  }
    
  printf("Bingo, you're brilliant!! \n");

}
