#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* newstr = (char*)calloc(128 ,sizeof(char));
    int j=1;
    if (strsSize == 0)
    {
        return "";
    }
    if (strsSize == 1)
    {
        return strs[0];
    }
    for (int i = 0; i < strlen(*strs); i++)
    {
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[0][i] != strs[j][i])
            {
                return newstr;
            }
        }
        newstr[i] = strs[j][i];
    }
    return newstr;
}

int main(int argc, char const* argv[])
{
    char* s[5] = { "flower","flow","fght" };
    char* buff = { 0 };
    buff = longestCommonPrefix(s, 3);
    printf("%s\n", buff);
    free(buff);
    buff = NULL;
    return 0;
}
