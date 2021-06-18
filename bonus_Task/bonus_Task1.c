#include <stdio.h>
#include "bonus_Task1.h"

void array_zeros(){
  for(int i=0; i < ARRAY_SIZE; i++) {
    _array[i] = 0;
  }
}

void array_ones(){
  for(int i=0; i < ARRAY_SIZE; i++) {
    _array[i] = 1;
  }
}

void array_zero_one(){
  for(int i=0; i < ARRAY_SIZE; i++) {
    if (i % 2 == 0){ 
      _array[i] = 0; 
    } else { 
      _array[i] = 1;
    }
  }
}

void array_consecutive_elements() {
  int itr = 0;
  int tmpArr[] = {0,1,1,0,0};
  for(int i=0; i < ARRAY_SIZE; i++) {
    if(itr == 5) { itr = 0; }
    _array[i] = tmpArr[itr]; 
    itr++;
  }
}

int consecutive_elements_count() {
  int count = 0;
  int tmpArr[] = {0,1,1,0,0};

  for(int i = 0; i < ARRAY_SIZE - 4 ; i++) {
    int cons = 0;
    for(int j = 0; j < 5; j++)  {
      if ( _array[i+j] != tmpArr[j]){
        break;
      }
      if ( _array[i+j] == tmpArr[j] && j == 4){
        cons = 1;
      }
    }
    if (cons == 1) {
      count ++;
    }
  }
  return count;
}
