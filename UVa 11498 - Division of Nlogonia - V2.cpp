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

            if( x == m || y == n )
                cout << "divisa" << endl;
            
            else if( x < m && y > n )
                cout << "NO" << endl;

            else if( x > m && y > n )
                cout << "NE" <<endl;

            else if( x > m && y < n )
                cout << "SE" << endl;
             
            else if( x < m && y < n )
                cout << "SO" << endl;
        } 

        cin >> k;
    }
}