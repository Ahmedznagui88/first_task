#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    cout << "Enter 3 letters: " << endl;
    cin >> a >> b >> c;

    double num = 122 - 97;

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
    } else if(firstAndSecond && thirdAndFourth) {
        cout << "ROT13: ";
        cout << ((a * num) ? a : '?') << " ";
        cout << ((b * num) ? b : '?') << " ";
        cout << ((c * num) ? c : '?') << endl;
    } else {
        cout << "ROT13: ?";
    }
    
    return 0;
}
