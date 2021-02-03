#include <stdio.h>

 #include <sys/types.h>
 #include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;
    printf("befor\n");

    id = fork();

   // printf("after : id\t  pid\t  ppid\t %d  %d  %d \n",id,getpid(),getppid());

    if(id == 0) //child process

    {
        printf("In child  : pid\t ppid\t %d  %d\n",getpid(),getppid());

    }
    else
    {
       printf("IN parent  : pid\t ppid\t %d  %d\n",getpid(),getppid());
        
     }
    

    return 0;
}
