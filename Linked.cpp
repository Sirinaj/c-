#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
typedef struct node{
	int value;
	struct node *next;
}NODE;
main(){
	int menu,search;
	NODE *newnode,*head=NULL,*del=NULL,*temp;
	do{
		system("cls");
		printf("======Menu======\n");
		printf("1.Add Data\n2.Insert Data\n3.Edit Data\n4.Delete Data\n5.Show Data\n6.Exit\n");
		printf("Please select menu : ");
		switch(getch()){
			case '1':{
				int value;
				system("cls");
				
				newnode = (NODE *) malloc(sizeof(NODE));
				printf("Add data : ");
				scanf("%d",&newnode->value);
				newnode->next=head;
				head=newnode;
				break;
			}
			case '2':{
				system("cls");
				printf("Insert for : "); scanf("%d",&search);
				newnode = head;
				while(newnode != NULL && newnode->next->value != search){
					newnode = newnode->next;
				}
				if(newnode==NULL){
					printf("Data not found!!\n");getch();
				}else{
					temp = (NODE *) malloc(sizeof(NODE));
					printf("Insert data : ");
					scanf("%d",&temp->value);
					temp->next = newnode->next;
					newnode->next = temp;
				}
				break;
			}
			case '3':{
				system("cls");
				printf("Edit for : "); scanf("%d",&search);
				newnode = head;
				while(newnode != NULL && newnode->value != search){
					newnode = newnode->next;
				}
				if(newnode==NULL){
					printf("Data not found!!\n");getch();	
				}
				else{
					printf("Edit to: "); scanf("%d",&newnode->value);
				}
				break;
			}
			case '4':{
				system("cls");
				printf("Delete for : "); scanf("%d",&search);
				newnode=head;
				while(newnode != NULL && newnode->value != search){
					newnode = newnode->next;
				}
				if(newnode == NULL){
					printf("No data");
					getch();	
				}else{
					if(newnode == head) head = head->next;
					else{
						del = head;
						while(del->next != newnode) del = del->next;
						del->next = newnode->next;
					}
					free(newnode);
				}
				break;
			}
			case '5':{
				system("cls");
				newnode=head;
				printf("   * Address          ** Data **       Next ***\n");
				while(newnode!=NULL){
					printf("[%p]:=      %d:        NEXT[%p]\n",&newnode->value,newnode->value,newnode->next);
					newnode = newnode->next;
				}
				getch();
				break;
			}
			case '6':{
				return 0;
				break;
			}
			default:
				system("cls");
				printf("Please select only 1-6\n");
				getch();
				break;		
		}
	}while(menu!=6);	
}
