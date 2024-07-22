#include "Minitalk.h"

void	handler(int signal)
{
	static int	b;
	static char	msg;

	if (signal == SIGUSR1)
		msg = (msg << 1) | 1;
	else if (signal == SIGUSR2)
		msg = (msg << 1);
	b++;
	if (b == 8)
	{
		write(1, &msg, 1);
		b = 0;
		msg = 0;
	}
}

int	main(void)
{
	int	id;

	id = getpid();
	ft_putnbr(id);
	write(1, "\n", 1);
	signal(SIGUSR2, handler);
	signal(SIGUSR1, handler);
	while (1)
		pause();
	return (0);
}