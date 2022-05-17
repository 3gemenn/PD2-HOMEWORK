
//Bir bagli dogrusal listelerde listenin basindaki dugumu keserek listenin sonuna ekleyen ve olusan listenin son halini geri donduren prototip programi.


#include<stdio.h>
#include<stdlib.h>

struct Node {
	int number;
	Node* next;
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

	Node* head = NULL;
	for (int x = 1; x <= 6; x++) {
		Node* Node = (Node*)malloc(sizeof(Node));
		Node->number = x;
		Node->next = head;
		head = Node;
	}
	head = cutHeadAddToLast(head);

	while (head != NULL){
		printf("%d\n", head->number);
		head = head->next;
	}
}
