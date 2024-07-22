
#include "Minitalk.h"

void	send(int pid, char *str)
{
	int			error;
	int			counter;
	static char	c;

	error = 0;
	while (*str)
	{
		counter = 7;
		c = *str;
		while (counter >= 0)
		{
			if ((c >> counter) & 1)
				error = kill(pid, SIGUSR1);
			else
				error = kill(pid, SIGUSR2);
			usleep(100);
			counter--;
			if (error == -1)
			{
				write(1, "Error", 5);
				exit (1);
			}
		}
		str++;
	}
}

int	main(int ac, char **av)
{
	long	pid;
	char	*str;

	pid = 0;
	if (ac == 3 && ft_isdigit(av[1]))
	{
		pid = ft_atoi(av[1]);
		if (pid <= 0 || pid > 2147483647)
		{
			ft_putstr("PID incorrect");
			exit (1);
		}
		str = av[2];
		send(pid, str);
	}
	else
		ft_putstr("invalide input");
	return (0);
}