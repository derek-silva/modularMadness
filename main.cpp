#include <iostream>
#include <string>

using namespace std;

string getInput();
string echo(string);
string rev(string);

int main()
{
    string input;
    input = getInput();

    cout << echo(input) << endl;
}

string getInput()
{
    cout << "Enter Modular Command:" << endl;
    string modularCommand;
    getline(cin, modularCommand);

    return modularCommand;

}

string echo(string input)
{
    std::string echoString (input+input);

    return echoString;
}

string rev(string input)
{
    int n = input.length();

    for (int i = 0; i < n / 2; i++)
        swap(input[i], input[n - i - 1]);

    return input;
}


