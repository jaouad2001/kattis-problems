 #include <iostream>
using namespace std ;

int main(){
    int n , r  , p  , j=0;
    cin >> r;
    while(r--!=0){ 
       j=0 ;
      cin>> n ;
      
      for ( int i = 0  ; i < n ; i++) { 
        cin>> p ;
        if(i == n - 1 )
          j += p;
        else
          j+=p-1 ;

  
      }
      cout<<j<<endl ;
    }
    
    return 0 ;
}  
 