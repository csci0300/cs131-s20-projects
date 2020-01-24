#include <stdio.h>
#include "./strings.h"
#include "test_runner.h"

#define FUN_STRING                                                  \
  "Oh joy! Strings are so fun. [\"hip\", \"hip\"]\n"                \
  "What did the String say to the Integer? You're not my type...\n" \
  "Eight bytes walk into a bar. The bartender asks,\n"              \
  "\"Can I get you anything?\""                                     \
  "\"Yeah,\" reply the bytes. \"Make us a Double.\""

#define FUN_STRING2                              \
  "Oh joy! Strings are so fun. Hip Hip Array!\n" \
  "What did the String say to the Integer? You're not my type...\n"

// size_t strlen(const char *s);
void test_strlen() {
  /*
   *
   * WRITE YOUR OWN TESTS HERE
   *
   */

  /**** PROVIDED TESTS ****/
  assert_equal_int(0, strlen(""), "strlen(\"\")");
  assert_equal_int(4, strlen("asdf"), "strlen(\"asdf\")");
  assert_equal_int(5, strlen("asdf "), "strlen(\"asdf \")");
  assert_equal_int(2, strlen("\n\n"), "strlen(\"\n\n\")");
  assert_equal_int(223, strlen(FUN_STRING), "strlen(\"FUN_STRING\"");
}

// size_t strspn(const char *s, const char *accept);
void test_strspn() {
  /*
   *
   * WRITE YOUR OWN TESTS HERE
   *
   */

  /**** PROVIDED TESTS ****/
  assert_equal_int(2, strspn("professor", "rpf"),
                   "strspn(\"professor\", \"rpf\")");
  assert_equal_int(0, strspn("professor", ""), "strspn(\"professor\", \"\")");
  assert_equal_int(2, strspn(FUN_STRING, "!jhoO"),
                   "strspn(FUN_STRING, \"!jhoO\")");
}

// int strncmp(const char *s1, const char *s2, size_t n);
void test_strncmp() {
  /*
   *
   * WRITE YOUR OWN TESTS HERE
   *
   */

  /**** PROVIDED TESTS ****/
  assert_same_sign(-2, strncmp("professor", "rpf", 3),
                   "strncmp(\"professor\", \"rpf\", 3)");
  assert_same_sign(17, strncmp("test", "case", 1),
                   "strncmp(\"test\", \"case\", 1)");
  assert_same_sign(0, strncmp("abc", "abc", 5), "strncmp(\"abc\", \"abc\", 5)");
  assert_same_sign(0, strncmp("asdf", "asde", 3),
                   "strncmp(\"asdf\", \"asde\", 3)");
  assert_same_sign(114, strncmp("rpf", "", 3), "strncmp(\"rpf\", \"\", 3)");
  assert_same_sign(0, strncmp("rpf", "", 0), "strncmp(\"rpf\", \"\", 0)");

  assert_same_sign(0, strncmp(FUN_STRING2, FUN_STRING, 5),
                   "strncmp(FUN_STRING2, FUN_STRING, 5)");
}

// char *strncpy(char *dest, const char *src, size_t n);
void test_strncpy() {
  /*
   *
   * WRITE YOUR OWN TESTS HERE
   *
   */

  /**** PROVIDED TESTS ****/
  char dest[5];
  char* src = "professor";
  strncpy(dest, src, 3);
  assert_equal_char(src[0], dest[0], "strncpy(dest, src, 3) char 0");
  assert_equal_char(src[1], dest[1], "strncpy(dest, src, 3) char 1");
  assert_equal_char(src[2], dest[2], "strncpy(dest, src, 3) char 2");

  char buffer[10];
  strncpy(buffer, "brown", 10);
  assert_equal_str("brown", buffer, "strncpy(..., \"brown\", 10);");
  for (int i = 5; i < 10; ++i)
    assert_equal_char('\0', buffer[i],
                      "strncpy(..., \"brown\", 10) null bytes at end");
}

// char *strstr(const char *haystack, const char *needle);
void test_strstr() {
  /*
   *
   * WRITE YOUR OWN TESTS HERE
   *
   */

  /**** PROVIDED TESTS ****/
  char* eg = "eg";
  char* dg = "dg";
  char* f = "f";
  assert_equal_str("defg", strstr("abcdefg", "de"),
                   "strstr(\"abcdefg\", \"de\")");
  assert_equal_str("babab", strstr("abbabab", "bab"),
                   "strstr(\"abbabab\", \"bab\")");
  assert_equal_str("eg", strstr("abcdeg", eg), "strstr(\"abcdeg\", \"eg\")");
  assert_equal_str(NULL, strstr("abcdeg", dg), "strstr(\"abcdeg\", \"dg\")");
  assert_equal_str(NULL, strstr("abcdeg", f), "strstr(\"abcdeg\", \"f\")");
  assert_equal_str("eg", strstr("eg", eg), "strstr(\"eg\", \"eg\")");
}
