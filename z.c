#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    // ft_atoi
    /*
    printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));
    // 出力: ft_atoi("42") = 42
    */

    // ft_bzero
	/*
    char buf[10] = "abcdef";
    ft_bzero(buf, 3);
    printf("ft_bzero result: %s\n", buf + 3);
    // 出力: ft_bzero result: def
	*/

    // ft_calloc
    /*
    int *arr = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    // 出力: 0 0 0 0 0
    */

    // ft_isalnum
    /*
    printf("ft_isalnum('a') = %d\n", ft_isalnum('a'));
    // 出力: ft_isalnum('a') = 1
    */

    // ft_isalpha
    /*
    printf("ft_isalpha('z') = %d\n", ft_isalpha('z'));
    // 出力: ft_isalpha('z') = 1
    */

    // ft_isascii
    /*
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    // 出力: ft_isascii(127) = 1
    */

    // ft_isdigit
    /*
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
    // 出力: ft_isdigit('5') = 1
    */

    // ft_isprint
    /*
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
    // 出力: ft_isprint(' ') = 1
    */

    // ft_itoa
    /*
    char *s = ft_itoa(-1234);
    printf("ft_itoa(-1234) = %s\n", s);
    free(s);
    // 出力: ft_itoa(-1234) = -1234
    */

    // ft_memchr
    /*
    char str[] = "abcdef";
    printf("ft_memchr = %s\n", (char *)ft_memchr(str, 'd', 6));
    // 出力: ft_memchr = def
    */

    // ft_memcmp
    /*
    printf("ft_memcmp(\"abc\", \"abd\", 3) = %d\n", ft_memcmp("abc", "abd", 3));
    // 出力: ft_memcmp("abc", "abd", 3) = -1
    */

    // ft_memcpy
    /*
    char dst[10];
    char src[] = "hello";
    ft_memcpy(dst, src, 6);
    printf("ft_memcpy: %s\n", dst);
    // 出力: ft_memcpy: hello
    */

    // ft_memmove
    /*
    char mem[] = "123456789";
    ft_memmove(mem + 2, mem, 5);
    printf("ft_memmove: %s\n", mem);
    // 出力: ft_memmove: 121234589
    */

    // ft_memset
    /*
    char mem2[10] = "abcdef";
    ft_memset(mem2, '*', 3);
    printf("ft_memset: %s\n", mem2);
    // 出力: ft_memset: ***def
    */

    // ft_putchar_fd
    /*
    ft_putchar_fd('A', 1);
    write(1, "\n", 1);
    // 出力: A
    */

    // ft_putendl_fd
    /*
    ft_putendl_fd("Hello", 1);
    // 出力: Hello\n
    */

    // ft_putnbr_fd
    /*
    ft_putnbr_fd(-123, 1);
    write(1, "\n", 1);
    // 出力: -123
    */

    // ft_putstr_fd
    /*
    ft_putstr_fd("world", 1);
    write(1, "\n", 1);
    // 出力: world
    */

    // ft_split
    /*
    char **res = ft_split("a,b,c", ',');
    for (int i = 0; res[i]; i++)
        printf("ft_split[%d]: %s\n", i, res[i]);
    // 出力:
    // ft_split[0]: a
    // ft_split[1]: b
    // ft_split[2]: c
    // ft_split[3]: (null)
    for (int i = 0; res[i]; i++) free(res[i]);
    free(res);
    */

    // ft_strchr
    /*
    printf("ft_strchr(\"abcde\", 'c') = %s\n", ft_strchr("abcde", 'c'));
    // 出力: ft_strchr("abcde", 'c') = cde
    */

    // ft_strdup
    /*
    char *dup = ft_strdup("dup!");
    printf("ft_strdup: %s\n", dup);
    free(dup);
    // 出力: ft_strdup: dup!
    */

    // ft_striteri
    /*
    void f(unsigned int i, char *c) { *c += 1; }
    char s2[] = "abc";
    ft_striteri(s2, f);
    printf("ft_striteri: %s\n", s2);
    // 出力: ft_striteri: bcd
    */

    // ft_strjoin
    /*
    char *j = ft_strjoin("abc", "def");
    printf("ft_strjoin: %s\n", j);
    free(j);
    // 出力: ft_strjoin: abcdef
    */

    // ft_strlcat
    /*
    char dst2[20] = "abc";
    size_t len = ft_strlcat(dst2, "def", 20);
    printf("ft_strlcat: %s (%zu)\n", dst2, len);
    // 出力: ft_strlcat: abcdef (6)
    */

    // ft_strlcpy
    /*
    char dst3[10];
    size_t len2 = ft_strlcpy(dst3, "hello", 10);
    printf("ft_strlcpy: %s (%zu)\n", dst3, len2);
    // 出力: ft_strlcpy: hello (5)
    */

    // ft_strlen
    /*
    printf("ft_strlen(\"abc\") = %zu\n", ft_strlen("abc"));
    // 出力: ft_strlen("abc") = 3
    */

    // ft_strmapi
    /*
    char f2(unsigned int i, char c) { return c + 1; }
    char *m = ft_strmapi("xyz", f2);
    printf("ft_strmapi: %s\n", m);
    free(m);
    // 出力: ft_strmapi: yza
    */

    // ft_strncmp
    /*
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));
    // 出力: ft_strncmp("abc", "abd", 3) = -1
    */

    // ft_strnstr
    /*
    char *s3 = "FooBarBaz";
    printf("ft_strnstr: %s\n", ft_strnstr(s3, "Bar", 9));
    // 出力: ft_strnstr: BarBaz
    */

    // ft_strrchr
    /*
    printf("ft_strrchr(\"abcabc\", 'a') = %s\n", ft_strrchr("abcabc", 'a'));
    // 出力: ft_strrchr("abcabc", 'a') = abc
    */

    // ft_strtrim
    /*
    char *trim = ft_strtrim("   abc   ", " ");
    printf("ft_strtrim: %s\n", trim);
    free(trim);
    // 出力: ft_strtrim: abc
    */

    // ft_substr
    /*
    char *sub = ft_substr("abcdef", 2, 3);
    printf("ft_substr: %s\n", sub);
    free(sub);
    // 出力: ft_substr: cde
    */

    // ft_tolower
    /*
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));
    // 出力: ft_tolower('A') = a
    */

    // ft_toupper
    /*
    printf("ft_toupper('z') = %c\n", ft_toupper('z'));
    // 出力: ft_toupper('z') = Z
    */

    return 0;
}
