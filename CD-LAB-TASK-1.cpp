 #include <iostream>

 #include <string>

  using namespace std;

  bool isNumericConstant( string input) {

    for (char ch : input) {

        if (ch < '0' || ch > '9') {

            return false;

        }
         else

    return true;

    }


}

  int main() {

    string userInput;

    cout << "Enter a value: ";

    cin >> userInput;

    if (isNumericConstant(userInput)) {

        cout << "Numeric constant" << endl;

    } else {

        cout << "Not numeric" << endl;

    }

    return 0;

}

