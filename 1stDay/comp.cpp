#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define pb push_back
#define mp make_pair

int main(){
    string line;
    vi first;
    vi second;

    ifstream file("input.txt");

    while (getline (file, line)){
        istringstream iss(line);
        int a, b;

        iss >> a >> b;

        first.pb(a);
        second.pb(b);
    }

    file.close();

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    int output = 0;

    for (long unsigned int i = 0; i < first.size(); i++){
        output += abs(first[i] - second[i]);
    }

    cout << output << endl;
}