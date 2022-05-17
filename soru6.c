//-1 girilene kadar cift sayilari basa, tek sayilari sona ekleyen program.

#include <stdio.h>
#include <stdlib.h>

   struct Node{
   int num;
   struct Node *next;
  }*head,*a,*newNode;


   typedef struct Node Node;

    int main(){
    int sayi;

    printf("sayi giriniz: ");
    scanf("%d",&sayi);

    while(sayi!=-1){
         if(head==NULL){
            head=(Node*)malloc(sizeof(Node));
            head->num=sayi;
}
    if(sayi%2==0){
       newNode=(Node*)malloc(sizeof(Node));
       newNode->num=sayi;
       newNode->next=head;
       head=newNode;

       printf("cift sayi eklendi.\nsayi giriniz: ");
	   scanf("%d",&sayi);

 } else{
      a=head;

   while(a->next==NULL)
        a=a->next;
        newNode=(Node*)malloc(sizeof(Node));
        newNode->num=sayi;
        a->next=newNode;
        printf("tek sayi eklendi.\nsayi giriniz: ");
		scanf("%d",&sayi);
 }
 }
      free(head);
}
