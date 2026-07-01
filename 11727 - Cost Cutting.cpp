#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    for( int i = 1; i <= t; i++ ){
        int salaries[3];
        for( int i = 0; i < 3; i++ ){
            cin >> salaries[i];
        }    

        sort(begin(salaries), end(salaries));

        cout << "Case " << i << ": " << salaries[1] << endl;
    }
}