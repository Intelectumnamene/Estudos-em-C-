#include <iostream>

using namespace std;

int main()
{
      int i = 0;
    cout << "Digite um numero: " << endl;
    cin >> i;
    if(i==1)
    while(i<10){
        i++;
        cout << "Uma frase qualquer" << endl;
    }
    else{
        cout << i*i << endl;
    }


    system("pause");
    cout << "Hello world!" << endl;
    return 0;
}
