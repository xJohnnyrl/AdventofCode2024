#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define pb push_back
#define mp make_pair

int main(){
    string line;
    int output = 0;

    ifstream file("input.txt");

    while (getline (file, line)){
        istringstream iss(line);
        int dir = -1;
        int curr;
        int last = -1;
        int err = 0;

        while (iss >> curr){
            cout << curr << endl;
            if (dir == -1 && last == -1){
                last = curr;
                continue;
            }

            if (dir == -1){ 
                dir = curr > last ? 1 : 0;
            }

            if (dir == 1){
                if (curr < last || curr == last){
                    err += 1;
                    if (err > 1) break;
                }

                if (curr - last > 3){
                    err += 1;
                    if (err > 1) break;
                }

            }

            if (dir == 0){
                if (curr > last || curr == last){
                    err += 1;
                    if (err > 1) break;
                }

                if (last - curr > 3){
                    err += 1;
                    if (err > 1) break;
                }

            }

            last = curr;
        }

        if (err > 1){
            output += 0;
        } else {
            output += 1;
        }
    }

    cout << output << endl;
}