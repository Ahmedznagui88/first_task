#include <iostream>
using namespace std;

int main()
{
    
    //input validation

    int _num;
    bool validInput = false;

    while (!validInput ) {
        cout << "Enter an odd number; " <<endl;
        cin >> _num; 

        if(_num >= 5 && _num % 2 != 0) {
            validInput = true;
        } else {
            cout << "Please enter an odd number, try again!!"<<endl;
        }
    }
    
    char a = '*';

    //row
    for (int i = 0; i < _num; i++) {

        if( _num > 5) {
            cout<< a << " ";
            
        }
        
    //column
    for (int j = 0; j < _num; j++) {
        if( _num <= 5 ) {
            cout<< a << " ";
            }
        }
        cout <<endl;
        
    }

    return 0;
}