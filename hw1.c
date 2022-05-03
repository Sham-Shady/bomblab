#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("hw1_txt.txt", "r");

  int j, numbers[5],total=0;
  printf("\nNum1: ");
  fscanf(fp, "%d", &numbers[0]);
  printf("\nNum2 ");
  fscanf(fp, "%d", &numbers[1]);
  printf("\nNum3 ");
  fscanf(fp, "%d", &numbers[2]);
  printf("\nNum4 ");
  fscanf(fp, "%d", &numbers[3]);
  printf("\nNum5 ");
  fscanf(fp, "%d", &numbers[4]);
  for(j = 0; j < 5; j++) {
    if((numbers[j]%2) != 0)
      {
        total += numbers[j];
      }
  }
  printf("\nSum of all values: %d", total);
  printf("\n");

  fclose(fp);

  return 0;

}
