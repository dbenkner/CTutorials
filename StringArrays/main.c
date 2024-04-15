#include <stdio.h>
#include <string.h>


int main() {
    char word[] = {'H', 'e', 'l', 'o', '\0'};

    int length = sizeof(word) / sizeof(word[0]);

    printf("%s\n", word);

    char wordHELLO[] = "Hello";

    printf("%s\n", wordHELLO);

    char phrase[] = "Hello World!";

    length = strlen(phrase);

    printf("String length: %i\n", length);

    char orginal[] = "Hello World!";
    char destination[20];

    strcpy(destination, orginal);

    printf("Copied string: %s\n", destination);

    char greeting[50]  = "Hello, ";

    char name[] = "David";

    strcat(greeting, name);

    printf("Message: %s\n", greeting);

    char word1[] = "apples";
    char word2[] = "oranges";

    int result = strcmp(word1,word2);

    printf("Result %i \n", result);
}