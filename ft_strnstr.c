/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawa <ssawa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:59:06 by ssawa             #+#    #+#             */
/*   Updated: 2025/04/25 23:15:37 by ssawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	len_s;
	size_t	str;
	size_t	i;

	len_s = ft_strlen((char *)small);
	if (len_s == 0)
		return ((char *)big);
	str = 0;
	while (big[str] + len_s < len)
	{
		i = 0;
		while (big[str + i] && big[str + i] == small[i])
			i++;
		if (i == len_s)
			return ((char *)&big[str]);
		str++;
	}
	return (NULL);
}
