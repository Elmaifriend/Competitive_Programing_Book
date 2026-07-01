#include<iostream>
using namespace std;

int main(){
    while( true ){

        int n = 0; //Participants
        int b = 0; //Budget
        int h = 0; //Number of Hotels
        int w = 0; //Number of weeks

        cin >> n >> b >> h >> w;

        if( cin.eof() )
            break;

        int minPrice = b;
        bool found = false;

        for( int i = 0; i < h; i++ ){
            int hotelPrice = 0;
            cin >> hotelPrice;

            for(int j = 0; j < w; j++ ){
                int availableBeds = 0;
                cin >>availableBeds;

                if( availableBeds >= n ){

                    int weekEndPrice = hotelPrice * n;

                    if( weekEndPrice <= minPrice ){
                        minPrice = weekEndPrice;
                        found = true;
                    }
                }
            }
        } 

        if( !found ){
            cout << "stay home" << endl;
            continue;
        } 

        cout << minPrice << endl;
    }
}