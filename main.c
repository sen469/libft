/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawa <ssawa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:55:51 by ssawa             #+#    #+#             */
/*   Updated: 2025/04/27 12:56:04 by ssawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

// strmapi 用の関数
static char plus_one(unsigned int i, char c)
{
    (void)i;
    return c + 1;
}

// striteri 用の関数
static void plus_one_in_place(unsigned int i, char *c)
{
    (void)i;
    *c = *c + 1;
}

int main(void)
{
    char str[] = "Hello World";
    char *null_str = NULL;
    char *result;
    char c;
    int n;

    // ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
    printf("ft_isalnum('z'): %d\n", ft_isalnum('z'));
    printf("ft_isascii(128): %d\n", ft_isascii(128));
    printf("ft_isprint(31): %d\n", ft_isprint(31));

    // ft_strlen
    printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));
    printf("ft_strlen(\"\"): %zu\n", ft_strlen(""));

    // ft_memset
    char buf[10];
    ft_memset(buf, 'A', 5);
    buf[5] = '\0';
    printf("ft_memset: %s\n", buf);

    // ft_bzero
    char buf2[10] = "abcdef";
    ft_bzero(buf2, 3);
    printf("ft_bzero: %s\n", buf2 + 3); // 残りを表示

    // ft_memcpy
    char src[] = "12345";
    char dest[10];
    ft_memcpy(dest, src, 5);
    dest[5] = '\0';
    printf("ft_memcpy: %s\n", dest);

    // ft_memmove（オーバーラップ確認）
    char overlap[] = "12345";
    ft_memmove(overlap + 2, overlap, 3);
    printf("ft_memmove overlap: %s\n", overlap);

    // ft_memchr
    printf("ft_memchr: %s\n", (char *)ft_memchr("abcdef", 'd', 6));

    // ft_memcmp
    printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3));

    // ft_strdup
    result = ft_strdup("Libft!");
    printf("ft_strdup: %s\n", result);
    free(result);

    // ft_strchr
    printf("ft_strchr: %s\n", ft_strchr("libft test", 't'));

    // ft_strrchr
    printf("ft_strrchr: %s\n", ft_strrchr("libft test", 't'));

    // ft_strncmp
    printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3));

    // ft_strlcpy, ft_strlcat
    char dst[20] = "abc";
    printf("ft_strlcpy: %zu\n", ft_strlcpy(dst, "hello", 20));
    printf("dst after strlcpy: %s\n", dst);

    char dst2[20] = "abc";
    printf("ft_strlcat: %zu\n", ft_strlcat(dst2, "def", 20));
    printf("dst after strlcat: %s\n", dst2);

    // ft_atoi
    printf("ft_atoi: %d\n", ft_atoi("  \t-42abc"));

    // ft_calloc
    int *arr = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
        printf("ft_calloc[%d]: %d\n", i, arr[i]);
    free(arr);

    // ft_substr
    result = ft_substr("libft test", 6, 4);
    printf("ft_substr: %s\n", result);
    free(result);

    // ft_strjoin
    result = ft_strjoin("Hello", "World");
    printf("ft_strjoin: %s\n", result);
    free(result);

    // ft_strtrim
    result = ft_strtrim("   hello world   ", " ");
    printf("ft_strtrim: %s\n", result);
    free(result);

    // ft_split
    char **split = ft_split("a,b,c", ',');
    for (int i = 0; split[i]; i++)
        printf("ft_split[%d]: %s\n", i, split[i]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);

    // ft_itoa
    result = ft_itoa(-12345);
    printf("ft_itoa: %s\n", result);
    free(result);

    // ft_strmapi
    result = ft_strmapi("abc", plus_one);
    printf("ft_strmapi: %s\n", result);
    free(result);

    // ft_striteri
    char s_iteri[] = "abc";
    ft_striteri(s_iteri, plus_one_in_place);
    printf("ft_striteri: %s\n", s_iteri);

    // ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
    ft_putchar_fd('X', 1);
    write(1, "\n", 1);
    ft_putstr_fd("Hello FD", 1);
    write(1, "\n", 1);
    ft_putendl_fd("Hello with endl", 1);
    ft_putnbr_fd(1234, 1);
    write(1, "\n", 1);

    // ft_toupper, ft_tolower
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));
    printf("ft_tolower('A'): %c\n", ft_tolower('A'));

    return 0;
}
