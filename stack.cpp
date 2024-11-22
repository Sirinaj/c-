#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
//------Variable--------//
int data[10];
int show(),top(),showData(),pop();

main(){
	show();
}
int show(){
    system("cls");
	printf("-----------MENU------------\n");
	printf("---------------------------\n");
	printf("| 1). Push DATA Stack     |\n| 2). Pop  Data Stack     |\n| 3). Show Data STACK     |\n| 4). Quit                |\n---------------------------\n");
	printf("Please Enter your 1-4 => ");
	switch(getch()){
		case '1':
			top();
			break;
		case '2':
			pop();
			break;
		case '3':
			showData();
			break;
	} 
}
int top(){
	system("cls");
	for(int i=0; i<10; i++){
		if(data[i] == 0){
			printf("TOP DATA[%d] : ",i+1);
			data[i] = getch();
			showData();
			break;
		}
		else if(i == 9){
			printf("TOP DATA[%d] : \n",i+2);
			if(getch()){
				printf("\t\t\t!! Stack Overflow !!");
				if(getch()){
					showData();
				}
			}
		}
		else{
			continue;
		}
	}
}
int pop(){
	system("cls");
	for(int i=9; i>=0; i--){
		if(data[i] != 0){
			printf("POP DATA[%d] : %c",i+1,data[i]);
			if(getch()){
				data[i] = 0;
			}
			showData();
			break;
		}
		else if(i == 0){
			printf("\t\t\t!! Stack Underflow !!");
			if(getch()){
				show();
			}
		}
		else{
			continue;
		}
	}
}
int showData(){
	system("cls");
	int count=0;
	for(int i=0;i<10;i++){
		if(data[i] != 0){
			count++;
		}
	}
	printf("Show data in stack\nStack value : %d \n",count);

	printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
	for(int i=0;i<count;i++){
		printf("%c\t",data[i]);
	}
	if(getch()){
		show();
	}
}

