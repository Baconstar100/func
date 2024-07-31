#include "utils.h"

int main(int argc, char *argv[]) {
	int numBeginPara, numEndPara;

	char *prob[strlen(argv[1])];
	strcpy(*prob, argv[1]);
	
	int x = FindNumChars(*prob, '(');

	printf("%d", x);
	return 0;
}

