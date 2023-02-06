#include <iostream>
#include <ctime>
using namespace std;
void main() 
{
    srand(time(0));
    const int size = 20;
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
       
        
            arr[i] = -1000 + rand() % +2001;
            cout << arr[i] << ' ';
        
        cout << endl;
    }
    int min, max;
    min = max = arr[0];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
}