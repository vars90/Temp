#include "acronym.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    char* phrase = "Portable,network Graphics";
    char* expected = abbreviate(phrase);            // function call
    
    printf("%s in main function",expected);         // printing output
    
    return 0;
}



char* abbreviate(const char* phrase)
{
    static char expected[10];
    int i=0;
    int j=0;
    expected[j]=toupper(phrase[i]);
    
    while(phrase[i]!='\0')                      // checking for end of string
    {
        if((phrase[i] == ' ') || (phrase[i] == ',') || (phrase[i] == '-'))                      // checking for space in the string
        {
            j++;
            expected[j]=toupper(phrase[i+1]);            // geting the first character of the word
        
        }
        i++;
    }
    
    expected[j+1]='\0';                         // embedding end of string 
    
    printf("%s in the loop \t",expected);       // checking output in the function
    return(expected);
}