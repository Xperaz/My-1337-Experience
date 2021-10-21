/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:38:14 by aouhadou          #+#    #+#             */
/*   Updated: 2021/07/08 11:30:29 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print(char **av, int ac)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] > s2[j] || s1[i] < s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1 )
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				i = 0;
			}
			 i++;
		}
		ft_print(argv, argc);
	}
}
