/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:27:19 by ommohame          #+#    #+#             */
/*   Updated: 2022/11/17 18:35:01 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

int		g_a;

void	handler(int sig)
{
	(void)sig;
	if (g_a == 1)
	{
		ft_printf("MESSAGE SENT\n");
		exit (0);
	}
	g_a = 1;
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
			if (g_a == 1)
			{
				if (((str[i] >> j) & 1) == 1)
					kill(pid, SIGUSR1);
				else
					kill(pid, SIGUSR2);
					j++;
				g_a = 0;
			}
			sigaction(SIGUSR1, &sa, NULL);
		}
		i++;
	}
}

void	send_space(int pid)
{
	char	*str;

	str = ft_strdup(" ");
	send_bits(str, pid);
}

int	main(int ac, char **av)
{
	int		i;
	int		pid;

	if (ac < 3)
	{
		ft_printf("ERROR: ENTER THE PROGRAM NAME PID THEN YOUR MSG \n");
		exit(0);
	}
	pid = ft_atoi(av[1]);
	if (pid == 0 || kill(pid, 0) == -1)
	{
		ft_printf("PID is incorrect\n");
		exit (0);
	}
	g_a = 1;
	i = 2;
	while (av[i])
	{
		send_bits(av[i++], pid);
		if (av[i])
			send_space(pid);
	}
	handler(0);
}
