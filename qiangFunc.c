#include "qiangFunc.h"

void print_current_date()
{
    time_t t = time(NULL);
    struct tm* tm_info = localtime(&t);
    printf("当前日期: %04d-%02d-%02d\n",
        tm_info->tm_year + 1900,
        tm_info->tm_mon + 1,
        tm_info->tm_mday);
}
