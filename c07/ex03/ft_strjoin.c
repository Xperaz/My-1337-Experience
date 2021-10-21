/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:56:00 by aouhadou          #+#    #+#             */
/*   Updated: 2021/07/12 14:49:19 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *tab, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		tab[i] = src[j];
		i++;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = 0;
	while (i < size)
	{
		 len = len + ft_strlen(*strs);
		 i++;
	}
	len = len + (ft_strlen(sep) * size);
	tab = malloc((len + 1) * sizeof(char *));
	if (!*strs)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
