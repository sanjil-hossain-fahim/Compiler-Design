#include<iostream>
using namespace std;

 bool isSingleLineComment( string input)
{
    return (input.substr (2,-2)=="//");
}

 bool isMultiLineCommentStart( string input)
{
    return (input.substr (0,2)=="/*");
}
 bool isMultiLineCommentEnd(string input)
{
    return (input.substr (input.size()-2,2)=="*/");
}
 bool isComment( string input){

  if(isSingleLineComment(input))
  {
      return true;
  }

    else if (isMultiLineCommentStart(input) || isMultiLineCommentEnd(input) )
  {
      return true;
  }

   else
    return false;
}
 int main (){

 string input;
 cout<<"Input Here:";

 getline(cin,input);

 if ( isComment(input)) {

    cout <<"Input is a comment"<<endl;
}

 else
    { cout<<"Input is not a comment"<<endl;

}
  return 0;

}
