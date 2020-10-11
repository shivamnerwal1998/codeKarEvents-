#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include<iostream>
using namespace std ;

int findPalindrome(int num)
{
    int dummy ;
    int rnum = 0 ;
    dummy = num ;
    while(1)
    {
        rnum = ((rnum * 10) + (dummy % 10)) ;
        dummy = (dummy/10) ;
        if(dummy == 0 )
            break ;

    }
    if( rnum == num )
        return rnum ;
    else
        return findPalindrome(num-1);

}
int main()
{
    int num ;
    cin >> num ;
    cout << findPalindrome(num);
}
