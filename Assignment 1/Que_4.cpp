#include <iostream>
#include <string>


using namespace std;

int main()
{
    int t; //No. of test cases
    cin >> t;
    while(t--){
        string str; //Defines string variable to be taken as input
        cin>>str; //Takes input string
        for(int i=0;str[i]!='\0';i++){ //For loop to iterate through string
            if(str[i]>='A'&&str[i]<='Z'){ //Checks whether given letter is upper case or lower case
                str[i]=str[i]+'a'-'A'; //Changes upper case to lower case
            }
            else if(str[i]>='a'&&str[i]<='z'){
                str[i]=str[i]+'A'-'a'; //Changes lower case to upper case
            }
            else{
                cout << "Please enter only alphabets as input";
                break;
            }
        }
        cout << str << endl; //Prints output string

    }


    return 0;
}