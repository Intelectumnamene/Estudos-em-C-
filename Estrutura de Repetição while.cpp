#include <iostream>

using namespace std;

int main()
{
  //  do{
// c�digo
//}while(1==1)

//while(1==1){
// c�digo

int i = 10;
    cout << "Looping DO-WHILE"<< endl;
    do{
        i++;
        cout << "O valor da variavel i eh: " << i << endl;
    }while(i>=10 && i<=20);

    cout << "Looping WHILE"<< endl;
    int i2 = 10;
    while(i2>=10 && i2<=20){
        i2++;
        cout << "O valor da variavel i2 eh: " << i2 << endl;
    }

    system("pause");

    cout << "Hello world!" << endl;
    return 0;
}
