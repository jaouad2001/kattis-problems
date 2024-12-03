#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string max_name;
    int max_fun = -1;

    for (int i = 0; i < n; i++) {
        string name;
        int fun_value;
        cin >> name >> fun_value;
        
        // Update max_name if a higher fun_value is found
        if (fun_value > max_fun) {
            max_fun = fun_value;
            max_name = name;
        }
    }

    cout << max_name << endl;
    return 0;
}
