//Fill in the missing code in the below sample code which copies a given string into another string.
// Instructions:-
//1) Initially, read a string from the standard input device and write a loop to copy each character of given string into another string till the end of the string is reached.
//2) Place '\0' at the end of the copied string.
//3) Finally, the copied string is displayed on the screen.

//Expected input & output:-
//Enter a String-1: Nithin
//The copied String-2 is Nithin

#include <stdio.h>
int main() {
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}