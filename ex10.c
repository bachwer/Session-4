
#include <stdio.h>
int main() {
  //declare variable number,hundreds, tens, ones and input
  int number;
  int hundreds, tens, ones;
  printf("Mời nhập số có 3 chữ số: ");
  scanf("%d", &number);
  //split the numbers
  hundreds = number / 100;
  tens = (number / 10) % 10;
  ones = number % 10;
  //pritnf results
  for(int i = 0; i < 3;  i++){
    if(hundreds <= tens && hundreds <= ones){
      printf("%d ", hundreds);
      hundreds = 10;
    }else if(tens <= hundreds && tens <= ones){
      printf("%d ", tens);
      tens = 10;
    }else{
      printf("%d ", ones);
      ones = 10;
    }
  }
  //end
  return 0;
}   // printf("%d %d %d", hundreds, tens, ones );