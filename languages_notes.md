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
// file descriptor 1 is stdout
// const void *string is the buffer, which not going to be modified (const)
// size_t 12 is the length requested to write
// check these with the man command - it specifies how to use the API.

}
```

--------

```
  lval    vs    rval

 address  vs   value

   &a     vs     a

    a     =      b
```

----

assign to address of something in C:
```C
a = &b // asigns value at &a to address of b (&b)
```

in bash it's opposite:
```
rval
$home

lval
home
```

--------


## Files

file descriptor is an int

default values that are already open are 0, 1, 2
(standard input, standard output, and standard error)

you can open new files with:
```C
int newfile;  // file descriptor
newfile = open("filename", "r/*r,w*/", )
close(newfile);
```

----

Note: get good at bit shifting!
(multiplication and division)
 - it helps with converting numbers!

----

Bitwise logic operators: (work at the bit level)

      |     or
      &     and
      ^     xor
      ~     not

Shift operators:

      <<    left (logical)
      >>    right (logical)
      >>>   arithmetic right shift

```C
a = 0b01011011;
a<<1; // 10110110
a>>3; // 00010110
```

We use 2's compliment to represent negative numbers and have a total order.
2's compliment is just 1's compliment plus one, and 1's comp is just bitwise negation.
So to find a negative number, these two are equivalent:

```C
-a == (~a) + 1
```

----

Note: review complement, it's confusing.
(1's comp, 2's comp, 10's comp, etc.)




