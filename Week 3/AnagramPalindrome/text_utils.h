#ifndef TEXTUTILS_H
#define TEXTUTILS_H

#include <stdbool.h>

/* ---------- Public API ---------- */

/**
 * @brief  Test whether a string is a palindrome.
 *         Case-insensitive; non-letters are ignored.
 *
 * @param  s  null-terminated UTF-8/ASCII string
 * @return    true if palindrome, else false
 */
bool is_palindrome(const char *s);

/**
 * @brief  Check if two strings are anagrams of each other.
 *         Case-insensitive; counts only alphabetic letters.
 *
 * @param  a  first string
 * @param  b  second string
 * @return    true if anagrams, else false
 */
bool are_anagrams(const char *a, const char *b);

#endif /* TEXTUTILS_H */
