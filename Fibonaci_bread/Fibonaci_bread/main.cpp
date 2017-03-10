#include <iostream>
using namespace std;

int Fibonacci (int n){
 
    if (n==0||n==1)
        return n;
    else {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
        
 }

int main(int argc, const char * argv[]) {

    int n;
    
    cout<< "Give n= ";
    cin>>n;
    
    cout<<"F= "<<Fibonacci(n)<<endl;
    
    
    
    
    return 0;
}
