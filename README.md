# StringManipulationInC
Few core string manipulating functions in C

By Siken Dongol Jan 27-Jan 28, 2019

Functions written in core C without using any library functions.
```c
int StringLength(char *);         // Find the length of the given string
char *StringReverse(char *InStr); // Reverse the given string
char *ToLowerCase(char *InStr);   // Convert all characters in the given string to lowercase characters
char *ToUpperCase(char *InStr);   // Convert all characters in the given string to uppercase characters
char *StringLeft(char *, int);    // Gets substring of N characters from the given string from left
char *StringRight(char *, int);   // Gets substring of N characters from the given string from right
char *StringMid(char *, int, int);// Get substring from the given string from start position upto N characters
char *StringMid2(char *, int);    // Get substring from the given string from start position till end
```

## Output
String Manipulations in C without using library

### Entered String
```
ABCD-efgh-IJKL-mnop-QRST-uvwx-YZ+1234567890!@#$%^&
```

### Length
```
50
```

### Reversed
```
&^%$#@!0987654321+ZY-xwvu-TSRQ-ponm-LKJI-hgfe-DCBA
```

### ToLower
```
abcd-efgh-ijkl-mnop-qrst-uvwx-yz+1234567890!@#$%^&
```

6. ToUpper  : ABCD-EFGH-IJKL-MNOP-QRST-UVWX-YZ+1234567890!@#$%^&
7. Left(0)  :
8. Left(4)  : ABCD
9. Left(99) : ABCD-efgh-IJKL-mnop-QRST-uvwx-YZ+1234567890!@#$%^&
10. Right(0) :
11. Right(7) : !@#$%^&
12. Right(99): ABCD-efgh-IJKL-mnop-QRST-uvwx-YZ+1234567890!@#$%^&
13. Mid(3,5) : CD-ef
14. Mid(8)   : gh-IJKL-mnop-QRST-uvwx-YZ+1234567890!@#$%^&

End of the Program!

Note:
=====
The above program was successfully complied with C complier that comes with Visual Studio 2017
