# Password Strength Analyzer

A command-line program written in C that checks a password against several strength criteria and explains, in plain language, why it's weak or strong.

## About

This project checks a password for length, character variety, and whether it matches a list of commonly used weak passwords, then gives it an overall strength rating. It was built to practice string handling in C, verified with Valgrind.

## Features

- Checks password length (minimum 8 characters)
- Checks for at least one uppercase letter, lowercase letter, digit, and special character
- Flags passwords that match a list of common, easily guessed passwords (e.g. "password", "123456", "qwerty")
- Prints specific, actionable feedback for each missing requirement
- Gives an overall rating of Weak, Medium, or Strong based on how many checks passed

## Built With

- C
- GDB and Valgrind (for debugging and memory-safety verification)
- Make
- Git / GitHub

## Running Locally

Clone the repo and build it with `make`:

```bash
git clone git@github.com:ekshalab/password-strength-analyzer.git
cd password-strength-analyzer
make
./password_analyzer
```

Or build and run in one step:

```bash
make run
```

## Memory Safety

Verified with Valgrind to confirm all allocated memory is properly freed with no leaks or invalid accesses:


## Author

Eksha Patel — [github.com/ekshalab](https://github.com/ekshalab)
