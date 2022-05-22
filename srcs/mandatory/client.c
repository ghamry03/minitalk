/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:27:19 by ommohame          #+#    #+#             */
/*   Updated: 2022/05/20 02:51:58 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void	send_bits(char *str, int pid)
{
	size_t	i;
	int		j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < 8)
		{
			if (((str[i] >> j) & 1) == 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			j++;
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
	i = 2;
	while (av[i])
		send_bits(av[i++], pid);
	return (1);
}
