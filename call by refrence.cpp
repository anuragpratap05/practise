#include<iostream>
using namespace std;

void (incremnt(int *p))
{
    *p+=1;
    //cout<<a<<endl;
    //return a;
}

int main()
{
int a=10;
incremnt(&a);
cout<<a<<endl;
}
