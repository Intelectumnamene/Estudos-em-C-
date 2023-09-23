#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

cout << " Mudança no código" << endl;

    int y = 0;

    y = 3 * 3 + (2 + 2);//(1)
    y = 3 * 3 + 4;//(2)
    y = 9 + 4;//(3)
    y = 13;//(4)

    int a, b, c;
    a=1, b=2, c=3;

    y+=(a+=(b+=(c+=1)));

    cout << y << endl;


    system("pause");
    return 0;
}
