// test_ft_strchr.c
#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strchr(const char *str, int c) {
    char *result = ft_strchr(str, c);
    char *expected = strchr(str, c); // Standard library function for comparison

    if (result == expected) {
       printf("\033[32mTest passed for '%s' and '%c'\033[0m\n", str, c);
    } else {
        printf("\033[31mTest failed for '%s' and '%c'.\033[0m\n", str, c);
		printf("\033[31mft_strchr result: %s\033[0m\n", result ? result : "NULL");
		printf("\033[31mstrchr result: %s\033[0m\n", expected ? expected : "NULL");
	}
}

int main() {
    // Test cases
    test_ft_strchr("Hello, world!", 'o');
    test_ft_strchr("Hello, world!", 'H');
    test_ft_strchr("Hello, world!", '!');
    test_ft_strchr("Hello, world!", -150); // Character not in the string
    test_ft_strchr("", 'a'); // Empty string
    test_ft_strchr("abc", '\0'); // Null terminator

    return 0;
}
