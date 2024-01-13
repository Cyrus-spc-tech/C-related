#include <stdio.h>
int fibo(int n);
int fibo(int n){
  if(n == 0){
    return 0;
  }
  else if(n==1){
    return 1;
  }
  else {
    return fibo(n - 1) + fibo(n - 2);
  }
}  
int main(void) {
  int a;
  printf("Enter a number :");
  scanf(" %d",&a);
  //fibo(a);
  printf("Series is upto = %d \n",fibo(a));
  printf("series is : \t");
  for (int i=0;i<a;i++){
    printf("%d\t" ,fibo(i));
  }
  return 0;
}