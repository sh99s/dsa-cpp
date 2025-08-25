#include <iostream>
using namespace std;

int main () {
    // find charactier lowercase or uppercase

    //  char a;
    //  cout<<"Enter the character: "<<endl;
    //  cin>>a;
    //  if (a>='a' && a<='z' ) {
    //     cout<<a<<" is small character"<<endl;
    // }else{
    //      cout<<a<<" is capital character"<<endl;

    //  }


    // print 1 to 5
    // double a = 568721.0;
    
    // // while (a<=5) {
    // //     cout<<a<<endl;
    // //     a++;
    // // }
    // double sum = 1;
    // for (double i = 1; i<a; i++){
    //     sum*=i;
    // }
    // cout<<sum<<endl;

    int a = 23427;  
    
    for (int i = 2; i*i<=a; i++){
        if (a % i == 0){
            cout<<"non-prime"<<endl;
            break;
        }else{
            cout<<"prime"<<endl;
            break;
        }
    }


    return 0;
}