#include <iostream>
using namespace std;

int main(){
    int num_entries;
    string num_entry;

    int accepted_entries = 0;
    int current_acceptance = 0;

    cin >> num_entries;
    cin.ignore(1, '\n');

    for(int i = 1; i <= num_entries; ++i){
        getline(cin, num_entry);
        for(int x = 0; x < 6; x++){
            if(num_entry[x] == '1')
                current_acceptance++;
        }
        if(current_acceptance >= 2)
            accepted_entries++;
        current_acceptance = 0;
    }

    cout << accepted_entries;

    return 0;
}
