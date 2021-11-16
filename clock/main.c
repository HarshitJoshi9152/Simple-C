// this is almost equivalent to a simple
// watch "date | cut -d' ' -f5 | banner"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm

int main() {
    time_t t;   // not a primitive datatype it is long int
    time(&t);   // other functions are very good too ! ctime !

    char command[40] = "banner";

    for ( ; ; ) {
        system("clear");
        time(&t);
        struct tm *time_obj = localtime(&t);
        sprintf(command, "banner %d:%d:%d", time_obj->tm_hour, time_obj->tm_min, time_obj->tm_sec);
        system(command);
        sleep(1);
    }
    return 0;
}
