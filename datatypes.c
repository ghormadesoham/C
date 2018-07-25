#include<stdio.h>

int* fun();
main()
{
  int a;
  int *j;
  j = fun();
  printf("%d\n", *j);
    
  scanf("%d\n", &a);
}
int *fun()
{
    int k = 35;
    printf("%u\n", &k);
    return &k;
}