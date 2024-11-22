#include "stdio.h"
#define max 999
int select,up,low,*SPointer = &select,Data[max];
int UpAndLow(),ShowData(),SetData(),showDialog(int *SPointer),Calculate();
main(){
	showDialog(SPointer);
}
int showDialog(int *SPointer){
	if(*SPointer == 0){
		printf("\nSelect Menu\n");
		printf(" 1. Enter Upper/Lower\n 2. Enter Data\n 3. Calculate\n 4. Show Data\n 5. Exit\n");
		printf("Select : ");
		scanf("%d",&*SPointer);
		if(*SPointer == 1){UpAndLow();}
		else if(*SPointer == 2){SetData();}
		else if(*SPointer == 3){Calculate();}
		else if(*SPointer == 4){ShowData();}
		else{ return 0; }
	}else if(*SPointer == 1){
		printf("\n 1. Enter Upper/Lower again\n 2. Go to menu\n 3. Exit\n");
		printf("Select : ");
		scanf("%d",&*SPointer);
		if(*SPointer == 1){UpAndLow();}
		else if(*SPointer == 2){ select = 0;showDialog(SPointer);}
		else{ return 0; }
	}else if(*SPointer == 2){
		printf("\n 1. Continue Enter data\n 2. Go to menu\n 3. Exit\n");
		printf("Select : ");
		scanf("%d",&*SPointer);
		if(*SPointer == 1){SetData();}
		else if(*SPointer == 2){select = 0;showDialog(SPointer);}
		else{return 0;}
	}else if(*SPointer == 3){

	}
	else if(*SPointer == 4){
		printf("\n 1. Go to menu\n 2. Exit\n");
		printf("Select : ");
		scanf("%d",&*SPointer);
		if(*SPointer == 1){select = 0;showDialog(SPointer);}
		else{return 0;}
	}
}
int UpAndLow(){
	printf("\n\n\nEnter Upper : ");
	scanf("%d",&up);
	printf("Enter Lower : ");
	scanf("%d",&low);
	select = 1;
	showDialog(SPointer);	
}
int SetData(){
	int pos,data;
	printf("\n\n\nEnter position data : ");
	scanf("%d",&pos);
	printf("Enter data : ");
	scanf("%d",&data);
	Data[pos] = data;
	select = 2;
	showDialog(SPointer);
}
int Calculate(){
	int a,b,opt,cal,save,save2;
	printf("\n\n\nEnter position data[A]");
	scanf("%d",&a);
	printf("Enter position data[B]");
	scanf("%d",&b);
	printf("\n\n\nSelect Calculater\n1. Plus(+)\n2. Minus(-)\n3. Multiply(*)\n4. Divie(/)\n5. Goto Menu\n6.Exit\n");
	printf("Select : ");
	scanf("%d",&opt);
	if(opt == 1){cal= Data[a]+Data[b];}
	else if(opt == 2){cal=Data[a]-Data[b];}
	else if(opt == 3){cal=Data[a]*Data[b];}
	else if(opt == 4){cal=Data[a]/Data[b];}
	else if(opt == 5){select = 0;showDialog(SPointer);}
	else{return 0;}
	printf("Result = %d\n",cal);
	printf("Enter position to save result : ");
	scanf("%d",&save);
	printf("Enter 1.Save 2.Cancel :");
	scanf("%d",&save2);
	if(save2 == 1){ Data[save]=cal;}
	select = 0;
	showDialog(SPointer);
}
int ShowData(){
	printf("\nShow Data\n");
	for(int i=low;i<=up;i++){
		printf("Data[%d] \t=\t%d\t\tAddress :\t%p\n",i,Data[i],&Data[i]);
	}
	select = 4;
	showDialog(SPointer);
}
