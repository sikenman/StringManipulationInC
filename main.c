#include <stdio.h>

int StringLength(char *);
char *StringReverse(char *);
char *ToLowerCase(char *);
char *ToUpperCase(char *);
char *StringLeft(char *, int);
char *StringRight(char *, int);

/*
	Some core level string manipulating functions written in C
	Author        : [Siken MS Dongol]
	Created Date  : [1/26/2019]
	Modified Date : [1/27/2019]
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
	printf("\nEnd of the Program!");
}

/* Function to find the length of the string*/
int StringLength(char *InStr) {
	int i = 0;
	while (InStr[i++] != '\0');
	return --i;
}

/* Function that reserve the given string*/
char* StringReverse(char *InStr) {

	int len = StringLength(InStr);

	//Dynamic memory allocation
	char *OutString = malloc(sizeof(char) * (len));

	int index = 0;
	while (len > 0) {
		OutString[index++] = InStr[--len];
		//printf_s("%d %d %s\n", len, index, output);
	}

	OutString[index] = '\0';	// Safe Measure
	return OutString;
}

/* Function that converts the given string to lowercase characters*/
char* ToLowerCase(char *InStr) {

	int len = StringLength(InStr);

	//Dynamic memory allocation
	char *OutString = malloc(sizeof(char) * (len));

	int index = 0;
	while (InStr[index] != '\0') {
		char letter = InStr[index];
		if ((letter >= 65) && (letter <= 90))
			letter = letter + 32;
		OutString[index++] = letter;
	}

	OutString[index] = '\0';
	return OutString;
}

/* Function that converts the given string to uppercase characters*/
char* ToUpperCase(char *InStr) {

	int len = StringLength(InStr);

	//Dynamic memory allocation
	char *OutString = malloc(sizeof(char) * (len));

	int index = 0;
	while (InStr[index] != '\0') {
		char letter = InStr[index];
		if ((letter >= 97) && (letter <= 122))
			letter = letter - 32;
		OutString[index++] = letter;
	}

	OutString[index] = '\0';
	return OutString;
}

/* Function that extracts given N characters from the given string starting from left*/
char* StringLeft(char *InStr, int n) {

	if (n <= 0) n = 0;

	int len = StringLength(InStr);
	if (n >= len) n = len;

	//Dynamic memory allocation
	char *OutString = malloc(sizeof(char) * (n));

	int index = 0;
	while (n > 0) {
		OutString[index] = InStr[index];
		index++;
		n--;
	}

	OutString[index] = '\0';
	return OutString;
}

/* Function that extracts given N characters from the given string starting from right*/
char* StringRight(char *InStr, int n) {

	if (n <= 0) n = 0;

	int len = StringLength(InStr);
	if (n >= len) n = len;

	//Dynamic memory allocation
	char *OutString = malloc(sizeof(char) * (n));

	int index = 0;
	while (n > 0) {
		OutString[index] = InStr[len - n];
		index++;
		n--;
	}

	OutString[index] = '\0';
	return OutString;
}
