#include <iostream>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  int savings;
  cin>>savings;
  
  if(savings>=5000){
    if(savings>10000) {
      cout<<"Go to Cox Bazar\n";

    } else {
      cout<<"Go to Sitakundo\n";
    } 

  }else if(savings>2000){
    cout<<"Go to Dhaka\n";
    
    }else{
      cout<<"Stay at Home and Sleep\n";
    }

  return 0;
}