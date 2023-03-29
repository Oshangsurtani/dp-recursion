#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,w,d,h,a,b,f,g,c;
    cin>>t;
    while(t--){
        int ans=0;
        cin>>w>>d>>h;
        cin>>a>>b>>f>>g;
        c=(f+a)>(b+g)?f+a:b+g;
        
        if(((((w-f)+(w-a))>((d-g)+(d-b)))&&((f+a)>(b+g)))||((((w-f)+(w-a))>((d-g)+(d-b)))&&((w-f)+(w-a))<c)){
            
         if(((d-b)<b)&&((d-g)<g)){
             ans=h+abs(f-a)+(d-g+d-b);
         }
         else if(d-b<b){
             ans=h+abs(f-a)+(d-b+g);
         }
         else if(d-g<g){
             ans=h+abs(f-a)+(d-g+b);
         }
         
         else {
        ans=h+(g+b)+abs(f-a);
             
         }
        }
        else{
            if((w-f<f)&&(w-a<a)){
                ans=h+(w-a+w-f)+abs(g-b);
            }
            else if(w-f<f){
                  ans=h+(a+w-f)+abs(g-b);
            }
                  else if(w-a<a){
                     ans=h+(w-a+f)+abs(g-b);
                 }
                 else{
                 ans=h+(f+a)+abs(g-b);
                     
                 }
                
            }
        cout<<ans<<endl;
    }
}