#include <stdio.h>
#include <string.h>
#include "libft.h" // Ensure this points to your header file containing ft_strnstr and ft_strlen

void test_ft_strnstr() {
    const char *haystack = "ahhmed";
    const char *needle = "med";
    const char *empty_needle = "";
    const char *not_found = "xyz";

    // Test case 1: Standard case
    char *result1 = ft_strnstr(haystack, needle, strlen(haystack));
    printf("Test 1 - Expected: 'med', Got: '%s'\n", result1 ? result1 : "(null)");

    // Test case 2: Empty needle
    char *result2 = ft_strnstr(haystack, empty_needle, strlen(haystack));
    printf("Test 2 - Expected: 'ahhmed', Got: '%s'\n", result2 ? result2 : "(null)");

    // Test case 3: Needle not found
    char *result3 = ft_strnstr(haystack, not_found, strlen(haystack));
    printf("Test 3 - Expected: '(null)', Got: '%s'\n", result3 ? result3 : "(null)");

    // Test case 4: Needle at the start
    char *result4 = ft_strnstr(haystack, "ah", strlen(haystack));
    printf("Test 4 - Expected: 'ahhmed', Got: '%s'\n", result4 ? result4 : "(null)");

    // Test case 5: Length less than needle
    char *result5 = ft_strnstr(haystack, needle, 4);
    printf("Test 5 - Expected: '(null)', Got: '%s'\n", result5 ? result5 : "(null)");
}

int main() {
    test_ft_strnstr();
    return 0;
}
