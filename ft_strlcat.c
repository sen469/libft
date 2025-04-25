/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawa <ssawa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:03:35 by ssawa             #+#    #+#             */
/*   Updated: 2025/04/25 16:41:01 by ssawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	int		k;
	int		mx_copy;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	mx_copy = dstsize - i - 1;
	if (dstsize < i)
		return (i + j);
	else
	{
		k = 0;
		while (k < mx_copy)
		{
			dst[i + k] = src[k];
			k++;
		}
		dst[i + k] = '\0';
		return (dstsize + j);
	}
}
