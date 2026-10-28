#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> mp;

    string s = "I love my country very much";

    int arr[] = {100, 90, 59, 70, 70, 80};

    stringstream ss(s);
    string s1;
    int i = 0;

    while (ss >> s1) {
        mp[s1] = arr[i];
        i++;
    }

    vector<pair<string, int>> valueVector(mp.begin(), mp.end());

    sort(valueVector.begin(), valueVector.end(), [](const auto& a, const auto& b){
        return a.second < b.second;
    });

    for (const auto& pair : valueVector) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}