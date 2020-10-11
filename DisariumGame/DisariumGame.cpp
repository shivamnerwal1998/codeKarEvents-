#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int num ;
    cin >> num ;
    int i ;
    long int sum = 0 ;
    int flag = 0 ;
    int dummy = num ;
    int digits = 0 ;
    int rnum = 0;
    while(1){
        rnum = (rnum*10 + (dummy%10)) ;
        dummy = (dummy/10);
        digits++ ;
        if(dummy == 0 )
            break ;

    }
    int digit ;
    int num2 ;

    for(i=digits; i > 0  ; i-- )
    {
        flag++ ;

        digit = (rnum % 10) ;
        num2 = pow(digit,flag);
        sum += num2  ;
        rnum = (rnum/10) ;
    }
    num == sum ? cout << 1 : cout<< 0 ;

}
