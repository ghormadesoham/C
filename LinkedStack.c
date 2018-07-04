#include <stdio.h>

/* implement a stack in C.*/
struct node 
{
  int i;
  struct node* next;/* note the extra struct */
};

// forward declare methods
void push(node &s, int i);
int pop(node &s);
void print(&s);

int main()
{
  node* s;
  s = NULL;
  
  push(s, 1); 
  print(*s);
  
  push(*s, 2);
  print(*s);

  push(*s, 3); 
  print(*s);

  pop(*s); 
  print(*s);

return 0;
}

/*remove the item from the top of the stack */
void push(node &s, int i)
{
 node * oldTop = s;
 s = new node();
 s->item = i;

 if(oldTop == NULL)
  {
    s-> next = NULL;
  }

  else
  {
    s-> next = oldTop;
  }

/*remove the item from the top of the stack */
int pop(node &s)
{
  int poppedItem = s->item; 
  s = s-> next;
  return poppedItem;
}

 /*prints out the stack*/
void print(node&s)
{
node* temp = s;

while (temp != null)
{
  printf("%d", temp->item);
  temp = temp -> next;
}
  

}
} 
