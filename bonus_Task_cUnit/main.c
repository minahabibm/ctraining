#include <stdio.h>
#include "bonus_Task1.h"

int main(void) {
  printf("Bonus Taks1\n");
  array_zeros();
  for(int i=0; i < ARRAY_SIZE; i++) {
    printf("%d ",  _array[i]);
  }

  printf("\n");
  array_ones();
  for(int i=0; i < ARRAY_SIZE; i++) {
    printf("%d ",  _array[i]);
  }

  printf("\n");
  array_zero_one();
  for(int i=0; i < ARRAY_SIZE; i++) {
    printf("%d ",  _array[i]);
  }

  printf("\n");
  array_consecutive_elements();
  for(int i=0; i < ARRAY_SIZE; i++) {
    printf("%d ",  _array[i]);
  }

  printf("\n");
  printf("%d ",  consecutive_elements_count());
  printf("\n");


  return 0;
}
