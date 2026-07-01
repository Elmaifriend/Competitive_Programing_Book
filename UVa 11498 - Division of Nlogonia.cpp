#include <iostream>
using namespace std;

//K = number of queries
//M,N = Division point
//X,Y = Coordinates of a residence

int main(){
    int k = 0;
    cin >> k;

    while( k != 0 ){

        int m = 0;
        int n = 0;


        cin >> m >> n;

        for( int i = k; i > 0; i-- ){
            int x = 0;
            int y = 0;

            cin >> x >> y;

            x = x - m;
            y = y - n;

            if( x == 0 || y == 0 )
                cout << "divisa" << endl;
            
            if( x < 0 && y > 0 )
                cout << "NO" << endl;

            if( x > 0 && y > 0 )
                cout << "NE" <<endl;

            if( x > 0 && y < 0 )
                cout << "SE" << endl;
             
            if( x < 0 && y < 0 )
                cout << "SO" << endl;
        } 

        cin >> k;
    }
}