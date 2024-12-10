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
        int valid = 0;

        while (iss >> curr){
            if (dir == -1 && last == -1){
                last = curr;
                continue;
            }

            if (dir == -1){ 
                dir = curr > last ? 1 : 0;
            }

            if (dir == 1){
                if (curr < last || curr == last){
                    valid = 0;
                    break;
                }

                if (curr - last > 3){
                    valid = 0;
                    break;
                }

                valid = 1;
            }

            if (dir == 0){
                if (curr > last || curr == last){
                    valid = 0;
                    break;
                }

                if (last - curr > 3){
                    valid = 0;
                    break;
                }

                valid = 1;
            }

            last = curr;
        }

        output += valid;
    }

    cout << output << endl;
}