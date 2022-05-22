/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:27:19 by ommohame          #+#    #+#             */
/*   Updated: 2022/05/22 13:43:46 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

int		a;

void	handler(int sig)
{
	(void)sig;
	if (a == 1)
	{
		ft_printf("DONE");
		exit (0);
	}
	a = 1;
	usleep(100);
}

void	send_bits(char *str, int pid)
{
	int					j;
	size_t				i;
	struct sigaction	sa;

	i = 0;
	sa.sa_handler = &handler;
	while (str[i])
	{
		j = 0;
		while (j < 8)
		{
			if (a == 1)
			{
				if (((str[i] >> j) & 1) == 1)
					kill(pid, SIGUSR1);
				else
					kill(pid, SIGUSR2);
					j++;
				a = 0;
			}
			sigaction(SIGUSR1, &sa, NULL);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		pid;

	if (ac < 3)
	{
		ft_printf("ERROR\n");
		exit(0);
	}
	pid = ft_atoi(av[1]);
	if (kill(pid, 0) == -1)
	{
		ft_printf("PID is not valid\n");
		exit (0);
	}
	a = 1;
	i = 2;
	while (av[i])
	{
		send_bits(av[i], pid);
		i++;
	}
	handler(0);
}
