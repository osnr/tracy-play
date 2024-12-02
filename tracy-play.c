#include <stdio.h>
#include <unistd.h>

#include <tracy/TracyC.h>

int main() {
    for (;;) {
        sleep(1);
        printf("Done sleeping!\n");
    }
}
