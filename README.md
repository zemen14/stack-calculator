# Stack Calculator

A command-line calculator in C backed by a small math library.

## What's inside

- **calculator.c** — the calculator program (parses and evaluates expressions from the command line / stdin).
- **calc_lib.c / calc_lib.h** — helper math functions: Collatz sequence steps, Fibonacci, and related utilities.
- **calc_example1_27.txt / calc_example1_28.txt** — sample inputs with expected results.

## Build & run

```sh
gcc -Wall -Wextra calculator.c calc_lib.c -o calculator -lm
./calculator
```

## Tech

C
