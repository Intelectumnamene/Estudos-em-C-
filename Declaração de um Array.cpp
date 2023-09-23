#include <iostream>
//Inicialmente, temos que um Array pode ser chamado de diversas maneiras, por exemplo, Array,
//Vetor, Tabela, Matriz, tudo está se referindo a estrutura Array, porém, com nomes diferentes, mas que fazem menção a uma mesma estrutura.
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int nums[10];

    nums[0] = 100;
    nums[1] = 99;
    nums[2] = 50;
    nums[3] = 25;
    nums[4] = 4;
    nums[5] = 5;
    nums[6] = 60;
    nums[7] = 0;
    nums[8] = -1;
    nums[9] = 9;

    cout << nums[5] + nums[9] << endl;
    cout << nums[0];
    return 0;
}
