/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:28:44 by aouhadou          #+#    #+#             */
/*   Updated: 2021/07/05 09:37:14 by aouhadou         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size1;
	unsigned int	size2;
	unsigned int	j;

	size1 = ft_strlen(dest);
	size2 = ft_strlen(src);
	j = 0;
	while (j <= size2)
	{
		if (j >= nb)
		{
			dest[size1 + j] = '\0';
			break ;
		}
		dest[size1 + j] = src[j];
		j++;
	}
	return (dest);
}
