#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/select.h>

int main(int argc, char **argv)
{
	int i = argc;

	if( i < 2)
		write(2, "Wrong Number of arguments\n", 27);

}
