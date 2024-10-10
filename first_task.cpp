#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    cout << "Enter 3 letters: " << endl;
    cin >> a >> b >> c;

    bool firstAndSecond = (a >= 97 && a < 110) && (b >= 97 && b < 110) && (c >= 97 && c < 110);
    bool thirdAndFourth = (a >= 110 && a <= 122) && (b >= 110 && b <= 122) && (c >= 110 && c <= 122);

    if (firstAndSecond){
        a += 13;
        b += 13;
        c += 13;
        cout << "ROT13: " << a << " " << b << " " << c << endl;
    } else if (thirdAndFourth){
        a -= 13;
        b -= 13;
        c -= 13;
        cout << "ROT13: " << a << " " << b << " " << c << endl;
    } else {
        if (!(a >= 97 && a <= 122)) a = '?';
        if (!(b >= 97 && b <= 122)) b = '?';
        if (!(c >= 97 && c <= 122)) c = '?';

        cout << "Invalid letters: " << a << " " << b << " " << c << endl;
    }
    
    return 0;
}
