/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:52:35 by aouhadou          #+#    #+#             */
/*   Updated: 2021/07/06 15:16:58 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		j = argc - 1;
		while (j > 0)
		{
			i = 0;
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j--;
		}
	}
	return (0);
}