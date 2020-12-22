#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void lagadoInjection(int arr[] , int num  , int limit)
{
    int vaccine =  0 ;
    for( int i = 0 ; i <= (num-1) ; i++  )
    {
        if( arr[i] >= 80 || arr[i] <= 9 )
            vaccine++ ;
    }
    if( vaccine == 0  )
    {
        cout << vaccine << endl ;
        return ;
    }
    else if( limit >= vaccine  )
    {
        cout << "1"<< endl ;
        return ;

    }

   int day = (vaccine / limit) ;
    int margin = 0 ;
    if( (vaccine % limit) != 0  )
    {
        margin = 1 ;
    }
    cout << (day +  margin) << endl ;

}

int main() {

    int T ;
    cin >> T ;
    for( int i = 0 ; i <= T-1 ; i++  )
    {
        int num  ;
        cin >> num ;
        int limit ;
        cin >> limit ;
        int arr[num] ;
        for( int j = 0 ; j <= num-1 ; j++ )
            cin >> arr[j] ;
        lagadoInjection(arr , num , limit) ;


    }
}
