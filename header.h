#pragma once
#include <stdlib.h>
#include <string.h>

#include "stdio.h"

char *reverseString(char *str, int index);
char *myStrTok(char *str, const char delim);
char *mergeIntoThird_Fixed(char *str1, char *str2, int len1, int len2);
char *mergeIntoThird_Dynamic(char *str1, char *str2, int len1, int len2);
char *mergeDynamic(char *str1, char *str2, int len1, int len2);