#include "text_utils.h"
#include <ctype.h>
#include <string.h>

#define ALPHA 26       /* a-z */

static inline int skip_fwd(const char *s, int i)
{
    while (s[i] && !isalpha((unsigned char)s[i])) ++i;
    return i;
}
static inline int skip_back(const char *s, int i)
{
    while (i >= 0 && !isalpha((unsigned char)s[i])) --i;
    return i;
}

/* ---------- Palindrome ---------- */
bool is_palindrome(const char *s)
{
    int left  = 0;
    int right = (int)strlen(s) - 1;

    while (left < right)
    {
        left  = skip_fwd(s, left);
        right = skip_back(s, right);

        if (left >= right) break;

        if (tolower((unsigned char)s[left]) !=
            tolower((unsigned char)s[right]))
            return false;

        ++left;
        --right;
    }
    return true;
}

/* ---------- Anagram ---------- */
bool are_anagrams(const char *a, const char *b)
{
    int freq[ALPHA] = {0};

    for (int i = 0; a[i]; ++i)
        if (isalpha((unsigned char)a[i]))
            ++freq[tolower((unsigned char)a[i]) - 'a'];

    for (int i = 0; b[i]; ++i)
        if (isalpha((unsigned char)b[i]))
            --freq[tolower((unsigned char)b[i]) - 'a'];

    for (int i = 0; i < ALPHA; ++i)
        if (freq[i] != 0) return false;

    return true;
}
