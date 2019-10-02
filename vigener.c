#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool checkArgs(int argc, char* argv[]);

typedef enum {ENCRYPT, DECRYPT} possibleOperations;


possibleOperations operation;
char* key = NULL;


int main(int argc, char* argv[]) 
{
	if(!checkArgs(argc, argv)) {
		printf("invalid arguments\n");
		exit(1);
	}

	if()

	return 0;
}

bool checkArgs(int argc, char* argv[])
{
	//check, if there are exactly two arguments
	if(argc != 3) return false;

	//check, if first argument is -e (encrypt) od -d (decrypt)
	if(strcmp(argv[1], "-e") == 0) {
		operation = ENCRYPT;
	} else if (strcmp(argv[1], "-d") == 0) {
		operation = DECRYPT;
	} else {
		return false;
	}

	//check, if key is alphabetical
	for(int i = 0; i < strlen(argv[2]); i++) {
		if(!isalpha(argv[2][i])) return false;
	}

	key = argv[2];

	return true;
}