#include <iostream>
#include <string>
using namespace std;

int main()
{
    string *userword = new string;
    cout << "Please type in a word: " ;
    cin >> *userword;

    cout <<"Your word in reverse is: ";
    for (int i = 0 ; i < userword->length() ; i++ )
    {
        cout << (*userword)[userword->length() -1 -i];
    }

    delete userword;

    return 0;
}