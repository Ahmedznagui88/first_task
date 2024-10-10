#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    cout << "Enter 3 letters: " << endl;
    cin >> a >> b >> c;

    bool firstExp = (a >= 97) && (b >= 97) && (c >= 97);
    bool secondExp = (a < 110) && (b < 110) && (c < 110);
    bool thirdExp = (a >= 110) && (b >= 110) && (c >= 110);
    bool fourthExp = (a <= 122) && (c <= 122) && (c <= 122);

    if (firstExp && secondExp){
        a += 13;
        b += 13;
        c += 13;
        cout << "ROT13: " << a << " " << b << " " << c << endl;
    } else if (thirdExp && fourthExp){
        a -= 13;
        b -= 13;
        c -= 13;
        cout << "ROT13: " << a << " " << b << " " << c << endl;
    } else {
        (b >= 97 && b <= 122) ? b : '?'; 
        (b >= 97 && b <= 122) ? b : '?';        
        (c >= 97 && c <= 122) ? c : '?'; 
    }
    
    return 0;

}
