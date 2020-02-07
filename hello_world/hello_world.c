
#include <unistd.h>

char *string = "Hello world!\n"

// string++;  // increments pointer to the next memory location

int main(int argc, char *argv[], char **envp)
{

    return write(1, (void *)string, 12);
// file descriptor 1 is stdout
// const void *string is the buffer, which not going to be modified (const)
// size_t 12 is the length requested to write
// check these with the man command - it specifies how to use the API.

}

