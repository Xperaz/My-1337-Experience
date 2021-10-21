/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:51:04 by aouhadou          #+#    #+#             */
/*   Updated: 2021/07/05 09:36:07 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size1;
	int	size2;
	int	j;

	size1 = ft_strlen(dest);
	size2 = ft_strlen(src);
	j = 0;
	while (j <= size2)
	{
		dest[size1 + j] = src[j];
		j++;
	}
	return (dest);
}
