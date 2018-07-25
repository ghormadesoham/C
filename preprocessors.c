#include<stdio.h>

#define CUBE(x) (x * x * x)

main()
{
  int a, b = 3;
  a = CUBE(b++);// b++ * b++ * b++ 
  printf("\n a = %d , a ^ 3 = %d",a, b);// a = 27 , b = 6
  scanf("%d\n", &a);
}