#include <stdio.h>
#include <iostream>
#include <cmath>

int average(int* ar, int count)
{
    int summ = 0;
    for (int i = 0; i < count; i++)
    {
        summ += ar[i];
    }

    float avg = float(summ) / float(count);
    
    return round(avg);
}

void func(int* p, int count)
{
    int level = average(p, count);

    switch (level)
    {
    case 5: std::printf("Otlichnik :))"); break;
    case 4: std::printf("Horoshist :)"); break;
    case 3: std::printf("Udovletvoritelno :|"); break;
    case 2: std::printf("Zavalil sessiyu :("); break;
    default: std::printf("Error!");
    }
}

void main()
{
    const int count = 4;
    int levels[count] = { 5, 4, 4, 4 };

    func(levels, count);
}
