#include <stdio.h>
#include "cUnit_Task1.h"

int add(int a, int b){
   int sum = a + b;
   printf("Added %d and %d to get sum %d\n", a, b, sum);
   return sum;
}

int sub(int a, int b){
   int sub = a - b;
   printf("Subtracted %d from %d to get subtraction %d\n", b, a, sub);
   return sub;
}

int mul(int a, int b){
   int mul = a * b;
   printf("Multiplied %d by %d to get multiplication %d\n", a, b, mul);
   return mul;
}

double div(int a, int b){
   float div = a / b;
   printf("Divided %d by %d to get division %f\n", a, b, div);
   return div;
}

