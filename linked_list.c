#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node; 

Node* create_node(int data){
	Node *new_node = (Node*)malloc(sizeof(Node));

	if(new_node == NULL){
		perror("Memory alloc failed\n");
		exit(1);
	} 

	new_node->data = data;
	new_node->next = NULL;

	return new_node;
}

void insert_at_end(Node **head, int data){
	Node *new_node = create_node(data);

	if(*head == NULL){
		*head = new_node;
		return;
	}

	Node *temp = *head;

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = new_node;
}

int main(){

	Node *list = NULL;
	insert_at_end(&list, 10);
	insert_at_end(&list, 20);
	insert_at_end(&list, 30);
	
}