// Alumno : Alexandro Delgado Justo
#include <iostream>
using namespace std;
template <class operar>
void operaciones (operar a, operar b){
    cout<<"\nSuma: "<<a+b<<endl;
    cout<<"Resta: "<<a-b<<endl;
    cout<<"Multiplicacion: "<<a*b<<endl;
    cout<<"Division: "<<a/b<<endl;
}

int main(){
    operaciones(4,234);
    operaciones(0.1,2.4);
    return 0;
}