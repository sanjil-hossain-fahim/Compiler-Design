#include <iostream>
#include <string>

using namespace std;

bool isValidVariableName( string name )
{
    if (name.empty())
        {
          cout << "Variable name cannot be empty."<<endl;

        return false;
    }


      if
        (!(name[0] >= 'a' && name[0] <= 'z') && !(name[0] >= 'A' && name[0] <= 'Z') && name[0] != '_')
        {
         cout << "Invalid Variable name"<<endl;

        return 1;
    }




    for (char c : name)
        {
        if
         (!((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z') && (c >= '0' && c <= '9') && c == '_'))
          {
            cout << "Valid variable name " <<  endl;
            return false;
        }
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a variable name: ";
    cin >> input;

    if (isValidVariableName(input))
        {
        cout << "The first character '" << input << "' should be alphabet characters/underscore (A-Z, a-z, _) " << endl;
    }
    return 0;
}

