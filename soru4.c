//son ile ilk dugumun yerlerini degistiren fonksiyon.

#include <stdio.h>
#include <stdlib.h>
  struct Node{
  int num;
 struct Node *next;
 }*head,*y,*New,*temp,*show;


   typedef struct Node Node;

   Node *makeList(int size){
   int x;

   head=(Node*)malloc(sizeof(Node));
   temp=head;

   printf("ilk degeri girin :");
   scanf("%d",&head->num);

   for(x=1;x<size;x++){
      New=(Node*)malloc(sizeof(Node));
      printf("yeni deger girin:");
	  scanf("%d",&New->num);

      temp->next=New;
      temp=temp->next;
 }
      temp->next=NULL;
 }

   Node showList(Node *head){
   printf("Liste:");
   show=head;

   while(show!=NULL){
   printf("%d",show->num);

   show=show->next;
 }
    printf("\n");
}

    Node *changeFirstAndLast(Node *head){
    int c;
    y=head;

    while(y->next!=NULL)
        y=y->next;
         c=head->num;
         head->num=y->num;
         y->num=c;
         printf("guncellendi.\n");
 }

   int main(){
   int size;

   if(head==NULL){
      printf("boyut giriniz:");
	  scanf("%d",&size);

      makeList(size);
 }
     showList(head);
     changeFirstAndLast(head);
     showList(head);
     free(head);

 }
