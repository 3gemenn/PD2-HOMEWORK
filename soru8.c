//son ile ilk dugumun yerlerini degistiren fonksiyon 


#include <stdio.h>
#include <stdlib.h>
  struct Node{
  int num;
 struct Node *next;
 }*head,*x,*New,*temp,*show;


   typedef struct Node Node;

   Node *makeList(int size){
   int i;

   head=(Node*)malloc(sizeof(Node));
   temp=head;

   printf("ilk degeri giriniz:");
   scanf("%d",&head->num);

   for(i=1;i<size;i++){
      New=(Node*)malloc(sizeof(Node));
      printf("yeni degeri giriniz:");
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
   printf("%d,",show->num);

   show=show->next;
 }
    printf("\n");
}

    Node *changeFirstAndLast(Node *head){
    int y;
    x=head;

    while(x->next!=NULL)
         x=x->next;
         y=head->num;
         head->num=x->num;
         x->num=y;
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
