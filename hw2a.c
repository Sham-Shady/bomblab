#include<stdio.h> 

int main(){
  
  int i = 0;
  L1:
  if(i % 2 == 0) printf("%d is even \n", i);
  if(i % 2 == 1) printf("%d is odd \n", i);

  i++;
  if(i <= 10) goto L1;
  return 0;
}
