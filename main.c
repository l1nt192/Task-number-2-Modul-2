#include <stdio.h>
#include "func.h"


int main() 
{
    struct Train trains[100];

    readTrainsFromFile(trains, 100, "trains.txt");

    // ¬ыводим на экран данные о поездах с длительностью пути более 7 часов 20 минут
    printLongDurationTrains(trains, 100);

    return 0;
}
