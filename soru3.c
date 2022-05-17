// Bir bagli dogrusal listelerde listenin ortasinda yer alan elemani silen (tuttugu alani bellege geri iade eden) bir fonksiyon.


#include <stdio.h>
#include <stdlib.h>
   struct Node{ int num;
   struct Node *next;
 }*head,*x,*y,*temp,*New,*show;


 typedef struct Node Node;

     Node *makeList(int size){
     int a;

     head=(Node*)malloc(sizeof(Node));
     temp=head;

     printf("ilk degeri giriniz ");
	 scanf("%d",&head->num);

     for(a=1;a<size;a++){
        New=(Node*)malloc(sizeof(Node));

        printf("yeni degeri giriniz ");
		scanf("%d",&New->num);
        temp->next=New;
        temp=New;
 }
        temp->next=NULL;
        printf("olusturuldu.\n");
 }

       Node *showList(Node *head){
       show=head;

       printf("Liste:");

       while(show!=NULL){
            printf("%d,",show->num);
            show=show->next;
 }
            printf("\n");
 }

     Node *deleteMiddle(Node *head){
     int a,delte,cnt=1;
     x=head;

     while(x->next!=NULL){
          x=x->next;
          cnt++;
 }
         delte=cnt/2;
         if(cnt%2!=0)
           delte++;
           x=head;
           y=head->next;


         for(a=0;a<=delte-a;a++){
            y=y->next;
            y=y->next;
 }
         x->next=y->next;

        free(y);
        printf("guncellendi.\n");

        return head;
}
    int main(){
        int size;

        if(head==NULL){
           printf("boyutunu giriniz:");
		   scanf("%d",&size);
           makeList(size);
 }
        showList(head);
        deleteMiddle(head);
        showList(head);
        free(head);
 }
