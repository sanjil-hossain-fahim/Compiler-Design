#include <iostream>
#include <string>

using namespace std;

bool op(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=');
}

int main()
{
    cout<<"Enter Any String: ";
    string st;
    getline(cin, st);



    for(char ch : st)
    {
        if(op(ch))
        {
            cout<<"Operator: "<<ch<<endl;
            cout<<"\n";
        }
        else { cout<<"\n";
               cout<<" Do Not Exist"<<endl;

        }
    }

    return 0;
}
