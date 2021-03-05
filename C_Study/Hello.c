//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	char animal[20] = "monkey";

	printf("%s\n", animal);

	/*
		Without using 'define _CRT_SECURE_NO_WARNINGS',
		it throw error because not safe to use.
	*/
	//strcpy(animal, "lion");
	strcpy_s(animal, sizeof(animal), "lion");

	printf("%s\n", animal);
	
	system("pause");

	return 0;
}