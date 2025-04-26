#include "libft.h"
#include <limits.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd);
int main()
{
	int n = INT_MAX;
	ft_putnbr_fd(n, 1);
}
