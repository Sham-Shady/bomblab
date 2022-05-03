#include <stdio.h>

int main() {
  int j, numbers[5],total=0;
  printf("\nNum1: ");
  scanf("%d", &numbers[0]);
  printf("\nNum2 ");
  scanf("%d", &numbers[1]);
  printf("\nNum3 ");
  scanf("%d", &numbers[2]);
  printf("\nNum4 ");
  scanf("%d", &numbers[3]);
  printf("\nNum5 ");
  scanf("%d", &numbers[4]);
  for(j = 0; j < 5; j++) {
    if((numbers[j]%2) != 0)
      {
        total += numbers[j];
      }
  }
  printf("\nSum of all values: %d", total);
  printf("\n");
  return 0;

}

