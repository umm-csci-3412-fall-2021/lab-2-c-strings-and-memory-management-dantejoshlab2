#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"


int checkVowel(char ch){
	if (ch =='a' || ch =='e' || ch =='i' || ch == 'o' || ch == 'u')
		return 1;
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		return 1;

	 return 0;
}

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

