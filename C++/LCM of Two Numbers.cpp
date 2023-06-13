#include <iostream>
using namespace std;
int main(){
    int a,b,max,lcm=1;
    cout << "Enter two numbers to find LCM : ";
    cin >> a >> b ;
    
    a>b?max=a:max=b;
    
    for(int i=max; 1 ; i++){
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }
    cout << "The LCM of "<<a << " and "<< b << " is "<< lcm ;
    
    return(0);
}
