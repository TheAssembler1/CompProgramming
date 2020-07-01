#include <iostream>
#include <vector>
using namespace std;

#define MID 3

int main(){

    int row;
    int column;

    vector<string> matrix;

    for(int i = 1; i <= 5; i++){
        string temp;
        getline(cin, temp);

        matrix.push_back(temp);
    }

    for(row = 1; row <= 5; row++){
        for(column = 1; column <= 5; column++){
            string temp = matrix.at(row-1);
            if(temp.at((column-1)*2) == '1')
                goto EXIT;
        }
    }

    cout << row << column << endl;

    EXIT:
        int moves = 0;
        if(row - MID > 0)
            moves += row - MID;
        else if(row - MID < MID)
            moves += (row-MID) * -1;

        if(column - MID > 0)
            moves += column - MID;
        else if(column - MID < MID)
            moves += (column-MID) * -1;

        cout <<  moves << endl;

    return 0;
}
