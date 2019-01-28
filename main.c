#include <stdio.h>

int StringLength(char *);
char *StringReverse(char *);
char *ToLowerCase(char *);
char *ToUpperCase(char *);
char *StringLeft(char *, int);
char *StringRight(char *, int);
char *StringMid(char *, int, int);
char *StringMid2(char *, int);

/*
	Some core level string manipulating functions written in C
	Author			: [Siken MS Dongol]
	Created Date	: [1/26/2019]
	Modified Date	: [1/27/2019]
*/
void main() {

	printf("%s\n", "String Manipulations In C without using Library");
	printf("%s\n", "===============================================");
	printf("\n");

	char MyString[200];
	printf("Enter String: ");
	scanf("%[^\n]s", MyString);	// allows all character but NewLine

	printf("\n");
	printf("Original : %s\n", MyString);
	printf("Length   : %d\n", StringLength(MyString));
	char* revString = StringReverse(MyString);
	printf("Reversed : %s\n", revString);
	printf("ToLower  : %s\n", ToLowerCase(MyString));
	printf("ToUpper  : %s\n", ToUpperCase(MyString));
	printf("Left(0)  : %s\n", StringLeft(MyString, 0));
	printf("Left(4)  : %s\n", StringLeft(MyString, 4));
	printf("Left(99) : %s\n", StringLeft(MyString, 99));
	printf("Right(0) : %s\n", StringRight(MyString, 0));
	printf("Right(7) : %s\n", StringRight(MyString, 7));
	printf("Right(99): %s\n", StringRight(MyString, 100));
	printf("Mid(3,5) : %s\n", StringMid(MyString, 3, 5));
	printf("Mid(8)   : %s\n", StringMid2(MyString, 8));
	printf("\nEnd of the Program!");
}

/* Function to find the length of the given string*/
int StringLength(char *InStr) {
	int i = 0;
	while (InStr[i++] != '\0');
	return --i;
}

/* Function that reserve the given string*/
char* StringReverse(char *InStr) {

	int len = StringLength(InStr);

	//Dynamic memory allocation
	char *OutStr = malloc(sizeof(char) * (len));

	int index = 0;
	while (len > 0) {
		OutStr[index++] = InStr[--len];
		//printf_s("%d %d %s\n", len, index, OutStr);
	}

	OutStr[index] = '\0';	// Safe Measure
	return OutStr;
}

/* Function that converts the given string to lowercase characters*/
char* ToLowerCase(char *InStr) {

	int len = StringLength(InStr);

	//Dynamic memory allocation
	char *OutStr = malloc(sizeof(char) * (len));

	int index = 0;
	while (InStr[index] != '\0') {
		char letter = InStr[index];
		if ((letter >= 'A') && (letter <= 'Z'))	// A:65, Z:90
			letter = letter + 32;
		OutStr[index++] = letter;
	}

	OutStr[index] = '\0';
	return OutStr;
}

/* Function that converts the given string to uppercase characters*/
char* ToUpperCase(char *InStr) {

	int len = StringLength(InStr);

	//Dynamic memory allocation
	char *OutStr = malloc(sizeof(char) * (len));

	int index = 0;
	while (InStr[index] != '\0') {
		char letter = InStr[index];
		if ((letter >= 'a') && (letter <= 'z'))	// a:97, z:122
			letter = letter - 32;
		OutStr[index++] = letter;
	}

	OutStr[index] = '\0';
	return OutStr;
}

/* Function that extracts given N characters from the given string starting from left*/
char* StringLeft(char *InStr, int n) {

	if (n <= 0) n = 0;

	int len = StringLength(InStr);
	if (n >= len) n = len;

	//Dynamic memory allocation
	char *OutStr = malloc(sizeof(char) * (n));

	int index = 0;
	while (n > 0) {
		OutStr[index] = InStr[index];
		index++;
		n--;
	}

	OutStr[index] = '\0';
	return OutStr;
}

/* Function that extracts given N characters from the given string starting from right*/
char* StringRight(char *InStr, int n) {

	if (n <= 0) n = 0;

	int len = StringLength(InStr);
	if (n >= len) n = len;

	//Dynamic memory allocation
	char *OutStr = malloc(sizeof(char) * (n));

	int index = 0;
	while (n > 0) {
		OutStr[index] = InStr[len - n];
		index++;
		n--;
	}

	OutStr[index] = '\0';
	return OutStr;
}

/* Function that extracts given N characters from the given string starting from start position*/
char* StringMid(char *InStr, int start, int n) {

	if (n <= 0) n = 0;
	if (start <= 0) start = 1;

	int len = StringLength(InStr);
	if (n >= len) n = len;

	//Dynamic memory allocation
	char *OutStr = malloc(sizeof(char) * (n));

	int index = 0;
	while (n > 0) {
		OutStr[index] = InStr[(start - 1) + index];
		index++;
		n--;
	}

	OutStr[index] = '\0';
	return OutStr;
}

/* Function that extracts characters from the given string starting from start position till end*/
char* StringMid2(char *InStr, int start) {

	int len = StringLength(InStr);
	int n = len - start;

	if (start <= 0) {
		start = 1;
		n = len;
	}

	//Dynamic memory allocation
	char *OutStr = malloc(sizeof(char) * (n));

	int index = 0;
	while (n >= 0) {
		OutStr[index] = InStr[(start - 1) + index];
		//printf_s("%d %d %s\n", len, index, OutStr);
		index++;
		n--;
	}

	OutStr[index] = '\0';
	return OutStr;
}
