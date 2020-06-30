#include <iostream>
#include <string>
using namespace std;

int main(){

    int num_entries;
    string current_word;
    string ending_word;

    cin >> num_entries;
    cin.ignore(1, '\n');

    for(int i = 1; i <= num_entries; i++){
        getline(cin, current_word);

        if(current_word.length() > 10){
            char word_start = current_word.at(0);
            string word_middle = to_string(current_word.length()-2);
            char word_end = current_word.at(current_word.length()-1);
            ending_word.append(word_start + word_middle + word_end + '\n');
        }else{
            ending_word.append(current_word + '\n');
        }
    }

    cout << ending_word;

    return 0;
}
