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

int findMin(const vector<int>& scores){
    int minScr = scores[0];
    for(int i=1; i<scores.size(); i++){
        if(scores[i] <= minScr){
            minScr = scores[i];
        }
    }
    return minScr;
}

int countPass(const vector<int>& scores){
    int count = 0;
    for(int i=0; i<scores.size(); i++){
        if(scores[i] >= 60){
            count = count + 1;
        }
    }
    return count;
}

double calculateAverage(const vector<int>& scores){
    double sum = 0, avg = 0;
    for(int i=0; i<scores.size(); i++){
        sum = sum + scores[i];
    }
    avg = sum / scores.size();
    return avg;
}

int main() {
    int n = 0;
    while(cin >> n && n > 0){
        vector<int>scores(n);
        for(int i=0; i<n; i++){
            cin >> scores[i];
        }
        cout << "Maximum: " << findMax(scores) << endl;
        cout << "Minimum: " << findMin(scores) << endl;
        cout << "Average: " << calculateAverage(scores) << endl;
        cout << "Pass: " << countPass(scores) << endl;
        cout << "Fail: " << n - countPass(scores) << endl;
    }
    return 0;
}