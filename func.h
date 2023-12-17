#pragma once
struct Train
  
{
    int trainNumber;
    int departureTime;
    int arrivalTime;
};
void readTrainsFromFile(struct Train trains[], int size, const char* filename);
void printLongDurationTrains(const struct Train trains[], int size);

