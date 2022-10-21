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

// Program to check whether a number is positive, negative or zero
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << "Positive" << endl;
    }
    else if (n < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
    return 0;
}
*/

#include<iostream>
using namespace std;

int main(){
  
      int n;
      cin>>n;
  
      if(n%2==0){
        cout<<"Even"<<endl;
      }
      else{
        cout<<"Odd"<<endl;
      }
      return 0;
}

/*
#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
      if(a>c){
        cout<<a<<endl;
    }
    else{
        cout<<c<<endl;
    }
  }
  else{
    if(b>c){
      cout<<b<<endl;
    }
    else{
      cout<<c<<endl;
    }
  }
    return 0;
}
*/