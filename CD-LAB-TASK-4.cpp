#include <iostream>
#include <string>
using namespace  std ;


bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}
bool isIdentifier( string & input_str)
 {
    if (input_str.empty() || !isalpha(input_str[0]) && input_str[0] != '_')
    {
        return false;

    }

    for (char c : input_str)
    {
        if (!isalnum(c) && c != '_')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string input_str;
    cout << "Enter a string to check an identifier: ";
    cin >> input_str;

    if (isIdentifier(input_str))
        {
        cout << input_str << " It is a valid identifier." << endl;
        }
    else
        {
        cout << input_str << " It is not a valid identifier." << endl;
        }

    return 0;
}
