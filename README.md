# mini-db

A simple database engine written in C.

This project is an educational implementation of a small database shell inspired by low-level database systems such as SQLite.

The purpose of the project is to learn:

- systems programming
- memory management
- terminal applications
- command parsing
- database internals
- low-level C development

---

## Features

Current functionality:

- interactive REPL shell
- dynamic input buffer
- command handling
- `.exit` meta command
- input reading using `getline()`

---

## Project Structure

```text
mini-db/
├── main.c
├── database.c
├── database.h
├── Makefile
└── README.md
``` 

Files Description
File	Description
main.c	Program entry point and REPL loop
database.c	Database utility functions
database.h	Structures and function declarations
Makefile	Build configuration
Build

Compile the project:

make

The executable file will be created:

./database
Usage

Run the database shell:

./database

Example session:

db > hello
Unrecognized command 'hello'.

db > .exit
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
