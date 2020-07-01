#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string board_size;
    getline(cin, board_size);

    vector<int> board_size_num;

    istringstream iss(board_size);

    while(getline(iss, board_size, ' '))
        board_size_num.push_back(stoi(board_size));

    int fit_peices;
    int board_area = board_size_num.at(0) * board_size_num.at(1);

    if(board_area == 0){
            fit_peices = 0;
    }else if(board_area % 2 == 0){
        fit_peices = board_area / 2;
    }else{
        board_area--;
        fit_peices = board_area / 2;
    }

    cout << fit_peices << endl;
}
