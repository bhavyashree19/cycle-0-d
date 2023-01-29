#include <stdio.h>
int main() {
  int num1,i,rows,c;
  printf("enter a number");
  scanf("%d",&num1);
  printf("enter the number of rows");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++){
    c=i*num1;
    printf("%d*%d=%d\n",num1,i,c); 
  }
  return 0;
}