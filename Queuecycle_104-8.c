#include <stdio.h>
int choice,data[10],i,f=-1,r=-1;
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
	}
}
Enqueue(){
	if(f == -1){
		f=0;
	}
	system("cls");
	printf("\t-------------------------\n");
	printf("\t|        Enqueue        |\n");
	printf("\t-------------------------\n\n");
	if(r != 9 && r != -1){
		i=r;
	}else{
		i=0;
	}
	for(i; i<10; i++){	
		if(data[i] == 0){
			printf("Enqueue[%d] : ",i+1);
			data[i] = getch();
			r=i;
			Show();
			break;
		}
		else if(i == 9){
				printf("\tQueue Overflow!");
				if(getch()){
					Show();
				}
			break;
		}
	}
}
Dequeue(){
	system("cls");
	printf("\t-------------------------\n");
	printf("\t|         Dequeue        |\n");
	printf("\t-------------------------\n\n");
	if(f != -1){
		i=f;
	}
	for(i; i<10; i++){
		if(data[i] != 0){
			printf("\tDequeue[%d] : %c",i+1,data[i]);
			if(getch()){
				data[i] = 0;
				f=i+1;
				Show();
				break;
			}	
		}
		else if(i == 9){
			printf("\tQueue Underflow!");
			if(getch()){
				Show();
			}
			break;
		}
	}
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
	Menu();
}
