#include <stdio.h>
int main(){
	int sub[5][4],j,k;
	float sum[4],avg[5];
	for(j=0; j<5; ++j){
		printf ("Please enter scores of a student no.%d\n",j+1);
		printf ("Programming : ");
		scanf ("%d",&sub[j][0]);
		sum[0] += sub[j][0];
		printf ("pro : %.2f\n",sum[0]);
			
		printf ("Database    : ");
		scanf ("%d",&sub[j][1]);
		sum[1] += sub[j][1];
		printf ("data : %.2f\n",sum[1]);
			
		printf ("Mathemetic  : ");
		scanf ("%d",&sub[j][2]);
		sum[2] += sub[j][2];
		printf ("math : %.2f\n",sum[2]);
			
		printf ("English     : ");
		scanf ("%d",&sub[j][3]);
		sum[3] += sub[j][3];
		printf ("eng : %.2f\n",sum[3]);
		avg[j] = sub[j][0] + sub[j][1] + sub[j][2] + sub[j][3];

	}
	printf ("-----------------------------------------\n");
	printf ("Average score of Programming: %.2f\n",sum[0]/5);
	printf ("Average score of Database   : %.2f\n",sum[1]/5);
	printf ("Average score of Mathemetic : %.2f\n",sum[2]/5);
	printf ("Average score of English    : %.2f\n",sum[3]/5);
	printf ("-----------------------------------------\n");
	for (k=0; k<5; ++k){
		printf("Average score of a student no.%d : %.2f\n",k,avg[k]/4);
	}
	
	return 0;
}
