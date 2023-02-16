#include <iostream>
using namespace std;
int CountOfCalls = 0;
int f(int a){
    if(a == 0)//first element is zero
        return 0;
    if(a == 1)//second element is one
        return 1;
    CountOfCalls++;
    return f(a-1) + f(a-2);
}

int main(){
    cout<<f(40)<<endl;
    cout<<"Count of calls : "<<CountOfCalls<<endl;//165,000,000 !!!
    return 0;
}
