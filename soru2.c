
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int number;
	struct Node* next;
};
typedef struct Node Node;

Node* addThelastToTheBeginning(Node* head) {
	Node* tempHead = head;

	if (tempHead == NULL || tempHead->next == NULL)
		return head;

	while (tempHead->next->next != NULL)
		tempHead = tempHead->next;

	tempHead->next->next = head;
	
	head = tempHead->next;
	
	tempHead->next = NULL;
	return head;
}
int main() {
    int x;
	Node* head = NULL;
	for (x = 1; x <= 5; x++) {
	
		Node* node = (Node*)malloc(sizeof(Node));
	
		node->number = x;
	
		node->next = head;
	
		head = node;
	}
	head = addThelastToTheBeginning(head);
	while (head != NULL)
	{
		printf("%d\n", head->number);
		head = head->next;
	}
}
