#include <unistd.h>
#include <stdio.h>

#ifndef DATABASE
#define DATABASE

typedef struct {
    char *buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

typedef enum {
    STATEMENT_INSERT,
    STATEMENT_SELECT
} StatementType;

typedef struct {
    StatementType type;
} Statement;

typedef enum {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

typedef enum {
    PREPARE_SUCCESS,
    PREPARE_UNRECOGNIZED_STATEMENT
} PrepareResult;

PrepareResult prepare_statement(InputBuffer* input_buffer, Statement* statement);
void execute_statement(Statement* statement);
MetaCommandResult do_meta_command(InputBuffer* input_buffer);
void print_prompt();
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void read_input(InputBuffer* input_buffer);
void close_input_buffer(InputBuffer* input_buffer);
int main(void);



#endif