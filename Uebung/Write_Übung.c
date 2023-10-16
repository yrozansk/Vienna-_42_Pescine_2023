#include<unistd.h>
#include<fcntl.h>

int	main(void)
{
	int fdtest = open("./TESTwriteÜBUNG.txt", O_RDWR);
	write(fdtest, "heyyyy yogi, wie gehts magst du tee trinken?", 45);
	return (0);
}