// Let Us C pg 278 
#include<stdio.h>

//forward declaration of methods 
void display(int*);
void show(int*);
void print2D(int arr[][4], int row, int col);
void printByPointer(int * arr, int row, int col);
void print(int (* arr)[4], int row, int col);
void main ()
{
  int i;
  int marks[]  = {55, 65, 75, 56, 78, 78, 90};
  for(int j = 0; j <= 6; j++)
   display(&marks[j]);

  printf("marks: %d \n ", marks);
  printf("&marks: %d n ", &marks);
  printf("&marks + 1: %d \n ", &marks + 1);
   
 int studentIdToMarks[][2] ={
     {1,20},
     {2,30},
     {3,40},
     {4, 100}
 };

 for(int i = 0; i < 4; i++)
     printf("Student id: %d  , Marks : %d\n", studentIdToMarks[i][0] , studentIdToMarks[i][1] );


for(int i = 0; i < 4; i++)
     printf("Student memory addresses:%u \n", studentIdToMarks[i]);// *studentIdToMarks[i] will print the student ids

int arr[][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};
    
print2D(arr,4,4);
printByPointer(arr,4,4);
print(arr,4,4);
scanf("%d", &i);
}

// print the conventional way 
void print2D(int arr[][4], int row, int col)
{
 printf("print the conventional way\n");
 for(int i = 0; i < row; i++)
 {
     
    for(int j = 0; j < col; j++)
    {
        printf("%d ", arr[i][j] );
    }
      printf("\n");
 }
}

void printByPointer(int * arr, int row, int col)
{
    printf("print using pointer\n");
 for(int i = 0; i < row; i++)
 {
     for(int j = 0; j < col; j++)
     {
          printf("%d ",*( arr + i  * col + j) );
     }
     printf("\n");
 }
}

void print(int (* arr)[4], int row, int col)

{
    printf("print using pointer\n");
    int * temp;
 for(int i = 0; i < row; i++)
 {
     
     temp = arr + i;// temp points to the 1 D array when i = 0, and the second one when i = 1
     for(int j = 0; j < col; j++)
 
     {
         printf("%d ", *(temp + j) );
     }
     printf("\n");
 }
}

void display(int* n)
{
  show(&n);
}

void show(int* s)
{
  int* value = *s;
  printf("Value to display is %d\n" ,*value);
}