#ifndef _STRFRY_H_
#define _STRFRY_H_

#include <stdbool.h>

double jaro_winkler(const char *str1, const char *str2, bool long_tolerance);
double jaro_distance(const char *str1, const char *str2);

unsigned hamming_distance(const char *str1, const char *str2, bool ignore_case);

unsigned levenshtein_distance(const char *str1, const char *str2);

char* soundex(const char *str);

char* metaphone(const char *str);

#endif
