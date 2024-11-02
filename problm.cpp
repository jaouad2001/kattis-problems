#include <iostream>
using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    string compressedString = string(1, inputString[0]);

    for (int index = 1; index < inputString.size(); index++)
    {
        if (inputString[index] != inputString[index - 1])
        {
            compressedString += string(1, inputString[index]);
        }
    }

    cout << compressedString << endl;
    return 0;
}
