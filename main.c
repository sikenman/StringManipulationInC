#include <stdio.h>

int StringLength(char *);
char *StringReverse(char *InStr);
char *ToLowerCase(char *InStr);
char *ToUpperCase(char *InStr);

/*
	Some core level string manipulating functions written in C
	Author	: [Siken MS Dongol]
	Date	: [1/26/2019]
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
	printf("\nEnd of the Program!");

}

/* Function of find the length of the string*/
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
