#include <stdio.h>
int choice,data[10],i,f=0,r=0;
Menu(){
	system("cls");
	printf("\t-------------------------\n");
	printf("\t|     Queue Program     |\n");
	printf("\t-------------------------\n\n");
	printf("\t1. Enter Enqueue Data\n");
	printf("\t2. Enter Dequeue Data\n");
	printf("\t3. Show Data\n");
	printf("\t4. Quit\n");
	printf("\t---------------------\n");
	printf("\tPlease Enter 1-4 => ");
	choice = getch();
	switch(choice){
		case '1' : Enqueue(); break;
		case '2' : Dequeue(); break;
		case '3' : Show(); break;
		default : return 0; break;
	}
	
}
Enqueue(){
	system("cls");
	printf("\t-------------------------\n");
	printf("\t|        Enqueue        |\n");
	printf("\t-------------------------\n\n");
	if(data[9] != 0){
		if(getch()){
				printf("\tQueue Overflow!");
				if(getch()){
					Show();
				}
			}
	}
	else{
		for(i=0; i<10; i++){
			if(i==0){f=0;}
			r=i;
		if(data[i] == 0){
			printf("Enqueue[%d] : ",i+1);
			data[i] = getch();
			Show();
			break;
		}
		else if(i == 9){
			if(getch()){
				printf("\tQueue Overflow!");
				if(getch()){
					Show();
				}
			}
		}
		else{
			continue;
		}
	}
	}
	
}
Dequeue(){
	system("cls");
	printf("\t-------------------------\n");
	printf("\t|         Dequeue        |\n");
	printf("\t-------------------------\n\n");
	for(i=0; i<10; i++){
		if(data[i] != 0){
			printf("\tDequeue[%d] : %c",i+1,data[i]);
			if(getch()){
				data[i] = 0;
				f=i+1;
			}
			if(i==9){
				f=-1;r=-1;
			}
			Show();
			break;
		}
		else if(i == 9){
			printf("\tQueue Underflow!");
			if(getch()){
				Show();
			}
		}
		else{
			continue;
		}
	}
	getch();
	Show();
}
Show(){
	int count;
	system("cls");
	printf("\t-------------------------\n");
	printf("\t|       Show Data       |\n");
	printf("\t-------------------------\n\n");
	for(i=0;i<10;i++){
		count++;
	}
	printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n\t");
	for(i=0;i<count;i++){
		printf("%c\t",data[i]);
	}
	printf("\n\tFront : %d\tRear : %d",f,r);
	getch();
	Menu();
}
main(){
	if(data[i]==0){f=i-1;r=i-1;}
	Menu();
	return 0;
}
