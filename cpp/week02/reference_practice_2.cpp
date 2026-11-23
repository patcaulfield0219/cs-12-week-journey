#include <iostream>
#include <vector> 

using namespace std;

int findMax(const vector<int>& scores){
    int maxScr = scores[0];
    for(int i=1; i<scores.size(); i++){
        if(scores[i] >= maxScr){
            maxScr = scores[i];
        }
    }
    return maxScr;
}

double calculateAverage(const vector<int>& scores){
    double sum = 0, avg = 0;
    for(int i=0; i<scores.size(); i++){
        sum = sum + scores[i];
    }
    avg = sum / scores.size();
    return avg;
}

void addBonus(vector<int>& scores, int bonus){
    for(int i=0; i<scores.size(); i++){
        scores[i] = scores[i] + bonus;
    }
    return;
}

int main() {
    int n = 0;
    while(cin >> n && n > 0){
        vector<int>scores(n);
        for(int i=0; i<n; i++){
            cin >> scores[i];
        }
        cout << "Maximum: " << findMax(scores) << endl;
        cout << "Average: " << calculateAverage(scores) << endl;
        int bonus;
        cout << "Bonus Point: ";
        cin >> bonus;
        addBonus(scores, bonus);
        for(int i=0; i<n; i++){
            cout << scores[i] << " ";
        }
        cout << endl;
    }
    return 0;
}