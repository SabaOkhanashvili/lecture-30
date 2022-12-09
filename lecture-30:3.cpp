#include <iostream>
using namespace std;
template <typename T>

void max_num(T a,T b){
    if(a > b){
        cout <<a;
    }else{
        cout<<b;
    }
}
int main()
{
    int a;
    cout<<"მიუთითეთ პირველი რიცხვი: ";
    cin>>a;
    cout<<"მიუთითეთ მეორე რიცხვი: ";
    int b;
    cin>>b;
    
    max_num(a,b);

    return 0;
}