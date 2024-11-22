#include <stdio.h>

int* bubbleSort(int theArray[],int n){
	for(int pass=1;pass<n;pass++){
		for(int index=0;index<n-pass;index++){
			int nextIndex = index+1;
			if(theArray[index]> theArray[nextIndex]){
				int temp = theArray[index];
				theArray[index] = theArray[nextIndex];
				theArray[nextIndex] = temp;
			}
		}
	}
	return theArray;
}
void printArray(int theArray[], int n) {	
  	printf("After : ");
  	for (int i=0;i<n;++i) { 
    	printf("%d  ",theArray[i]); 
  	}
  	printf("\n");
}
main(){
	int data[10],num=10;
	for(int i;i<num;i++){
		printf("input Data[%d] : ",i+1);
		scanf("%d",&data[i]);
	}
	printf("Before : \n");
  	for (int i=0;i<num;++i) { 
    	printf("%d  ",data[i]); 
  	}
	bubbleSort(data,num);
	printArray(data,num);
}
