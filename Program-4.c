// Fill in the missing code in the below sample code which finds the length of the given string and prints result.
//Instructions:-
// 1)Read a string from the standard input device
// 2) using loop calculate the length of string 
// 3) print the length

//Expected input & output:-
//Enter a string: Vidyavardhaka
//The length of string = 13

int main()
{
    char Str[1000];
    int i;
  
    printf("Enter the String: ");
    scanf("%s", Str);
  
    for (i = 0; Str[i] != '\0'; ++i);
  
    printf("Length of Str is %d", i);
  
    return 0;
}