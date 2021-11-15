#include <iostream>

using namespace std;

int main()
{
    //input
    char input;

    string digits = "";

    while(input != '#'){
        cout << "Enter letter: ";
        cin >>input;
        if(input >= 'A' && input <= 'Z'){
            switch(input){
                case 'A':
                case 'B':
                case 'C':
                    digits = digits + "2";
                    break;
                case 'D':
                case 'E':
                case 'F':
                    digits = digits + "3";
                    break;
                case 'G':
                case 'H':
                case 'I':
                    digits = digits + "4";
                    break;

            } //end of switch
        }//end of if
    }//end of while

    cout << digits;

}
