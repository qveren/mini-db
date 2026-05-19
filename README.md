# mini-db

A simple database engine written in C.

This project is an educational implementation of a small database shell inspired by low-level database systems such as SQLite.

The purpose of the project is to learn:
- Systems programming
- Memory management
- Terminal applications
- Command parsing (REPL)
- Database internals (compiler & virtual machine)

---

## Features

Current functionality:
- **Interactive REPL shell**: continuous read-eval-print loop.
- **Dynamic input buffer**: safe string reading using `getline()`.
- **Meta-commands**: support for `.exit` to safely close the session.
- **SQL Statement Preparation**: skeleton parser for `insert` and `select` commands.

---

## Project Structure

```text
mini-db/
├── main.c          # Program entry point and REPL loop
├── database.c      # Command parsing and execution logic
├── database.h      # Structures, enums, and function declarations
└── README.md       # Project documentationф

Files Description
File	Description
main.c	Program entry point and REPL loop
database.c	Database utility functions
database.h	Structures and function declarations
Makefile	Build configuration
Build

Compile the project:
```bash
make
```
The executable file will be created:
```bash
./database
```
Usage

Run the database shell:
```bash
./database
```
Example session:
```bash
db > hello
Unrecognized command 'hello'.

db > .exit
```
Meta Commands
Command	Description
.exit	Exit the program
Compilation Flags

The project uses strict GCC warning flags:

-Wall -Wextra -Werror

This helps write cleaner and safer C code.

Example Code Flow
Create input buffer
Print prompt
Read user input
Parse command
Execute action
Repeat until .exit
Future Plans

Planned functionality:

SQL-like statements
table creation
row storage
serialization
pager implementation
B-tree structure
persistent file storage
Technologies
Language: C
Compiler: GCC
Build System: Make
