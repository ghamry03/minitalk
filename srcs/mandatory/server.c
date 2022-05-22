/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:23:55 by ommohame          #+#    #+#             */
/*   Updated: 2022/05/20 02:11:22 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void	handler(int sig)
{
	static int					i = 0;
	static unsigned char		c = 0;

	if (sig == SIGUSR1 || sig == SIGUSR2)
	{
		if (sig == SIGUSR1)
			c = c | (1 << i);
		i++;
		if (i == 8)
		{
			ft_putchar_fd(c, 1);
			i = 0;
			c = 0;
		}
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	sa;

	sa.sa_handler = &handler;
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
	return (0);
}
