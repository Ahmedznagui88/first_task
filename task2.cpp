#include <iostream>
using namespace std;

int main()
{
    
    int num;
    bool validInput = false;
 
    //input validation
    while (!validInput ) {
        cout << "Enter an odd number; " <<endl;
        cin >> num; 


        if(num > 5 && num % 2 != 0) {
            validInput = true;

        } else{
            cout << "Please enter an odd number, try again!!"<<endl;
        }
    }
    
    

    char a = '*';

    for (int i = 0; i < num; i++) {

        if( num >= 4) {
            cout<< " ";

            i+=5
        }

        for (int j = 0; j < num; j+=5) {
            cout<< " ";

        }
        cout <<endl;

    }
    

    return 0;
}