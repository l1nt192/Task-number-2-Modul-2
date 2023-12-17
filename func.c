#include <stdio.h>
#include "func.h"

void readTrainsFromFile(struct Train trains[], int size, const char* filename)
{
    FILE* file = fopen(filename, "r");
    if (file != NULL) {
        for (int i = 0; i < size; i++) {
            fscanf_s(file, "%d %d %d", &trains[i].trainNumber, &trains[i].departureTime, &trains[i].arrivalTime);
        }
        fclose(file);
    }
}

void printLongDurationTrains(const struct Train trains[], int size) {
    int travelTime = 0;
    for (int i = 0; i < size; i++) {
        if (trains[i].arrivalTime < trains[i].departureTime)
        {
            travelTime = 2400 + (trains[i].arrivalTime - trains[i].departureTime);
        }
        else
        {
            travelTime = trains[i].arrivalTime - trains[i].departureTime;
        }
        int travelHours = travelTime / 100;
        int travelMinutes = travelTime % 100;
        if (travelMinutes > 60)
        {
            travelMinutes = travelMinutes - 60;
            travelHours += 1;
        }
        if (travelHours > 7 || (travelHours == 7 && travelMinutes > 20))
        {
            printf("Train Number: %d\n", trains[i].trainNumber);
            printf("Departure Time: %d\n", trains[i].departureTime);
            printf("Arrival Time: %d\n", trains[i].arrivalTime);
            printf("Travel Time: %d:%d\n", travelHours, travelMinutes);
            printf("--------------------\n");
        }
    }
}