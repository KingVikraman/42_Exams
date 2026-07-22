#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/select.h>

int main(int argc, char **argv)
{
	int port;
	int sockaddr;

	if(argc != 2)
	{
		write(2, "Wrong number of arguments\n", 26);
		exit(1);
	}

	port = atoi(argv[1])

}
