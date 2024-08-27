#include <stdio.h>

int main() {
    int x = 0, y = 0;
    for (;;) {
        if (x < 10) {
            x++;
        } else {
            y++;
            x = 0;
        }
    }
    return 0;
}
