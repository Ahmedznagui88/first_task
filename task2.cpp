#include <iostream>
using namespace std;

int main()
{
    char a = '*';
    int x;

    cout << "inserisci un numero; " << endl;
    cin >> x; 

    int i = 0;
    

    while (i < x) {
        int j = 0;    

        while (j < x) {
            cout << a;
            j++;

        }cout <<endl;
        i++;
    }

    return 0;
}