#include <stdio.h>

int main() {
    char ankush[] = {'a', 'n', 'k', 'u', 's', 'h','\0'};
    char *i=ankush;
    while(*i!='\0') {
        printf("%c", *i); 
        // Use %c to print individual characters
        i++;
    }
    
    return 0;
}
