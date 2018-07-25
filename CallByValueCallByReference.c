#include <stdio.h>
// forward declaration of methods 
void swapByReference(int*, int*);

void swapByValue(int, int);

// main method 
main()
{
  int a = 1;
  int b = 2;
  printf("a =%d b = %d\n", a, b);
  
  swapByValue(a, b);// call by value,a and b are actual //arguments
  printf("a =%d b = %d\n", a, b);
  swapByReference(&a, &b);// pass the addresses of the variables // so that their values can be swapped
  printf("a =%d b = %d\n", a, b);
    
  scanf("Enter any key: %d\n",&a);

}

// swap values by reference
void swapByReference(int *x, int *y)
{
printf("Swap by reference \n");
  // ***You just need the *value* not the pointer to x
    //if you create a temp pointer it will still what x points to so basically *both* x and y will point to whatever x points to
  int temp = *x;
  *x = *y;
  *y = temp; 
 
}

// swap values by value
void swapByValue(int x, int y)// formal arguments
{
printf("Swap by Value \n");
  int temp = x;
  x = y;
  y = temp;
  printf("Inside swapByValue(): x = %d , y = %d \n", x, y );

}
