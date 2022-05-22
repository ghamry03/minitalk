/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:23:55 by ommohame          #+#    #+#             */
/*   Updated: 2022/05/22 13:47:32 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

int		a;

void	handler(int sig, siginfo_t *si, void *data)
{
	static int					i = 0;
	static unsigned char		c = 0;

	(void)data;
	if (sig == SIGUSR1 || sig == SIGUSR2)
	{
		if (sig == SIGUSR1)
			c = c | (1 << i);
		i++;
		kill(si->si_pid, SIGUSR1);
		if (i == 8)
		{
			ft_putchar_fd(c, 1);
			i = 0;
			c = 0;
		}
	}
	a = 0;
}

void	sig_rec(void)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handler;
	if (a == 1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
	}
}

int	main(void)
{
	int					pid;

	a = 1;
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	while (1)
	{
		sig_rec();
		pause();
	}
	return (0);
}
