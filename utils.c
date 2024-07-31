#include "utils.h"

int FindNumChars(char *str, char lookFor) {
	int amount = 0;
	for (int i = 0; i < strlen(str); ++i) {
		if (str[i] == lookFor) ++amount;
	}
	return amount;
}

void RemoveChars(char **str, char remove) {
	int writer = 0;
	for (int i = 0; i < strlen(*str); ++i) {
		if (*str[i] == remove) str[writer++] = str[i];
	}
}
