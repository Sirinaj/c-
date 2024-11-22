#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct dnode{
	int item;
	struct dnode *pre;
	struct dnode *next;
}Dnode;
main(){
	int menu,search;
	Dnode *head=NULL,*temp,*back=NULL,*del,*newnode;
	do{
		system("cls");
		printf("----------Menu----------\n");
		printf("1. Add Data\n");
		printf("2. Insert Data Before\n");
		printf("3. Insert Data After\n");
		printf("4. Delete Data\n");
		printf("5. Show Data\n");
		printf("6. Exit\n");
		printf("------------------------\n");
		printf("Select : ");
		switch(getch()){
			case '1' :
			printf("1. Add Data\n");
			int data;
			system("cls");
			newnode = (Dnode *)malloc(sizeof(dnode));
			printf("Add Data : ");
			scanf("%d",&newnode->item);
			
			newnode->next=head;
			if(head!=NULL){
				head->pre=newnode;
			}
			newnode->pre = back;
			head=newnode;
			break;
			case '2' :
				system("cls");
				printf("Insert for : "); scanf("%d",&search);
				newnode = head;
				while(newnode != NULL && newnode->next->item != search){
					newnode = newnode->next;
				}
				if(newnode==NULL){
					printf("Data not found\n");getch();
				}else{
					temp = (Dnode *) malloc(sizeof(Dnode));
					printf("Insert data : ");
					scanf("%d",&temp->item);
					temp->next = newnode->next;
					newnode->next = temp;
					temp->pre = newnode;
					if (temp->next != NULL){
						temp->next->pre = temp;
					}
				}	
			break;
			case '3' :
				system("cls");
				printf("Insert for : "); scanf("%d",&search);
				newnode = head;
				while(newnode != NULL && newnode->next->item != search){
					newnode = newnode->next;
				}
				if(newnode==NULL){
					printf("Data not found\n");getch();
				}else{
					temp = (Dnode *) malloc(sizeof(Dnode));
					printf("Insert data : ");
					scanf("%d",&temp->item);
					newnode = newnode->next;
					temp->next = newnode->next;
					newnode->next = temp;
					temp->pre = newnode;
					if (temp->next != NULL){
						temp->next->pre = temp;
					}
				}
				break;
			case '4' :
				system("cls");
				printf("\n-------Delete Data-------\n\n");
				printf("Delete for : "); scanf("%d",&search);
				newnode=head;
				while(newnode != NULL && newnode->item != search){
					newnode = newnode->next;
				}
				if(newnode == NULL){
					printf("No data");
					getch();	
				}
				else{
					if(newnode == head) head = head->next;
					else{
						del = head;
						while(del->next != newnode) del = del->next;
							del->next = newnode->next;
							newnode->next->pre = del;
						}
						free(newnode);
					}
			break;
			case '5' :
			printf("5. Show Data\n");
			system("cls");
				newnode=head;
				printf("*** Backword\t\t\t  Address    \t** Data **\tNext ***\n");
				while(newnode!=NULL){
					printf("[%p]        [%p]:=      %d:          [%p]\n",newnode->pre,&newnode->item,newnode->item,newnode->next);
					newnode = newnode->next;
				}
				getch();
				break;
			break;
			case '6' : 
			exit(0);
			break;
			default : printf("please try again : "); getch();
			break;
		}
		}while(menu!=6);
}
