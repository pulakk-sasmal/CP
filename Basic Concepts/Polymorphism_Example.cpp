#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n' 
#define int long long
using namespace std;

//Polymorphism - Run-time & compile-time
//Given example is of compile-time polymorphism
//Function Overloading -> compile-time polymorphism
//Function Over-riding -> run-time polymorphism

void fun(){
    cout<<"0 parameter"<<endl;
}

void fun(int a){
    cout<<"1 parameter"<<endl;
}

void fun(int a,int b){
    cout<<"2 parameter"<<endl;
}

void polymorphism(){
    fun();
    fun(1);
    fun(2);
}

signed main(){
    polymorphism();
}