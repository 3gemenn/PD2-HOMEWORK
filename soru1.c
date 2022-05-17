#include <stdio.h>
#include <stdlib.h>

struct Node{  
struct int num;
 

    struct Node *next;
}*head, *b, *newNode;

typedef struct Node Node;



int main()
{
    b= head;
    int a;
    printf("Sayi giriniz: ");
    scanf("%d", &a);

        while(a!= -1){
             if(head== NULL){
                head= (Node*)malloc(sizeof(Node));
                head->next= NULL;
                head->num= a;

                }

            else if(a%2==0){
                    b=head;
                    while(b->next!= NULL){
                        b= b->next;
                    }
                      newNode= (Node*)malloc(sizeof(Node));
                      newNode->num= a;
                      newNode->next= NULL;
                      b->next= newNode;
                    }
            else{
                newNode= (Node*)malloc(sizeof(Node));
                newNode->num=a;
                newNode->next= head;
                head= newNode;
            }

        printf("Sayi giriniz: ");
        scanf("%d", &a);

    }
    b=head;
    while(b!=NULL){
    printf("%d\n", b->num);
    b= b->next;
    }
    getch();
    return 0;
}
