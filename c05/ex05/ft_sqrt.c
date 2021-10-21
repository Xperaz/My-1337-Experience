/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:29:25 by aouhadou          #+#    #+#             */
/*   Updated: 2021/07/07 12:49:07 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while (n * n < nb)
	{
		if (n > 46340)
			return (0);
		n++;
	}
	if (nb == n * n)
		return (n);
	else
		return (0);
}