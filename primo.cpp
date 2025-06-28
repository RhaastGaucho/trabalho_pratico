#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n<=1){
        cout<<"Não é primo"<<endl;
        return 0;
    }

    bool primo=true;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            primo=false;
            break;
        }
    }

    if(primo)
        cout<<"Primo"<<endl;
    else
        cout<<"Não é primo"<<endl;

    return 0;
}