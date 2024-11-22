#include <stdio.h>
main(){
    int select=0,up=0,low=0,se,ad,data[10],po,a,b,ans;
    for(int j=0;j<10;j++){data[j]=0; }
    for(int i=2;i>1;i++){
    switch(select){
        case 0 :
            printf("Select Menu\n");
            printf(" 1.Enter Upper/Lower\n");
            printf(" 2.Enter Data\n");
            printf(" 3.Calculate\n");
            printf(" 4.Show Data\n");
            printf(" 5.Exit\n");
            printf("Select: ");
        scanf("%d",&select);
        break;
        case 1 : 
            printf("Enter Upper : ");
            scanf("%d",&up);
            printf("Enter Lower : ");
            scanf("%d",&low);
            printf(" 1.Enter Upper/Lower again\n");
            printf(" 2.Go to menu\n");
            printf(" 3.Exit\n");
            printf("Select : ");
            scanf("%d",&se);
            if(se == 1){select=1;}
            if(se == 2){select=0;}
            if(select == 0){
            printf("\n");
            }
break;
        case 2 :
            printf("Position Data : ");
            scanf("%d",&po);
            printf("Enter Data : ");
            scanf("%d",&data[po]);
            printf("\n 1.Continue Enter data\n");
            printf(" 2.Go to menu\n");
            printf(" 3.Exit\n");
            printf("Select : ");
            scanf("%d",&se);
            if(se == 1){select=2;}
            if(se == 2){select=0;}
            if(select == 0){
            printf("\n");
            }
break;
        case 3 : 
            printf("Enter Data[A] : ");
            scanf("%d",&a);
            printf("Enter Data[B] : ");
            scanf("%d",&b);
            printf("\nSelect Calculate : \n");
            printf(" 1.Plus(+)\n");
            printf(" 2.Minus(-)\n");
            printf(" 3.Multiply(*)\n");
            printf(" 4.Divie(/)\n");
            printf(" 5.Go to menu\n");
            printf(" 6.Exit\n");
            printf("Select : ");
            scanf("%d",&se);
            if(se == 5){select=0;}
            if(se <= 4){
                if(se == 1){ans = data[a] + data[b];}
                if(se == 2){ans = data[a] - data[b];}
                if(se == 3){ans = data[a] * data[b];}
                if(se == 4){ans = data[a] / data[b];}
            printf("= Resule = %d \n",ans);
            printf("Enter position to save reult: ");
            scanf("%d",&a);
            printf("Enter 1.Save 2.Cancel : ");
            scanf("%d",&b);
                if(b == 1){data[a] = ans;}
            printf("\n");
            printf(" 1. Calcuate again\n");
            printf(" 2. Go to menu\n");
            printf(" 3. Exit\n");
            printf("Select: ");
            scanf("%d",&se);
            if(se == 1){select=3;}
            if(se == 2){select=0;}
            }
break;
case 4 :
            printf("\t Show Data\n");
            for(ad=low;ad<=up;ad++){
                if(ad>=0 && ad<=9 && data[ad]>=0 && data[ad]<=9){
                    printf("Data[%d]\t=\t%d\tAddress:\t%p\n",ad,data[ad],&data[ad]);
                }
                else{
                    printf("Data[%d]\t=\t%d\tAddress:\t%p\n",ad,data[ad],&data[ad]);
                }
            }
            printf("\n");
            printf(" 1. Go to menu\n");
            printf(" 2. Exit\n");
            printf("Select: ");
            scanf("%d",&se);
            if(se == 1){select=0;}
            if(select == 0){
            printf("\n");
            }
break;
        default : i=0; break;
    }
    }
}
