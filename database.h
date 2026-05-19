#include <unistd.h>
#include <stdio.h>

#ifndef DATABASE
#define DATABASE

typedef struct {
    char *buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;


void print_prompt();
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void read_input(InputBuffer* input_buffer);
void close_input_buffer(InputBuffer* input_buffer);
int main(void);



#endif