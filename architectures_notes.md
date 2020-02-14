# ARCHITECTURES


--------------------------------------
## Classes of Machines:
  * Combinatorial Logic
  * Finite State Automata
  * Push Down Automata
  * Linear Bound Automata
  * Turing Machine
  * (Turing Machine + Oracle)

You can change the size of the resources to change the processing power, but
the class of processing power (class of problems it can solve) will not change.

--------------------------------------

### Von Neumann Architecture:
![Von Neumann Architecture Diagram](Von_Neumann_Architecture.svg)

---

### Harvard Architecture:
![Harvard Architecture Diagram](Harvard%20computer%20architecture.svg)

---

![Memory-Mapped I/O Diagram]

---

### MIPS memory layout:
![MIPS Program Layout](memory_diagram.png)


### Memory Hierarchy

    CPU Register | L1 | L2 | L3 | RAM | SSD | Disk | Tape


The
[Wikipedia page on MIPS architecture](https://en.wikipedia.org/wiki/MIPS_architecture#MIPS_I)
has some great info on CPU
[registers](https://en.wikipedia.org/wiki/Processor_register)
and memory layout in MIPS.
Also
[AssemblyLanguageTuts' article MIPS Registers Explained](https://www.assemblylanguagetuts.com/mips-registers-table/)


--------


## Alignment

Base types in C:
int, float, double, char, pointer

Derived types can be made with struct

----

ALUs have shifters: shifting multiplies/divides by powers of 2
ex: 1000/10 = 100

### Registers

PC: Program Counter: pointer to the next instruction from main 
memory, increments itself by one unless there is a jump

IR: Instruction Register; machine automatically populates with 
next instruction from the Program Counter

        | dest  | inp1  | inp2  |       more stuff      |  reserved   |
        | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | 


### Three address code

<b>    a = [b] (f) [c]    </b>


