#include <stdio.h>
#include <time.h>

int main() 
{
    time_t now;
    struct tm* tm_info;

    time(&now);
    tm_info = localtime(&now);

    printf("%d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);

    return 0;
}