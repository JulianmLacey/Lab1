#include "header.h"

char *reverseString(char *str, int index) {
    char temp;
    int len = strlen(str);
    if (index >= len / 2)
        return str;
    else {
        temp = str[index];
        str[index] = str[len - index - 1];
        str[len - index - 1] = temp;
        return reverseString(str, index + 1);
    }
}

// Implementation of strTok()
char *myStrTok(char *str, const char delim) {
    static char *last;
    if (str != NULL)
        last = str;
    else
        str = last;
    if (*last == '\0') return NULL;

    while (*last != '\0') {
        // printf("%c", *last);
        if (*last == delim) {
            *last = '\0';
            last++;
            return str;
        }
        last++;
    }
    //*last = NULL;
    return str;
}
char *mergeIntoThird_Fixed(char *str1, char *str2, int len1, int len2) {
    const size_t resLen = len1 + len2 + 1;
    char *res = malloc(resLen);
    int c = 0;
    char temp;

    // merge
    while ((*str1) || (*str2)) {
        res[c++] = (*str1 < *str2) ? ((*str1) ? *str1++ : *str2++) : *str2++;
    }
    res[c] = '\0';
    int n = strlen(res);
    // sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (res[i] > res[j]) {
                temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }
    }
    return res;
}
char *mergeIntoThird_Dynamic(char *str1, char *str2, int len1, int len2) {
    int c = 0;
    char temp;
    char *res = malloc(sizeof(char));

    // merge
    while ((*str1) || (*str2)) {
        res = realloc(res, (c + 1) * sizeof(char));  // Increase Array Size
        res[c++] = (*str1 < *str2) ? ((*str1) ? *str1++ : *str2++) : *str2++;
    }
    res[c] = '\0';
    int n = strlen(res);
    // sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (res[i] > res[j]) {
                temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }
    }
    return res;
}

char *mergeDynamic(char *str1, char *str2, int len1, int len2) {
    int c = 0;
    char temp;
    const size_t resLen = len1 + len2 + 1;
    str1 = realloc(resLen, sizeof(char));
    memcpy(str1 + len1, str2, len2 + 1);

    str1[len1 + len2] = '\0';
    // sort
    for (int i = 0; i < resLen - 1; i++) {
        for (int j = i + 1; j < resLen; j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    return str1;
}