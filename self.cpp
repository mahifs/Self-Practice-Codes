#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
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


    // // 1. Copy key-value pairs from map to a vector
    // std::vector<std::pair<std::string, int>> valueVector(originalMap.begin(), originalMap.end());
    vector<pair<string, int>> valueVector(mp.begin(), mp.end());

    // // 2. Sort the vector using a lambda function comparing the values (pair.second)
    // std::sort(valueVector.begin(), valueVector.end(), [](const auto& a, const auto& b) {
    //     return a.second < b.second; // Ascending order
    // });
    sort(valueVector.begin(), valueVector.end(), [](const auto& a, const auto& b){
        return a.second < b.second;
    });

    // // 3. Print the sorted elements
    // std::cout << "Sorted by value (Ascending):\n";
    // for (const auto& pair : valueVector) {
    //     std::cout << pair.first << ": " << pair.second << "\n";
    // }
    for (const auto& pair : valueVector) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}