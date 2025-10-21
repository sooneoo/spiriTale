#include <stdio.h>
#include <stdlib.h>
#include "version.h"


int main(void) {
    SpiriTale_Version version = spiritale_version();

    printf("spiriTale version: %d.%d.%d\n", version.major, version.minor, version.patch);
    printf("program exit..\n");
    return EXIT_SUCCESS;
}


