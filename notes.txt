## LANGUAGES
===============


### 3 Gross Domains:
------------------------
Business	Scientific	System
    |                |           | | |
  COBOL           Fortran        A B C


Considerations for Languages:
----------------------------- 
Community               Redibility
Portability             Readability
Performance-Cost        Writeability
                        Security
                        Cost


Type coercion - a weakly typed notion:
(float)3 + 2.0 = 5.0


Java Virtual Machine is a *Stack Machine*

a = 2 + 6

stack:
 6
 2
 +
 a
 =
---


C language:
libC.a   static library
    .o   dynamic library


```C

#include <stdio.h>
#include "my file in this directory.h"

// always put literal constants in the compiler definitions - good practice:
#define PI 3.14159


double n = 2.0; // this double is in global space


int main(int argc, char *argv[], char **envp[])
//    argc = count of args      
{
    int d = 5;
    double m = 2.3;
    
    
    return 0;
}

```


