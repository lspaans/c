#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This function escapes ('\') all occurences of the character indicated
 * by the variable 'c' in the string referenced by 'line_in' and stores
 * the output in the string 'line_out' and returns a reference to it.
 */

char* escape(char* line_in, char c) {
    size_t max_length_line_out = strlen(line_in) * 2;
    char* line_out = (char *) malloc(sizeof(char) * max_length_line_out);
    int i;
    int j = 0;
    for(i=0;i<strlen(line_in);i++) {
        if (*(line_in+i) == c) {
            *(line_out+j) = '\\';
            j++;
        }
        *(line_out+j) = *(line_in+i);
        j++;
    }
    return(line_out);
}

void main() {
    char* line_in = "This is \"a test\"";
    char* line_out = escape(line_in, '"');

    printf("line_out = '%s'\n", line_out);
}


