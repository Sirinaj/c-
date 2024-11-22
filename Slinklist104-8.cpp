#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int choice,data,search;
void Add(),Insert(),Delete(),Show();
typedef struct node{
        int value;
        struct node *next;
}NODE;
NODE *newnode,*head=NULL,*del=NULL,*temp;
Menu(){
	system("cls");
	printf("----------Menu----------\n");
	printf("1. Add Data\n");
	printf("2. Insert Data\n");
	printf("3. Delete Data\n");
	printf("4. Show Data\n");
	printf("5. Exit\n");
	printf("------------------------\n");
	printf("Select Menu : ");
	scanf("%d",&choice);
	switch(choice){
		case 1 : Add(); break;
		case 2 : Insert(); break;
		case 3 : Delete(); break;
		case 4 : Show(); break;
		case 5 : exit(0); break;
		default : printf("Not found please try again\n"); getch(); Menu(); break;
	}
	getch();
}

void Add(){
	int value;
	system("cls");
	printf("\n-------Add Data-------\n\n");
	newnode = (NODE *) malloc(sizeof(NODE));
	printf("Add data : ");
	scanf("%d",&newnode->value);
	newnode->next=head;
	head=newnode;
	printf("\nClick any key to continue...\n");
	getch();
	Menu();
}

void Insert(){
	system("cls");
	printf("\n-------Insert Data-------\n\n");
	printf("Insert for : "); scanf("%d",&search);
	newnode = head;
	while(newnode != NULL && newnode->next->value != search){
		newnode = newnode->next;
	}
	if(newnode==NULL){
		printf("Data not found!!\n");
		printf("\nClick any key to continue...\n");
		getch(); Menu();
	}
	else{
		temp = (NODE *) malloc(sizeof(NODE));
		printf("Insert data : ");
		scanf("%d",&temp->value);
		temp->next = newnode->next;
		newnode->next = temp;
		printf("\nClick any key to continue...\n");
		getch();
		Menu();
	}
}

void Delete(){
	system("cls");
	printf("\n-------Delete Data-------\n\n");
	printf("Delete for : "); scanf("%d",&search);
	newnode=head;
	while(newnode != NULL && newnode->value != search){
		newnode = newnode->next;
	}
	if(newnode == NULL){
		printf("No data");
		printf("\nClick any key to continue...\n");
		getch(); Menu();	
	}
	else{
		if(newnode == head) head = head->next;
		else{
			del = head;
			while(del->next != newnode) del = del->next;
			del->next = newnode->next;
			}
			free(newnode);
			printf("\nDelete %d",search);
			printf("\nClick any key to continue...\n");
			getch();
    		Menu();
	}
}

void Show(){
	system("cls");
	printf("\n-------Show Data-------\n\n");
	newnode=head;
	printf("   * Address        ** Data **  Next ***\n");
	while(newnode!=NULL){
	printf("[%p]:=\t%d \t:NEXT[%p]\n",&newnode->value,newnode->value,newnode->next);
	newnode = newnode->next;
	}
	printf("\nClick any key to continue...\n");
	getch();
	Menu();
}
main(){
	Menu();
}
