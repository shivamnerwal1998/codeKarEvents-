import java.io.*;
import java.util.*;


public class Solution {
    
static int findDuplicate(int []arr )
{
    int flag = 1  , key , dubk = -10000  ;
    
    Arrays.sort(arr) ;
    for( int i = 0 ; i < arr.length-1 ; i++ )
    {
        
        key = arr[i] ; 
        if( key == dubk )
            continue ; 
        else if( arr[i+1] == key )
        {
            dubk = key ;
        
            flag = 0 ;
            System.out.printf("%d ",key) ;
            
        }
    }
    return flag ; 

    
}

    public static void main(String[] args) {
    Scanner scan = new Scanner( System.in ) ; 
    int num ;
    num = scan.nextInt() ; 
    int []arr = new int[num] ;
    for( int i  = 0 ; i< arr.length ; i++ )
        arr[i] = scan.nextInt() ; 
    int flag = findDuplicate(arr) ;
        if( flag == 1  )
        {
            System.out.println(-flag) ; 
            
        }
        
    }
}