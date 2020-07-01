#include <iostream>
#include <vector>
using namespace std;

int main(){
    string equation;
    getline(cin, equation);

    vector<int> nums;

    for(int i = 0; i < equation.size(); i += 2){
        nums.push_back(equation.at(i) - '0');
    }

    bool ordered = false;
    bool changed = false;
    int index = 0;

    while(!ordered){
        if(index < nums.size()-1){
            if(nums.at(index) > nums.at(index+1)){
                int temp_one = nums.at(index);
                int temp_two = nums.at(index+1);

                nums.at(index) = temp_two;
                nums.at(index+1) = temp_one;

                changed = true;
            }
            index++;
        }else{
            if(!changed)
                ordered = true;
            index = 0;
            changed = false;
        }
    }

    for(int i = 0; i < nums.size(); i++){
        cout << nums.at(i);
        if(i+1 != nums.size()){
            cout << "+";
        }
    }

    return 0;
}
