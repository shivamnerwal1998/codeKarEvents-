#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int isConsecutive(int *arr,int num)
{
    int i ;
    int diff;
    for(i=0 ; i<= (num-2) ; i++ )
    {
        diff = (arr[i+1] - arr[i]) ;
        if(diff > 1)    // if diffrence is greater than 1 the numbers should be non consecutive
            return 0 ;

    }
    return 1 ;
}
int main()
{
    int num ;
    cin >> num ;
    int i ;
    int arr[num] ;
    for(i=0; i<=(num-1); i++)
        cin >> arr[i] ;
    sort(arr , arr+num );   // sorting the array
    cout << isConsecutive(arr,num) ;

}
