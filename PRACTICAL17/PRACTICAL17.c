#include <stdio.h>

int main() {
    float distance_covered = 0.0;
    float step = 0.5;           // Distance covered every minute (km)
    float total_distance = 10.0; // Marathon distance (km)
    int minute = 0;

    while (1) {
        minute++;
        distance_covered += step;

        // Make sure we don't display more than the total distance
        if (distance_covered > total_distance)
            distance_covered = total_distance;

        printf("Minute %d: Distance covered = %.1f km\n", minute, distance_covered);

        if (distance_covered >= total_distance)
            break;
    }

    printf("Marathon complete!\n");

    return 0;
}
