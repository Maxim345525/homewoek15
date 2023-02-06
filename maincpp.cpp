#include<iostream>
using namespace std;
bool check_number(int number) 
{
    int count = 0;
    for (int i = 2; i <= number; i++)
    {
        if ((number % i) == 0)
            count++;
    }
    if (count > 1)
        return false;  
    else
        return true;   
}
int main_function_calculation_dynamic(int* Array, int Array_Size)  
{
    int count = 0;
    for (int i = 0; i < Array_Size; i++)
    {
        if (check_number(Array[i]) == true)
            count++;
    }
    return count;
}
int main_function_calculation_static(int Array[], int Array_Size)  
{
    int count = 0;
    for (int i = 0; i < Array_Size; i++)
    {
        if (check_number(Array[i]) == true)
            count++;
    }
    return count;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int* Array;
    int sizeArray;
    cout << "Введите размер массива:" << endl;
    cin >> sizeArray;
    Array = new int[sizeArray]; 
    cout << "Заполните массив:" << endl;
    for (int i = 0; i < sizeArray; i++)
        cin >> Array[i];
    int count = main_function_calculation_dynamic(Array, sizeArray);
    cout << "Количество простых чисел в массиве = " << count << endl;
    system("pause");
    return 0;
}