#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char *word;
	char **sentence;

	//fill ds
	word = (char *)malloc(4*sizeof(*word));
	strcpy(word, "foo");

	printf("%s",word);
		
	sentence = (sentence *)malloc(4*sizeof( *sentence));
	


	return 0;
}
