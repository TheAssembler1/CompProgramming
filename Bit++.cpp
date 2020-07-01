#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    vector<int> num_operations_num;
    string num_operations;
    getline(cin, num_operations);

    istringstream iss(num_operations);

    while(getline(iss, num_operations, ' '))
        num_operations_num.push_back(stoi(num_operations));

    int iterations = num_operations_num.at(0);
    int x_value = 0;
    string x_operation;

    for(int i = 1; i <= iterations; i++){
        getline(cin, x_operation);

        if(x_operation == "++X" || x_operation == "X++")
            x_value++;
        else if(x_operation == "--X" || x_operation == "X--")
            x_value--;
    }

    cout << x_value << endl;

    return 0;
}
