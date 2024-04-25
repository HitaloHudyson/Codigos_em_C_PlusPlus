#include <iostream>
#include <iomanip>

//A biblioteca iomanip fornece manipuladores de entrada e saidade de dados//
//Como eu precisei definir quantos numeros iriam ter apos a virgula com o std::setprecision() //
//A biblioteca <iomanip> é utilizada junto com a biblioteca <iostream> e <fstream> //

using namespace std;

int main (){
    double raio, area;
    cin >> raio;
    area = 3.14159 * (raio * raio);
    cout << fixed << setprecision(4) <<"A=" << area << endl;

    //A precisão foi definida aqui//
    //se for necessario imprimir outros numeros eles virão com a precisão que foi definida //
    //então se quisermos outros numeros com precisão diferente é necessario definir novamente a precisão //

    //exemplo//

double exemplo = 3.141592;
    cout << "\nEXEMPLO 1:\n" << exemplo; 
    //imprime 3.1416// 

    //Para retornar a precisão padrão//

    cout << defaultfloat << "\nEXEMPLO 2:\n" << exemplo;
    //retorna a precisão padrão//

    return 0;
}
