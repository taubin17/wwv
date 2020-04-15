#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "wwv.h"
int main (int argc, char *argv[]) 
{
	int fd = open("/dev/wwv", O_WRONLY);
	if (fd < 0) {
		printf("Error, Module unable to be opened\n");
	}
	int error = 0;
	error = ioctl(fd, WWV_TRANSMIT);
	if (error == -1) {
		printf("Error, IO control has failed.\n");
	}
	else {
		printf("IO control avoided fail loop\n");
	}
	printf("%d\n", error);
	//close(fd);
}
