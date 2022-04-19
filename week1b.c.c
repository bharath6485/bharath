#include<stdio.h> 

#include<sys/types.h>

#include<unistd.h>

#include<fcntl.h>

int main()
{
	
int fd;
	char buffer[80];

	char msg[50]="Hello OS Lab";
	
fd=open("check.txt",O_RDWR);
	
printf("fd=%d\n",fd);

	if(fd!=-1)
	
{
		
printf("check.txt opened in read-write access\n");

		write(fd,msg,sizeof(msg));
	
	lseek(fd,0,SEEK_SET);
		
read(fd,buffer,sizeof(msg));
	
	printf("\n%s was written to my file\n",buffer);
	
	close(fd);

	}

	return 0;

}
/*
svec@ubuntu:~/os$ ./a.out
fd=3
check.txt opened in read_write access
hello os lab was written to myfile

*/
