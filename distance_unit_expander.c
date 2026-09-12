#include <stdio.h>

int main() {
    float speed, time;
    float distance, meters, centimeters, millimeters;

    printf("Enter speed in km/h: ");
    scanf("%f", &speed);

    printf("Enter time in hours: ");
    scanf("%f", &time);

    distance = speed * time;

    meters = distance * 1000;
    centimeters = distance * 100000;
    millimeters = distance * 1000000;

    printf(" Distance Conversion Result \n");
    printf("Distance: %.2f km\n", distance);
    printf("Meters: %.2f m\n", meters);
    printf("Centimeters: %.2f cm\n", centimeters);
    printf("Millimeters: %.2f mm\n", millimeters);

    return 0;
}