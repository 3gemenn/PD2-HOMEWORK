#include<stdio.h>
#include<stdlib.h>

struct Node {
	int number;
	struct Node* next;
};
typedef struct Node Node;

Node* cutHeadAddToLast(Node* head) {
	Node* tempHead = head;

	if (tempHead == NULL || tempHead->next == NULL)
		return head;

	while (tempHead->next != NULL) {
		tempHead = tempHead->next;
	}
	Node* newHead = head->next;
	tempHead->next = head;
	head->next = NULL;

	return newHead;
}
int main() {
    int x;
	Node* head = NULL;
	for (x= 1; x <= 6; x++) {
		Node* node = (Node*)malloc(sizeof(Node));
		node->number = x;
		node->next = head;
		head = node;
	}
	head = cutHeadAddToLast(head);

	while (head != NULL)
	{
		printf("%d\n", head->number);
		head = head->next;
	}
}
