#include <bits/stdc++.h>
using namespace std;

#define ASCII_CONVERSION 32
#define LAST_UPPER_ASCII 97

int main(){
        string one;
        string two;

        getline(cin, one);
        getline(cin, two);

        for(int i = 0; i < one.size(); i++){
            if(one.at(i) < LAST_UPPER_ASCII)
                one.at(i) += ASCII_CONVERSION;
            if(two.at(i) < LAST_UPPER_ASCII)
                two.at(i) += ASCII_CONVERSION;

            if(one.at(i) != two.at(i)){
                if(one.at(i) <  two.at(i)){
                    cout << "-1" << endl;
                    break;
                }else{
                    cout << "1" << endl;
                    break;
                }
            }else if(one == two){
                cout << "0" << endl;
                break;
            }
        }
        return 0;
}
