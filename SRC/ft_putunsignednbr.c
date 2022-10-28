/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:05:16 by mneri             #+#    #+#             */
/*   Updated: 2022/10/21 15:05:17 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putunsignednbr(unsigned int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putunsignednbr(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putunsignednbr(n, fd);
	}
	else if (n > 9)
	{
		ft_putunsignednbr(n / 10, fd);
		ft_putunsignednbr(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}
