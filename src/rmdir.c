#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int
main(int argc, char *argv[]) {

	for(int i = 1; i<argc;i++)
	{
		if(rmdir(argv[i]))
		{
			fprintf(stderr,"rmdir: failed to remove '%s', %s\n",
				   argv[i],strerror(errno));
		}
	}
	return 0;
}
