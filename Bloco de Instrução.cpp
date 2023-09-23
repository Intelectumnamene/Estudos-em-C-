#include <iostream>

using namespace std;

int main()
{

    int main(){

    double num = 10;
    char c = 's';

    {
        printf("Bloco 1\n");

        double dinheiro = 4.99;
        printf("O valor da variavel 'dinheiro' eh: %f\n", dinheiro);
    }

    printf("Informe um numero: \n");
    scanf("%f", &num);

    if(num==50)
        printf("Bloco IF\n");
    else{
        printf("Bloco ELSE\n");
        printf("-\n");
    }
    cout << "Hello world!" << endl;
    return 0;
}
