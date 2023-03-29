#include <iostream>
using namespace std;
int gcd(int o,int m){
    if(m==0){
    return o;}
    return gcd(m,(o%m));
    
}
 int main() {
    int t, no_of_ele, q,l,r,gc;
    cin>>t;
    while(t--){
        cin>>no_of_ele>>q;
        int a[no_of_ele];
        for(int i =1;i<=no_of_ele;++i){
            cin>>a[i];
        }
        for(int k=0;k<q;k++){
           int gcd_so_far=0 ;
        cin>>l>>r;
        for(int i=1;i<=no_of_ele;++i){
           
               continue;
           }
           gcd_so_far=gcd(a[i],gcd_so_far);
        }
        cout<<gcd_so_far<<endl;
        
    }
    }
	// your code goes here
	return 0;
}
