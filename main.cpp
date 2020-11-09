#include <iostream>
#include  <vector>
#include <algorithm>

using namespace std;

void toUpper(string &);

int main(){
    vector<string> cadenas;
    string opc;

    while (true)
    {
        cout << "1. Agregar al final" << endl;
        cout << "2. Mostrar" << endl;
        cout << "3. Inicializar" << endl;
        cout << "4. Frente" << endl;
        cout << "5. Ultimo" << endl;
        cout << "6, Ordenar" << endl;
        cout << "7. Insertar" << endl;
        cout << "8. Eliminar" << endl;
        cout << "9. Eliminar ultimo" << endl;
        cout << "0. salir" << endl;
        getline(cin, opc);

        if(opc == "1"){
            string cadena;

            cout << "Cadena: ";
            getline(cin, cadena);
            toUpper(cadena);

            cadenas.push_back(cadena);
        }
        else if(opc == "2"){
            for (size_t i(0); i < cadenas.size(); i++){
                cout << cadenas[i] << endl;
            }
        }

        else if (opc == "3"){
            size_t n;
            string cadena;

            cout << "Tamanio: ";
            cin >> n;
            cin.ignore();
            cout << "Cadena: ";
            getline(cin, cadena);
            toUpper(cadena);

            cadenas = vector<string>(n, cadena);
        }
        else if (opc == "4")
        {
            if (cadenas.empty()){
                cout << "El vector esta vacio " << endl;
            }
            else{
                cout << cadenas.front() << endl;
            }
        }
        else if (opc == "5")
        {
            if (cadenas.empty())
            {
                cout << "El vector esta vacio " << endl;
            }
            else
            {
                cout << cadenas.back() << endl;
            }
        }
        else if(opc == "6"){
            sort(cadenas.begin(), cadenas.end());
        }
        else if (opc == "7")
        {
            size_t p;
            string cadena;

            cout << "Posicion ";
            cin >> p;
            cin.ignore();
            cout << "Cadena: ";
            getline(cin, cadena);
            toUpper(cadena);

            if (p >= cadenas.size())
            {
                cout << "Posicion no valida" << endl;
            }
            else
            {
                cadenas.insert(cadenas.begin()+p, cadena);
            }
        }
        else if(opc == "8"){
            size_t p;

            cout << "Posicion ";
            cin >> p;
            cin.ignore();

            if (p >= cadenas.size())
            {
                cout << "Posicion no valida " << endl;
            }
            else
            {
                cadenas.erase(cadenas.begin() + p);
            }
            
            
        }
        else if (opc == "9")
        {
            if (cadenas.empty())
            {
                cout << "El vector esta vacio" << endl;
            }
            else
            {
                cadenas.pop_back();
            }
            
        }
        
        
        else if(opc == "0"){
            break;
        }
    };

    return 0;
}

void toUpper(string &c){
    for (size_t i = 0; i < c.length(); i++)
    {
        c[i] = toupper(c[i]);
    }
    
}