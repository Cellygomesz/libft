/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:31:59 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/17 13:39:02 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		c = n + 48;
		ft_putchar(c);
	}
	else if (n != -2147483648)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
}

int	main(void)
{
	ft_putnbr_fd(23466, 1);
	ft_putchar('\n');
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar('\n');
	ft_putnbr_fd(-7236, 1);
	ft_putchar('\n');
	return (0);
}
