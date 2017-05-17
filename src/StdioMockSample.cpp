#include <stdio.h>
#include "StdioMockSample.h"

void foo(char* filename, char* mode){
    fopen(filename, mode);
}
