/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawa <ssawa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:56:49 by ssawa             #+#    #+#             */
/*   Updated: 2025/04/25 13:57:32 by ssawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*p;

	p = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n-- > 0)
	{
		*p++ = uc;
	}
	return (s);
}

/*
#include <stdio.h>

int main()
{
	char c[] = "AJFKDSJF+LDKSJFSDLKJKFDJFS";

	ft_memset(c, 'X', 5);
	printf("%s", c);
}
*/
