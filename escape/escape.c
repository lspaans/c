#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* escape(char* line_in) {
    size_t max_length_line_out = strlen(line_in) * 2;
    char* line_out = (char *) malloc(sizeof(char) * max_length_line_out);
    int i;
    int j = 0;
    for(i=0;i<strlen(line_in);i++) {
        if (*(line_in+i) == 34) {
            *(line_out+j) = '\\';
            j++;
        }
        *(line_out+j) = *(line_in+i);
        j++;
    }
    return(line_out);
}

void main() {
    char* line_in = "Wo\"ei";
    char* line_out = escape(line_in);

    printf("line_out = '%s'\n", line_out);
}


