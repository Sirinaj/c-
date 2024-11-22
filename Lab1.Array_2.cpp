#include<stdio.h>
int select,*SePointer = &select,up[2],low[2];
float Data[20][20];
int showMenu(int *SPointer);
int UpAndLow(),SetData(),ShowData(),Cal();

main(){
	showMenu(SePointer);
}
int showMenu(int *SPointer){
	if(*SPointer == 0){
		printf("Select Menu\n");
		printf("1. Enter Upper/Lower Data\n");
		printf("2. Enter Data\n");
		printf("3. Calculate\n");
		printf("4. Show Data\n");
		printf("5. Exit\n");
		printf("Select : ");
		scanf("%d",&*SePointer);
		printf("\n");
		if(*SPointer == 1){
			UpAndLow();
		}
		else if (*SPointer == 2){
			SetData();
		}
		else if(*SPointer == 3){
			Cal();
		}
		else if(*SPointer == 4){
			ShowData();
		}
		else{
			return 0;
		}
	}
	else if(*SPointer == 1){
		printf("\n1. Enter Upper/Lower Data again\n");
		printf("2. Go to Menu\n");
		printf("3. Exit\n");
		printf("Select : ");
		scanf("%d",&*SePointer);
		if(*SPointer == 1){
			UpAndLow();
		}
		else if(*SPointer == 2){
			select=0;
			printf("\n");
			showMenu(SePointer);
		}
		else{
			return 0;
		}
	}
	else if (*SPointer == 2){
		printf("\n1. Continue Data\n");
		printf("2. Go to Menu\n");
		printf("3. Exit\n");
		printf("Select : ");
		scanf("%d",&*SePointer);
		if(*SPointer == 1){
			SetData();
		}
		else if(*SPointer == 2){
			select=0;
			printf("\n");
			showMenu(SePointer);
		}
		else{
			return 0;
		}
	}
	else if (*SPointer == 4){
		printf("\n1. Go to menu\n");
		printf("2. Exit\n");
		printf("Select : ");
		scanf("%d",&*SePointer);
		if(*SPointer == 1){
			select=0;
			printf("\n");
			showMenu(SePointer);
		}
		else{
			return 0;
		}
	}
}
int UpAndLow(){
	printf("Enter Upper Row : ");
	scanf("%d",&up[0]);
	printf("Enter Lower Row : ");
	scanf("%d",&low[0]);
	printf("Enter Upper Column : ");
	scanf("%d",&up[1]);
	printf("Enter Lower Column : ");
	scanf("%d",&low[1]);
	select = 1;
	showMenu(SePointer);
}
int SetData(){
	int row,column;
	float data;
	printf("\nEnter position Data Row : ");
	scanf("%d",&row);
	printf("Enter position Data Column : ");
	scanf("%d",&column);
	printf("Enter data : ");
	scanf("%f",&data);
	Data[row][column] = data;
	select = 2;
	showMenu(SePointer);
}
int Cal(){
	int a,b,c,d,cal,s1,s2;
	float ans;
	printf("\nEnter position Data[1] Row : ");
	scanf("%d",&a);
	printf("Enter position Data[1] Column : ");
	scanf("%d",&b);
	printf("Enter position Data[2] Row : ");
	scanf("%d",&c);
	printf("Enter position Data[2] Column : ");
	scanf("%d",&d);
	printf("\nSelect Calculate\n1. Plus(+)\n2. Minus(-)\n3. Multiply(*)\n4. Divie(/)\n5. Go to Menu\n6. Exit\n");
	printf("Select : ");
	scanf("%d",&cal);
	if(cal == 1){
		ans=Data[a][b]+Data[c][d];
	}
	else if (cal == 2){
		ans=Data[a][b]-Data[c][d];
	}
	else if(cal == 3){
		ans=Data[a][b]*Data[c][d];
	}	
	else if (cal == 4){
		ans=Data[a][b]/Data[c][d];
	}
	else{
		return 0;
	}
	printf("Answer : %.2f\n",ans);
	printf("Enter position to save Data Row : ");
	scanf("%d",&s1);
	printf("Enter position to save Data Column : ");
	scanf("%d",&s2);
	Data[s1][s2] = ans;
	select = 0;
	printf("\n");
	showMenu(SePointer);
}
int ShowData(){
	printf("\nShow Data\n");
	for(int i=low[0];i<=up[0];i++){
		for(int j=low[1];j<=up[1];j++){
			printf("Data[%d,%d] \t=\t%.2f\tAddress : \t%p\n",i,j,Data[i][j],&Data[i][j]);
		}
	}
	select = 4;
	showMenu(SePointer);
}
