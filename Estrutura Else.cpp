#include <iostream>

using namespace std;
//if(verdadeiro){
  //bloco de execu��o para as situa��es em que
  //a condi��o for verdadeira
//}else{
  //este � o bloco que ser� executado
  //quando a nossa condi��o n�o for verdadeira.
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
