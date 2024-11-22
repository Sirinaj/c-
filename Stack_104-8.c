#include <stdio.h>
int data[10],i;
int menu();
int show(){
	system("cls");
	int count=0;
	for(i=0;i<10;i++){
		if(data[i] != 0){
			count++;
		}
	}
	printf("\tShow data in stack\n");
	if(count == 0){
		printf("\tStack value : Empty\n");
	}
	else if(count != 0){
		printf("\tStack value : %d \n",count);
	}
	printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n\t");
	for(i=0;i<count;i++){
		printf("%c\t",data[i]);
	}
	if(getch()){
		menu();
	}
}
int push(){
	system("cls");
	for(i=0; i<10; i++){
		if(data[i] == 0){
			printf("TOP DATA[%d] : ",i+1);
			data[i] = getch();
			show();
			break;
		}
		else if(i == 9){
			if(getch()){
				printf("\t\t\tStack Overflow!");
				if(getch()){
					show();
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
	for(i=9; i>=0; i--){
		if(data[i] != 0){
			printf("\tPOP DATA[%d] : %c",i+1,data[i]);
			if(getch()){
				data[i] = 0;
			}
			show();
			break;
		}
		else if(i == 0){
			printf("\t\t\tStack Underflow!");
			if(getch()){
				show();
			}
		}
		else{
			continue;
		}
	}
}
int menu(){
    system("cls");
	printf("\t-----------MENU------------\n");
	printf("\t---------------------------\n");
	printf("\t| 1). Push DATA Stack     |\n");
	printf("\t| 2). Pop  Data Stack     |\n");
	printf("\t| 3). Show Data STACK     |\n");
	printf("\t| 4). Quit                |\n");
	printf("\t---------------------------\n");
	printf("\tPlease Enter your 1-4 => ");
	switch(getch()){
		case '1': push(); break;
		case '2': pop(); break;
		case '3': show(); break;
	} 
}

main(){
	menu();
}
