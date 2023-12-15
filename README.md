# RSA Factoring Challenge

## Project Overview
This project is an optional challenge named the "RSA Factoring Challenge," assigned by Julien Barbier. The objective is to factorize numbers obtained from an unsecured network to potentially decrypt important documents. The challenge involves two tasks: Task 0 requires factorizing numbers into products of two smaller numbers, while Task 1 focuses on factorizing RSA numbers into prime numbers.

## Technologies
- Language: Python
- OS: Standard Ubuntu 20.04 LTS
- Dependencies: Sympy library

## Requirements
### General
- Choose any programming language.
- Operating System: Standard Ubuntu 20.04 LTS.

### Directory Structure
```
RSA-Factoring-Challenge/
│
├── factors           # Script for Task 0
│   └── factors.py
│
├── rsa               # Script for Task 1
│   └── rsa.py
│
├── tests             # Directory containing test files
│   ├── test00
│   ├── rsa-1
│   ├── rsa-2
│   └── ...  
│
├── README.md         # Project documentation
└── .gitignore        # Git ignore file
```

### Task 1: RSA Factoring Challenge

| Task Number | File Name | Description | Prototype (if any) |
|-------------|-----------|-------------|--------------------|
| 0           | factors   | Factorize as many numbers as possible into a product of two smaller numbers. | `factors <file>` |
| 1           | rsa       | Factorize RSA numbers, finding the prime numbers p and q such that n = p × q. | `rsa <file>` |

#### Script: rsa
- **Description:** Factorize RSA numbers into prime numbers.
- **Usage:** `rsa <file>`
- **Input:** File containing RSA numbers, one per line.
- **Output:** Display factorization results in the format `n=p*q`.

#### Example
```bash
$ cat tests/test00 
4
12
34
128
1024
4958
1718944270642558716715
9
99
999
9999
9797973
49
239809320265259

$ time ./factors tests/test00
# Output results...

real    0m0.009s
user    0m0.008s
sys 0m0.001s
```

#### Example
```bash
$ cat tests/rsa-1
6

$ ./rsa tests/rsa-1
6=2*3

Elapsed Time: 0.002 seconds
```

## Author :black_nib:

- **Ifeanyi I Ekezie** ([iiekezie](https://github.com/iiekezie))
