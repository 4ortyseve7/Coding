#include <iostream>
using namespace std;
int main(){
    int a,b,min,gcd=1;
    cout << "Enter two numbers to find GCD : ";
    cin >> a >> b;
    
    (a>b)?(min=b):(min=a);
    for(int i=2; i<=min; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    cout << "\nThe GCD of "<<a<<" and "<<b<<" is "<<gcd;
    return(0);
}
