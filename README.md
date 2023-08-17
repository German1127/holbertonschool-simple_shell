# Simple Shell
In this proyect we should create a Simple Shell imitating the basic functions of the shell in C.
## Shell
### What does a Shell do:
Shells provide a way for you to communicate with the operating system. This communication is carried out either interactively (input from the keyboard is acted upon immediately) or as a shell script.
When you log in to the system, the system locates the name of a shell program to execute. After it is executed, the shell displays a command prompt. When you type a command at the prompt and press the Enter key, the shell evaluates the command and attempts to carry it out. Depending on your command instructions, the shell writes the command output to the screen or redirects the output.
## Resources
 * Unix shell
* Thompson shell
* Ken Thompson
* Everything you need to know to start coding your own shell concept page
## Requirements
 - Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to.
## File Descriptions
- _getenv.c : contains the _getenv function which get the PATH from the "envarion", and also the findexpath function which searchs for the executable function for the input command
- aux_functions.c: contains the auxiliary functions, readinput used for read the input with getline and also a freememory function
- execommand.c : cointains the execute command function which use the executable path of the command and uses fork, exceve and wait to excecute it correctly
- strtok_str.c : cointains a function that tokenize the command with strtok
- shell.c : the main function that contains the loop for the sell
- main.h : header file, contains all the prototypes for the files
## Installation
```bash
https://github.com/German1127/holbertonschool-simple_shell.git
```
## Compilation
The shell will be compiled as follows:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
## Interactive
An interactive command in the programming context generally refers to an instruction that requests input from the user while the program is running.
```bash
 $ ls
main.h shell.c strtok_str.c _getenv.g aux_functions.c execommand.c
```
## Non-Interactive
A non-interactive shell operates without user interaction and is commonly used for automated tasks, scripting, and background processes.
```bash
 $ echo "ls" | ./shell.c
main.h shell.c strtok_str.c _getenv.g aux_functions.c execommand.c
```
## Flowchart
 <img src="https://i.ibb.co/cvDJQ3m/IMG-20230815-WA0002.jpg" alt="Flowchart" border="0">
## Authors:

**Lucia Puppo**  [Github](https://github.com/LuciaPuppo897)

**German Aquino**  [Github](https://github.com/German1127)
