#include <iostream>
using namespace std;

int main() 
{
    int a = 10; //inteiros//
    char b = 'c'; // para caracteres 'a'//
    double c = 3.1415; // Para numeros com casa decimais //
    float d = 3.14; // para numero com casas decimais, mas com melhor precisão //
    bool e = true; // true or false //
    string nome = "hitalo"; 
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n"; // Aqui ele vai dar 1 ou 0, "1" para verdade e "0" para falso //
    cout << nome << "\n\n";
    
    // Leitura de duas ou mais variaveis com cin >> variavel1 >> variavel2 >> ...//
    int numero1, numero2, numero3, soma;
    cout <<"digite valores inteiros\n";
    cin >> numero1 >> numero2 >> numero3;
    soma = numero1 + numero2 + numero3;
    cout << soma << "\n \n";
    
    // Operadores em caracteres // 
    // Quero que digite um caractere em "caractere1" e no "caractere2" //
    // apareça o maiusculo do "caractere1"//
    
    char caractere1, caractere2;
    cout << "Digite um caractere minusculo:\n";
    cin >> caractere1;
    caractere2 = caractere1 - 32;
    cout <<"O maiusculo de '" << caractere1 << "' eh '" << caractere2 << "'\n\n";
    // O 32 é tirado da tabela ASCII, para caracteres utilizamos a tabela ASCII //
    
    // O bool é um expressao booleana, é verdadeira ou falsa // 
    // exemplo //
    bool chuva = false;
    cout << "Tem chuva? " << (chuva ? "sim" : "nao" ) << endl;
    // Imprime sim ou não depedendo do valor booleano //
    
    return 0;
    }
