//Alumno : Alexandro Delgado Justo
#include <iostream>
using namespace std;
template <class T>
T max(T arreglo[5])
{
    T max = arreglo[0];
    for(int i = 1 ; i < 5 ; i++){
        if( arreglo[i] > max ){
            max = arreglo[i];
        }
    }
    return max;
}
template <class TT>
TT min(TT arreglo[5])
{
    TT min = arreglo[0];
    for (int i = 1; i < 5; i++)
    {
        if (arreglo[i] < min)
        {
            min = arreglo[i];
        }
    }
    return min;
}
int main()
{
    int ArrayEntero[5] = {10, 7, 2, 8, 6};
    float ArrayFloat[5] = {12.1, 8.7, 5.6, 8.4, 1.2};
    cout << "\nMaximo Arreglo Enteros: " << max(ArrayEntero);
    cout << "\nMaximo Arreglo Flotantes: " << max(ArrayFloat) << endl;
    cout << "\nMinimo Arreglo Enteros: " << min(ArrayEntero);
    cout << "\nMinimo Arreglo Flotantes: " << min(ArrayFloat);
    return 0;
}