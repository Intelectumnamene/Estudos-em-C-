#include <iostream>

using namespace std;
//if(verdadeiro){
  //bloco de execução para as situações em que
  //a condição for verdadeira
//}else{
  //este é o bloco que será executado
  //quando a nossa condição não for verdadeira.
int main()
{
    cout << "Digite um numero qualquer: " << endl;
    int valor = 0;
    cin >> valor;

    if(valor > 50){
        cout << "O valor digitado eh maior do que 50." << endl;
    }else{
        cout << "O valor digitado eh menor do que 50." << endl;
    }

    system("pause");

    cout << "Hello world!" << endl;
    return 0;
}
