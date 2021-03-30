//Complete the given program with string declaration/initialization & read/print the string
// Instructions:-
//1) Initially, declare a string with size
//2) read the input string from user 
//3) Finally, Print the input string obtained from user.

//Expected input & output:-
//Enter a String: Vidyavardhaka
//The input string is Vidyavardhaka

#include <stdio.h>
int main() 
{
char str[100],i; //Declare the string
printf("Enter a String: ") ;
gets(str);//read the string from user
 printf("the entered string is %s",str);
return 0;
}
