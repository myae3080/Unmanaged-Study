/*
	func_s gurantees safety but, if other compiler not support this function
	it might cause problem in code compatability.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void DataTypeIOFunc() {
	printf("%s\n", "dataTypeIOFunc ===================================");

	int num;
	short short_num;
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
	scanf("%hd", &short_num);

	scanf("%s", name);

	printf("입력 받은 값 : %d\n", num);
	printf("입력 받은 값 : %d\n", short_num);
	printf("입력 받은 값 : %s\n", name);
}

void SizeOfFunc() {
	printf("%s\n", "sizeOfFunc ===================================");

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(10));
}
