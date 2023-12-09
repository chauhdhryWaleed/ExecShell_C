#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include<stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<sys/wait.h>
#include <fcntl.h>
int main(int argc,char* argv[])
{
bool flag=true;
int i=0;
while(flag)
{

 char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    printf("Enter Command: ");
    nread = getline(&line, &len, stdin);

    if (nread == -1) {
        printf("Error reading input.\n");
        exit(EXIT_FAILURE);
    }

line[nread-1]='\0';
 char termination[]="exit";
 
 int result=strcmp(line,termination);


if(strcmp(line,termination)!=0)
{
char*token;


token=strtok(line," ");

int count=0;


char*arr[100];
while(token!=NULL)
{
arr[count]=token;
  token = strtok(NULL, " ");
count++;
}
char a[]="&";
bool teer=false;
char*check=arr[count-1];
if(strcmp(check,a)==0)
{

teer=true;
count--;

}
arr[count]=NULL;


pid_t id=fork();




if(id>0) //parent code
{

if(!teer)
{
wait(NULL);

}

}

else if (id==0)
{
execvp(arr[0],arr);
exit(0);
}

   
 }
 

else if(strcmp(line,termination)==0)
{
printf("terminal exited");

flag=false;



 }
 }
}
