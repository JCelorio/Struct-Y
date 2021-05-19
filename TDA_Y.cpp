# Struct-Y
Ejercicio en C++ con TDA 

#include <iostream>

using namespace std;

struct TDA_Y
{
    int Cod;
    string Materia;
    float Nota[4];
    float Promedio;
};

int main(){
    TDA_Y Estudiante;

    cout<<".:::::::::: Gesti"<<char(162)<<"n de Notas ::::::::::::::.\n";
    cout<<"\nIngresa el Codigo del Estudiante \nIngresalo Aqui: ";
    cin>>Estudiante.Cod;
    
    cout<<"\nIngresa la Notas del Estudiante #"<<Estudiante.Cod<<"\n";

    float SumaAcumulada = 0;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<(i+1)<<".- Ingresa la Nota: ";
        cin>>Estudiante.Nota[i];
        SumaAcumulada += Estudiante.Nota[i];
        cout<<endl;
    }

    Estudiante.Promedio = SumaAcumulada/4;

    cout.precision(3);

    cout<<"\nPromedio del Estudiante: "<<Estudiante.Promedio;
    cout<<"\n";
    system("pause");
    return 0;
}
