/*
	func_s gurantees safety but, if other compiler not support this function
	it might cause problem in code compatability.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	int num;
	short shNum;
	char name[20];
	char animal[20] = "monkey";

	printf("%s\n", animal);

	/*
		Without using 'define _CRT_SECURE_NO_WARNINGS',
		it throw error because not safe to use.
	*/
	strcpy(animal, "lion");
	//strcpy_s(animal, sizeof(animal), "lion");

	printf("%s\n", animal);

	//scanf_s("%d", &num);
	scanf("%d", &num);
	// Using %d cause severe error.
	//scanf_s("%hd", &shNum);
	scanf("%hd", &shNum);

	scanf("%s", name);

	printf("입력 받은 값 : %d\n", num);
	printf("입력 받은 값 : %d\n", shNum);
	printf("입력 받은 값 : %s\n", name);
	
	system("pause");

	return 0;
}