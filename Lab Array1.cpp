#include <stdio.h>
int main(){
	char num[20],upper[20],lower[20],word[20];
	int k=0,k1=0,k2=0,k3=0;
	printf ("Please insert a sentence : ");
	scanf ("%s",word);
	do{
		if (word[k]>47 && word[k]<59){
			num[k1++] = word[k];
		}
		else if (word[k]>64 && word[k]<91){
			upper[k2++] = word[k];
		}
		else if (word[k]>96 && word[k]<123){
			lower[k3++] = word[k];
		}
		k=k+1;
	}while(word[k]!='\0');
	num[k1] = 0;
	upper[k2] = 0;
	lower[k3] = 0;
	
	printf ("The number : %s\n",num);
	printf ("The uppercase character : %s\n",upper);
	printf ("The lowercase character : %s\n",lower);
	return 0;
}
