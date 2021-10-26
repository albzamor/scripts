#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



void	leaks(void)
{
	system("leaks fractol");
}

int	main(int argc, char **argv)
{

	atexit(leaks);

}
	/* get_next_line(fd, &line);
	printf("\033[0;31mprimera linea: 🚀\033[0;37m%s", line);
	printf("\n");
	get_next_line(fd, &line);
	printf("\033[0;31msegunda linea: 🚀\033[0;37m%s", line);
	printf("\n");
	get_next_line(fd, &line);
	printf("\033[0;31mtercera linea: 🚀\033[0;37m%s", line);
	printf("\n"); */
	//system("leaks a.out");

