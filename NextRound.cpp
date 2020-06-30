#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

//COME BACK AND FINISH LATER

int main(){
    string part_place;
    string scores;

    vector <int> part_place_num;
    vector<int> scores_num;

    getline(cin, part_place);
    getline(cin, scores);

    istringstream tss(part_place);
    istringstream iss(scores);

    while(getline(tss, part_place, ' '))
        part_place_num.push_back(stoi(part_place));

    while(getline(iss, scores, ' '))
        scores_num.push_back(stoi(scores));

    int lowest_score = scores_num.at(part_place_num.at(1)-1);

    int winners = 0;
    while(scores_num.at(winners) >= lowest_score){
        if(scores_num.at(winners) == 0)
            break;

        winners++;

        if(winners >= scores_num.size()){
            break;
        }
    }

    cout << winners << endl;

    return 0;
}
