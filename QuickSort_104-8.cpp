#include<stdio.h>

void quicksort(int array[10],int low,int high){
int x, y, p, temp;
if(low<high){
    p=low;
    x=low;
    y=high;
    while(x<y){
        while(array[x]<=array[p]&&x<high)
        x++;
            while(array[y]>array[p])
            y--;
            if(x<y){
                temp=array[x];
	            array[x]=array[y];
                array[y]=temp;
            }
        }
        temp=array[p];
        array[p]=array[y];
        array[y]=temp;
        quicksort(array,low,y-1);
        quicksort(array,y+1,high);
    }
}
int main(){
    int x, count=10, array[10];
    printf("Enter 10 Data : ");
    for(x=0;x<count;x++)
        scanf("%d",&array[x]);
        quicksort(array,0,count-1);
    printf("After : ");
    for(x=0;x<count;x++)
        printf(" %d",array[x]);
    return 0;
}
