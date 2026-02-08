//write() function helps to collect an output and write them in an output file : write(STDOUT_FILENO, "name", strlen(name));
#include <unistd.h>
#include <string.h>

int main() {

	char name[] = "Jay\n";
// STDOUT_FILENO : file descriptor for stdout buffer. Standard value is 1 by default
	write(STDOUT_FILENO, name, strlen(name));

	return 0;
}
