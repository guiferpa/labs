//
// Created by Guilherme Paixão on 22/11/19.
//

#include <stdio.h>
#include <stdlib.h>

#define LIST_LENGTH 10

typedef struct node {
  struct node *prev;
  int data;
} Node;

int add(Node **n, int data) {
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node->data = data;
  new_node->prev = *n;
  *n = new_node;

  return 0;
}

int main(void) {
  Node *head = NULL;

  for(int i =0; i < LIST_LENGTH; i++) {
    add(&head, i);
  }

  while (head != NULL) {
    printf("%p -> %p :: %d\n", head->prev, head, head->data);
    head = head->prev;
  }

  return 0;
}
