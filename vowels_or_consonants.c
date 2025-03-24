#include<stdio.h>
void main ()
{
	char ch;
	printf("Enter an ALPHABET :");
	scanf("%c",&ch);
	//Convert the alphabets to lower case to make the program case sensitive.
	ch=(ch>='A'&&ch<='Z')?ch+32:ch;
	switch(ch){
		case 'a':
		case 'e':
	    case 'i':
	  	case 'o':
		case 'u':
			printf("It is an vowel!");
			break;
			default:
				printf("it is a consonant!");
	    			
	    	
	}
	
}
