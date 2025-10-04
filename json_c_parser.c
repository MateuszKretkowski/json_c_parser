#include <stdio.h>
#include <stdlib.h>

#include "hashmap.h"

enum {
    TOKEN_BRACE_OPEN,
    TOKEN_BRACE_CLOSE,
    TOKEN_BRACKET_OPEN,
    TOKEN_BRACKET_CLOSE,
    TOKEN_COLON,
    TOKEN_COMMA,

    TOKEN_STRING,
    TOKEN_NUMBER,

    TOKEN_TRUE,
    TOKEN_FALSE,
    TOKEN_NULL
} TOKEN_TYPES;

typedef enum {
    JSON_NULL,
    JSON_BOOLEAN,
    JSON_NUMBER,
    JSON_STRING,
    JSON_ARRAY,
    JSON_OBJECT,
} JSON_Type;

typedef struct {
    JSON_Type type;

    char* JSON_STRING;
    double JSON_NUMBER;

    union {
        char *v_string;
        double v_number;
        int v_boolean;
        struct JSON_OBJECT *v_object;
        struct JSON_ARRAY *v_array;
    } data;
    
} JSON_Value;

int main() {
    printf("Hello World!");
    getchar();
    return 0;
}