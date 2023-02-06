#include<iostream>
using namespace std;
void func(int massive[])
{
    const int ArSize = 10;
        for (int i = 0; i < ArSize; i++)
        {
            cout << massive[i] << endl;
        }
        cout << "REVERSED:" << endl;
        for (int i = ArSize; i > 0; i--)
        {
            cout << massive[i - 1] << endl;
        }
    
}
int main()
{
    int numbers[] = { 12, -45, -33, 213, 11, 1, 25, 34, -4, 56 };
    func(numbers);
    
}