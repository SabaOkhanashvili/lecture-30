#include <iostream>
#include <cmath>
using namespace std;


template<typename T>
void square(T a){
    T b = a*a;
    
    cout<<"კვადრატული რიცხვი: "<<b<<endl;
    
    
    
}

int main()
{   
    int a;
    cout<<"შეიყვანეთ რიცხვი: ";
    cin>>a;
    
    double b;
    cout<<"შეიყვანეთ რიცხვი: ";
    cin>>b;
    
    square(a);
    square(b);
    return 0;
}