# Holbertonschool-simple_shell
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
- <stdio.h>
- <stdarg.h>
- <stdlib.h>
- <unistd.h>
- <sys/stat.h>
- <sys/wait.h>
  
## File Descriptions
-
- aca van las descripciones
## Flowchart
-
## Authors
* **Lucia Puppo** - [Github](https://github.com/LuciaPuppo897)
* **German Aquino** - [Github](https://github.com/German1127)
