#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    char mystring[30];

    while(tolower(mystring[0]) != 'q'){
            printf("Please enter a word: ");
    scanf("%s", mystring);
    printf("%s", mystring);
    if(tolower(strlen(mystring) == 1 && mystring[0]) == 'q'){
        break;
    }
    int length = strlen(mystring);
    char *pstring = (char *) malloc((length + 1) * sizeof(char));
    strcpy(pstring, mystring);
    printf("the length is %i\n", length);
    char reverse[30];
    int counter = 0;

    for(int i = length - 1; i >= 0; i--){
        reverse[counter] = pstring[i];
        counter++;
    }
    reverse[counter] = '\0';
    printf("The word reversed is %s\n", reverse);
    free(pstring);
    }

    return 0;
}
