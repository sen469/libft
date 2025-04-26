// z.c
#include "libft.h"

int main(void)
{
    // ft_atoi
    /*
    printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));
    */

    // ft_bzero
    /*
    char buf[10] = "abcdef";
    ft_bzero(buf, 3);
    printf("ft_bzero result: %s\n", buf + 3); // 途中から見る
    */

    // ft_calloc
    /*
    int *arr = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    */

    // ft_isalnum
    /*
    printf("ft_isalnum('a') = %d\n", ft_isalnum('a'));
    */

    // ft_isalpha
    /*
    printf("ft_isalpha('z') = %d\n", ft_isalpha('z'));
    */

    // ft_isascii
    /*
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    */

    // ft_isdigit
    /*
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
    */

    // ft_isprint
    /*
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
    */

    // ft_itoa
    /*
    char *s = ft_itoa(-1234);
    printf("ft_itoa(-1234) = %s\n", s);
    free(s);
    */

    // ft_memchr
    /*
    char s[] = "abcdef";
    printf("ft_memchr: %s\n", (char *)ft_memchr(s, 'd', 6));
    */

    // ft_memcmp
    /*
    printf("ft_memcmp(\"abc\", \"abd\", 3) = %d\n", ft_memcmp("abc", "abd", 3));
    */

    // ft_memcpy
    /*
    char dst[10];
    ft_memcpy(dst, "hello", 6);
    printf("ft_memcpy result: %s\n", dst);
    */

    // ft_memmove
    /*
    char buf2[10] = "12345";
    ft_memmove(buf2 + 2, buf2, 5);
    printf("ft_memmove result: %s\n", buf2);
    */

    // ft_memset
    /*
    char buf3[10] = "abcdef";
    ft_memset(buf3, 'x', 3);
    printf("ft_memset result: %s\n", buf3);
    */

    // ft_putchar_fd
    /*
    ft_putchar_fd('A', 1);
    */

    // ft_putendl_fd
    /*
    ft_putendl_fd("Hello", 1);
    */

    // ft_putnbr_fd
    /*
    ft_putnbr_fd(12345, 1);
    write(1, "\n", 1);
    */

    // ft_putstr_fd
    /*
    ft_putstr_fd("Hello World", 1);
    */

    // ft_split
    /*
    char **result = ft_split("a,b,c", ',');
    for (int i = 0; result[i]; i++)
        printf("split[%d]: %s\n", i, result[i]);
    // フリー忘れずに
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);
    */

    // ft_strchr
    /*
    printf("ft_strchr(\"hello\", 'e') = %s\n", ft_strchr("hello", 'e'));
    */

    // ft_strdup
    /*
    char *copy = ft_strdup("sample");
    printf("ft_strdup result: %s\n", copy);
    free(copy);
    */

    // ft_striteri
    /*
    void f(unsigned int i, char *c) { *c += 1; }
    char str[] = "abc";
    ft_striteri(str, f);
    printf("ft_striteri result: %s\n", str);
    */

    // ft_strjoin
    /*
    char *joined = ft_strjoin("Hello, ", "World!");
    printf("ft_strjoin result: %s\n", joined);
    free(joined);
    */

    // ft_strlcat
    /*
    char dst2[20] = "Hello";
    ft_strlcat(dst2, " World", sizeof(dst2));
    printf("ft_strlcat result: %s\n", dst2);
    */

    // ft_strlcpy
    /*
    char dst3[10];
    ft_strlcpy(dst3, "Hello", sizeof(dst3));
    printf("ft_strlcpy result: %s\n", dst3);
    */

    // ft_strlen
    /*
    printf("ft_strlen(\"12345\") = %zu\n", ft_strlen("12345"));
    */

    // ft_strmapi
    /*
    char mapf(unsigned int i, char c) { return c + 1; }
    char *mapped = ft_strmapi("abc", mapf);
    printf("ft_strmapi result: %s\n", mapped);
    free(mapped);
    */

    // ft_strncmp
    /*
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));
    */

    // ft_strnstr
    /*
    printf("ft_strnstr(\"abcdef\", \"cd\", 6) = %s\n", ft_strnstr("abcdef", "cd", 6));
    */

    // ft_strrchr
    /*
    printf("ft_strrchr(\"abcabc\", 'b') = %s\n", ft_strrchr("abcabc", 'b'));
    */

    // ft_strtrim
    /*
    char *trimmed = ft_strtrim("  hello  ", " ");
    printf("ft_strtrim result: %s\n", trimmed);
    free(trimmed);
    */

    // ft_substr
    /*
    char *sub = ft_substr("abcdef", 2, 3);
    printf("ft_substr result: %s\n", sub);
    free(sub);
    */

    // ft_tolower
    /*
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));
    */

    // ft_toupper
    /*
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));
    */

    return 0;
}

