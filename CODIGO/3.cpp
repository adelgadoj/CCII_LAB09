// Alumno : Alexandro Delgado Justo
#include <iostream>
using namespace std;
template <class T , class TT>
void correo(T n, TT a)
{
    cout <<n<<a<< "@unsa.edu.pe"<<endl;
}

int main()
{
    correo('a',"delgado");
    correo('e', "velazquez");
    correo('s', "rodriguez");
    correo('b', "quispe");
    correo('a', "magno");
    
    return 0;
}