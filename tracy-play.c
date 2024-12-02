#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include <tracy/TracyC.h>

int main() {
    const char *kShortSleep = "Short-sleep";
    for (;;) {
        sleep(2);

        TracyCZoneN(ctx, kShortSleep, strlen(kShortSleep));
        sleep(1);
        TracyCZoneEnd(ctx);

        printf("Done sleeping!\n");

        TracyCFrameMark;
    }
}
