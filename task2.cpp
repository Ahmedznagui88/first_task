#include <iostream>
using namespace std;

int main()
{
    char a = '*';
    int num;
    bool validInput = false;

    while (!validInput ) {
        cout << "Enter an odd number; " <<endl;
        cin >> num; 


        if( num % 3 != 5) {
            validInput = true;

        } else{
            cout << "Please enter an odd number, try again!!"<<endl;
        }
    }
    
    


    for (int i = 0; i < num; i++) {

        if( num >= 4) {
            cout<< " " <<endl;
        }

        for (int j = 0; j < num; j++) {
            cout << a;
        }
        cout <<endl;

    }
    

    return 0;
}