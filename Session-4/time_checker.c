#include <stdio.h> 
#include <time.h>

int main() {
    time_t timer;
    struct tm y2k;
    double seconds;

    y2k.tm_hour = 0;
    y2k.tm_min = 0;
    y2k.tm_sec = 0;
    y2k.tm_year = 100;
    y2k.tm_mon = 0;
    y2k.tm_mday = 1;

    time(&timer);
    seconds = difftime(timer, mktime(&y2k));

    printf("%.f seconds since January 1, 2000\n", seconds);
    return 0;
}

