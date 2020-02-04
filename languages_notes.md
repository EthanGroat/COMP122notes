## LANGUAGES


### 3 Gross Domains:
    Business        Scientific       System
        |                |           |  |  |
      COBOL           Fortran        A  B  C


-----------------------------
### Considerations for Languages:
    Community               Redibility
    Portability             Readability
    Performance-Cost        Writeability
                            Security
                            Cost


Type coercion - a weakly typed notion:
    (float)3 + 2.0 = 5.0


Java Virtual Machine is a **Stack Machine**

    a = 2 + 6

#### stack:

     6
     2
     +
     a
     =

---


## C language:

    libC.a   static library
        .o   dynamic library


```C

#include <stdio.h>
#include "my file in this directory.h"

// always put literal constants in the compiler definitions - good practice:
#define PI 3.14159


double n = 2.0;  // this double is in global space


int main(int argc, char *argv[], char *envp[])
//    argc == count of args      
//    char *envp[] == char **envp == pointer to a pointer to a char == array of pointers to chars
{
    int d = 5;
    double m = 2.3;
    
    
    return 0;
}

```


### Data Types:
![C Data Types Table](Various-Data-Type-in-C.jpg)


### Unions to implement polymorphism:
Struct stores all specified types, 
while Union stores the biggest of all types, changing the actual stored 
type dynamically within the one allocated space.

--------

Arrays are just adding pointers:

`A[3] == 3[A] == (&A + 3)`

----

```C
int *A;
int B;

(*A) = 3;
B = *A;  // B == 3;

B = 4;
(*A) = B;  // *A == 4;
```

-----------------------------

## C "Hello World"

Show contents of the header file and other useful tools for the shell:
```bash
cat /usr/include/unistd.h

man write
man -k write
man 2 write
man read
```


```C
#include <unistd.h>

char *string = "Hello world!\n"

// string++;  // increments pointer to the next memory location

int main(int argc, char *argv[], char **envp)
{

    return write(1, (void *)string, 12);

}
```