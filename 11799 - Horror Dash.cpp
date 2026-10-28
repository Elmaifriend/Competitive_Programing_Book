#include<iostream>
using namespace std;

int main(){
    int t = 0;
    cin >> t;

    for( int i = 1; i <= t; i++ ){
        unsigned int n = 0;
        cin >> n;

        unsigned int maxSpeed = 0;
        for( int j = 0; j < n; j++ ){
            unsigned int speed = 0;
            cin >> speed;

            if( speed > maxSpeed ){
                maxSpeed = speed;
            }
        }

        cout << "Case " << i << ": " << maxSpeed << endl;
    }
}