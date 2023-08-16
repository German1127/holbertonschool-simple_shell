# Simple Shell
In this proyect we should create a Simple Shell imitating the basic functions ot the standar librery.
## Shell
### What does a Shell do:
Shells provide a way for you to communicate with the operating system. This communication is carried out either interactively (input from the keyboard is acted upon immediately) or as a shell script.
When you log in to the system, the system locates the name of a shell program to execute. After it is executed, the shell displays a command prompt. When you type a command at the prompt and press the Enter key, the shell evaluates the command and attempts to carry it out. Depending on your command instructions, the shell writes the command output to the screen or redirects the output.
## List of functions:
- `exit`: Exits the command interpreter.
- `env`: Prints the current environment.
- `setenv`: Initializes a new environment variable or modifies an existing one.
- `unsetenv`: Deletes an environment variable.
- `cd [directory]`: Changes the current directory of the process.
- `help`: Displays all environment variables.
- `history`: Shows the history list.
- `COMMAND`:
  - Basically, every program in `$PATH` supports a single word, like `ls`.
  - Handles the path `ls /tmp`.
  - Handles options like `ls -l`.
  - Handles all three together, like `ls -l /var`.
  - Handles the command path as well, like `/bin/ls`, and all options and paths, like `/bin/ls -l /var`.
## Library
For this project we used:
- #include <stddef.h>
- #include <stdio.h>
- #include <unistd.h>
- #include <string.h>
- #include <stdlib.h>
- #include <sys/wait.h>
- #include <sys/stat.h>
- #include <stddef.h>
## File Descriptions
-
- aca van las descripciones

## Installation
```bash
https://github.com/German1127/holbertonschool-simple_shell.git
```
## Compilation
The shell will be compiled as follows:
```
gcc -Wall -Werror -Wextra -pedantic - shell.c -o shell
```
## Interactive
An interactive command in the programming context generally refers to an instruction that requests input from the user while the program is running.
```bash
 $ ls
main.h shell.c strtok.c _getenv.g _aux_func.c
```
## Non-Interactive
A non-interactive shell operates without user interaction and is commonly used for automated tasks, scripting, and background processes.
```bash
 $ echo "ls" | ./shell.c
main.h shell.c strtok.c _getenv.g _aux_func.c
```
## Flowchart
 <img src="https://i.ibb.co/cvDJQ3m/IMG-20230815-WA0002.jpg" alt="Flowchart" border="0">
 
## Authors
* **Lucia Puppo** - [Github](https://github.com/LuciaPuppo897)
* **German Aquino** - [Github](https://github.com/German1127)

## License
Holberton School
