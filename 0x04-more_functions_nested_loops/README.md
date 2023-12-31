# 0x04. C - More functions, more nested loops

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

**General**
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- What are header files and how to use them with `#include`

## Resources

Read or watch:

- Nested while loops
- C - Functions
- Learning to Program in C (Part 06) (stop at 14:00)
- What is the purpose of a function prototype?
- C - Header Files (stop before the “Once-Only Headers” paragraph)

## Requirements

**General**
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Tasks

### 0. isupper

Write a function that checks for uppercase character.

- Prototype: `int _isupper(int c);`
- Returns `1` if `c` is uppercase
- Returns `0` otherwise

FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
```

Output:
```
A: 1
a: 0
```

### 1. isdigit

Write a function that checks for a digit (0 through 9).

- Prototype: `int _isdigit(int c);`
- Returns `1` if `c` is a digit
- Returns `0` otherwise

FYI: The standard library provides a similar function: `isdigit`. Run `man isdigit` to learn more.

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
```

Output:
```
0: 1
a: 0
```

### 2. Collaboration is multiplication

Write a function that multiplies two integers.

- Prototype: `int mul(int a, int b);`

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
```

Output:
```
100352
-1640448
```

### 3. The numbers speak for themselves

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

- Prototype: `void print_numbers(void);`
- You can only use `_putchar` twice in your code

```c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
```

Output:
```
0123456789
```

### 4. I believe in numbers and signs

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

- Prototype: `void print_most_numbers(void);`
- You can only use `_putchar` twice in your code

```c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
   
