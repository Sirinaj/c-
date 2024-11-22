#include <stdio.h>
int main(){
	char i;
	printf ("Please insert a character : ");
	scanf ("%c",&i);
	switch(i){
		case 'a': printf ("%c is a vowel",i); break;
		case 'e': printf ("%c is a vowel",i); break;
		case 'i': printf ("%c is a vowel",i); break;
		case 'o': printf ("%c is a vowel",i); break;
		case 'u': printf ("%c is a vowel",i); break;
		default : printf ("%c is a consonant",i);
	}
	return 0;
}
