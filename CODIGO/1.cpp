//Alumno : Alexandro Delgado Justo
#include <iostream>
using namespace std;
template <class Dat>
void maxYmin(Dat a, Dat b, Dat c)
{
    Dat max = a;
    Dat min = a;
    if (b > a && c > a) 
    {
        max = b;
        min = a;
    }

    else if (c > a && a > b)
    {
        max = c;
        min = b;
    }
    else if ( a > c && b > c){
        max = a;
        min = c;
    }
    cout << "El maximo es: "<<max<<endl ; 
    cout << "El minimo es: " << min<<endl;
}

int main(){
    maxYmin (4, 1 , 6);
    maxYmin(2.5, 2.1, -2.5);
    return 0;
}
