#include <iostream>
using namespace std;
int main(){
    int n;
    
    cout << "Enter the number (>2) of Fibonacci sequence digits to print : ";
    cin >> n;
    
    cout << "0 1 ";
    for(int i = 0, j = 1, temp = 0, loop = 0; loop < n-2; loop++){
        temp = i + j;
        i = j;
        j = temp;
        cout << temp << " ";
    }
  
  return(0);
}

