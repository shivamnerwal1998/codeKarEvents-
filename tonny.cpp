#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int testCases ;
    cin >> testCases ; // total test sets
    int totalFriends ;
    int minSat ;
    int i;
    while( testCases > 0)
    {
        cin >> totalFriends ; // total friends
        testCases-- ;
        int sat[totalFriends] ;
        for( i = 0 ; i <= (totalFriends-1) ; i++ )
            cin >> sat[i] ;
        cin >> minSat;  // minimum friends to be satisified
        sort(sat,sat+totalFriends); // sorting the no of gifts for each satisifaction
        int minimumGifts = 0 ;
        for(i=0 ; i<= minSat-1 ; i++)
            minimumGifts += sat[i] ;
        cout<< minimumGifts <<endl ;
    }

    return 0;
}
