#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

/* This function checks to see if a character is a vowel and returns a 1 if it is or 0 otherwise */
int checkVowel(char ch){
	if (ch =='a' || ch =='e' || ch =='i' || ch == 'o' || ch == 'u')
		return 1;
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		return 1;

	 return 0;
}

/* This function takes in a string, loops through every character and calls checkVowel on that character and removes it if it is. */ 
char *disemvowel(char *str) {
  char *result;
  int len, i,counter;
  len = strlen(str);
  counter = 0;
  result = (char*) calloc(len+1,sizeof(char));

  for (i=0; i < len; ++i) {
	  if(checkVowel(str[i]) == 0) {
	 	result[counter] = str[i];
		counter = counter + 1;
	 }
  }
  result[len] = '\0';
  return result;
}

