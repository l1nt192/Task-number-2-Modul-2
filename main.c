#include <stdio.h>
#include "func.h"


int main() 
{
    struct Train trains[100];

    readTrainsFromFile(trains, 100, "trains.txt");

    // ������� �� ����� ������ � ������� � ������������� ���� ����� 7 ����� 20 �����
    printLongDurationTrains(trains, 100);

    return 0;
}
