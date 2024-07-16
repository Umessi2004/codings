#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
// int i=0;
int vowelcheck(char c)
{
    c=tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    return 0;
}
int vowelstring(char *s)
{
    while(*s){
        if(!vowelcheck(*s)){
            return 0;//that means it contains a consonant
        }
        *s++;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("enter a word:");
    scanf("%s", str);
    if(vowelstring(str)){
        printf("the word is a vowel string\n");
    }
    else{
        printf("the word is not a vowel string\n");
    }
    return 0;
}