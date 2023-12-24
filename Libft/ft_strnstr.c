/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <younesoublall@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:28:35 by youbella          #+#    #+#             */
/*   Updated: 2023/12/21 17:19:42 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len && len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			p = (char *)&big[i];
			while (big[i + j] == little[j] && i + j < len)
			{
				if (!little[j + 1])
					return (p);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
