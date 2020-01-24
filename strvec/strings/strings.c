/*
 * Brown University - Department of Computer Science
 * Originally created by Prof. Thomas W. Doeppner
 *
 * Reused with permission for CS 131.
 */

/*      _        _
 *  ___| |_ _ __(_)_ __   __ _ ___
 * / __| __| '__| | '_ \ / _` / __|
 * \__ \ |_| |  | | | | | (_| \__ \
 * |___/\__|_|  |_|_| |_|\__, |___/
 *                       |___/
 */

#include <stdlib.h>

/*
 * strlen() - abbreviated from "string length".
 * - Description: determine the number of characters in a character string.
 *
 * - Arguments: a pointer to a null-terminated character string.
 *
 * - Return value: the number of characters using a special unsigned numerical
 *   type, which is intended specifically for pointer arithmetic, called size_t.
 *
 * Examples:
 * 1. >  strlen("") = 0
 * 2. >  strlen("ilovecs33") = 9
 *
 * - Hint: the length of a C string does _not_ include the null ('\0')
 *   character that terminates it.
 */
size_t strlen(const char* s) {
  // TODO: Fill In
  return 0;
}

/*
 * strspn() - abbreviated from "string span".
 * - Description: determine the number of characters in a character string
 *   that consist of characters in accept
 *
 * - Arguments: a pointer to a null-terminated character string,
 *   and a point to a null terminated string of characters to accept
 *
 *
 * - Return value: the number of characters at the beginning of s that are in
 * accept
 *
 * Examples:
 * 1. >  strspn("abcde", "ac") = 1
 * 2. >  strspn("123456", "ab") = 0
 * 3. >  strspn("hello", "hel") = 4
 *
 */
size_t strspn(const char* s, const char* accept) {
  // TODO: Fill In
  return 0;
}

/*
 * strncmp() - abbreviated from "string compare (n bytes)".
 * - Description: compares up to the first n bytes of two strings, s1 and s2
 *
 * - Arguments: two null terminated strings (s1 and s2) and the maximum number
 * of bytes to compare (n).
 *
 * - Return value: negative number if s1 < s2, 0 if s1 == s2, positive number if
 * s1 > s2
 *
 * Examples:
 * 1. >  strncmp("abcde", "abdde", 3) = some negative number
 * 2. >  strncmp("abcde", "abdde", 2) = 0
 * 3. >  strncmp("1234567", "123", 100) = some positive number
 *
 *  - Hint: You can use the other string functions you implemented.
 */
int strncmp(const char* s1, const char* s2, size_t n) {
  // TODO: Fill In
  return 0;
}

/*
 * strncpy() - abbreviated from "string copy (n bytes)".
 * - Description: copies the first n bytes of the contents of the source string
 *   into the location of the destination string. As with strcpy(), we are
 *   assuming the destimation string is large enough to hold the entire
 *   contents of the source string. If the number of bytes to be copied is less
 *   than the number of bytes in the src string, the null character will
 *   not be copied. If the number of bytes to be copied is longer than the
 *   length of src, the difference will be padded with null characters appended
 *   onto the end of dest to fill out the requested in bytes.
 *
 * - Arguments: a pointer (char *) to the destination string, a pointer
 *   (char *) to the source string, and the number of bytes (size_t) to copy.
 *
 * - Return value: a pointer (char *) to the destination string.
 *
 * - Usage:
 *
 *      char abbreviation[5];
 *      strncpy(abbreviation, "professor", 4);
 *
 *      (The variable abbreviation now contains the four bytes of "prof", but
 *      it is not null-terimated.)
 *
 *      char buffer[10];
 *
 *      strncpy(buffer, "brown", 10);
 *
 *      (The variable buffer now contains the five bytes of "brown" followed by
 *      five null characters.)
 *
 *      char good_fit[5];
 *
 *      strncpy(good_fit, "okay", 5);
 *
 *      (The variable good_fit now contains the four bytes of "okay" and is
 *      correctly null-terminated.)
 *
 * - Hint: make sure not to modify the source string. Please pay attention to
 * the function description to see what is expected of your implementation.
 */
char* strncpy(char* dest, const char* src, size_t n) {
  // TODO: Fill In
  return NULL;
}

/*
 * strstr() - abbreviated from "string (find) string".
 * - Description: Find the string "needle" in the string "haystack". This is
 *   not some joke from the TAs but the actual terminology used in the Linux
 *   version of strstr(). Don't believe us? Type "man strstr" into a terminal,
 *   and see for yourself! For another example of systems programming humor,
 *   you may also appreciate "man strfry".
 *
 * - Arguments: a pointer to a null-terminated character string to find
 * (needle), and a pointer to anull-terminated character string in which to find
 * the string (haystack)
 *
 * - Return value: a pointer to the beginning of the needle string within the
 * haystack string
 *
 * Examples:
 * 1. >  strstr("abcde", "bcd"); should return pointer to string starting @ b
 * 2. >  strstr("123456", "4"); should return pointer to string starting @ 4
 * 3. >  strstr("hello", "xyz") = NULL
 *
 * - Hint: You can use the other string functions you implemented.
 * - Hint: Think about the expected output when the inputs are empty strings
 */
char* strstr(const char* haystack, const char* needle) {
  // TODO: Fill In
  return NULL;
}
