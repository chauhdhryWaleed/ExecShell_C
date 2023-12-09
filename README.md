# ExecShell_C
 
 Own version of shell that will execute commands given
by the user. The steps involved will be as follows:
1. The user types a command, such as “cp ./OS ../newOS”. The command will be stored in a
character array or a string object.
2. The shell will perform tokenization and separate the command and its arguments.
3. The shell will then create a child process. Then, the child will use the execvp system call to
execute the command.
4. The shell will wait for the child to finish the execution.
5. After the command has been executed, the shell will ask the user to enter a command again.
6. The shell will exit when the command given by the user is “exit”.
