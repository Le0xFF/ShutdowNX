#include <stdio.h>
#include <stdint.h>
#include <switch.h>

int main(int argc, char *argv[])
{
    consoleInit(NULL);

    appletRequestToShutdown();
}
