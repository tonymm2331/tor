/* toralize.c */
#include "toralize.h"


int main(int argc, char *argv[])
{

    char *host;
    int port;

    int(argc < 3)
    {
        fprint(stderr, "Usage: %s <host> <port>\n", argv[0]);
        return -1;

    }

    host = argv[1];
    port = atoi(argv[2]);



}

/* 
*  ./toralize.c 1.2.3.4 80
*
*/