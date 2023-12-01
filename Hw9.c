#include <stdio.h>

int convCase(int ch){
    const int diff = 'a'-'A';
    if (ch>='A'&& ch<='Z')
        return ch +diff;
    else if(ch >='a' && ch<='z')
        return ch-diff;
    else 
        return ch;
}

int main(void){
    char input[1000];
    printf("Input> ");
    fgets(input, sizeof(input), stdin);

    for (int i=0; input[i] != '\0'; i++){
        input[i]=convCase(input[i]);
    }
    printf("Output> %s", input);
    return 0;
}
