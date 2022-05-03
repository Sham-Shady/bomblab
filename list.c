#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

struct Node {
  int val;
  struct Node *prev;
  struct Node *next;
};

void push_back(int number, struct Node * headnode);
void pop_back(struct Node * headnode);
void walk(struct Node * headnode);
void init(struct Node * headnode);

int main(){
  struct Node mylist;
  int i;
  init (& mylist);
  for(i = 0; i < 5; i++){
    push_back(i, & mylist);
  }

  walk(& mylist);
  pop_back(& mylist);
  walk(& mylist);
  return 0;
}

void push_back(int number, struct Node * headnode){
  struct Node * newnode = malloc(sizeof(struct Node));
  (headnode -> prev) -> next = newnode;
  newnode -> prev = headnode -> prev;
  headnode -> prev = newnode;
  newnode -> next = headnode;
  newnode -> val = number;
  headnode -> val++;
}
 
void pop_back(struct Node * headnode){
  struct Node *freenode = headnode -> prev;
  struct Node *lastnode = freenode -> prev;
  lastnode -> next = headnode;
  headnode -> prev = lastnode;
  headnode -> val--;
  free(freenode);
}
 
void walk( struct Node * headnode){
  int i;
  int count = headnode -> val;
  struct Node *currentnode = headnode -> next;
  for(i = 0; i < count; i++){
  printf("Node %d val: %d \n", i, (currentnode -> val));
  currentnode = currentnode -> next;
  }
}
 
void init(struct Node * headnode){
   headnode -> prev = headnode;
   headnode -> next = headnode;
   headnode -> val = 0;
}
