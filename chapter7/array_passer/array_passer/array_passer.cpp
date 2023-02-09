﻿#include <iostream>
using namespace std;
void increase(int* const array, const int NUM_ELEMENTS);
void display(const int* const array, const int NUM_ELEMENTS);
int main()
{
    const int NUM_SCORES = 3;
    int highScores[NUM_SCORES] = { 5000, 3500, 2700 };
    cout << *highScores << endl;
    cout << *(highScores + 1) << endl;
    cout << *(highScores + 2) << "\n\n";
    increase(highScores, NUM_SCORES);
    display(highScores, NUM_SCORES);
    
    return 0;
}
void increase(int* const array, const int NUM_ELEMENTS)
{
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        array[i] += 500;
    }
}
void display(const int* const array, const int NUM_ELEMENTS)
{
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        cout << array[i] << endl;
    }
}



