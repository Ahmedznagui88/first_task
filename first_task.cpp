#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    cout << "Enter 3 letters: " << endl;
    cin >> a >> b >> c;

    bool firstExp = (a >= 97);
    bool secondExp = (a < 110);

    if (firstExp && secondExp) {
        a += 13;
        
        cout << "ROT13: " << a << endl;

    } else{
        cout << "ROT13: ? " << a << endl;

    }
    return 0;
}
