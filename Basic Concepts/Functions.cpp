#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n' 
#define int long long
using namespace std;

void swap_callByValue(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

void callByValue(){
    int a=5,b=6;
    swap_callByValue(a,b);
    cout<<a<<" "<<b<<endl;
}

void swap_callByAddress(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void callByAddress(){
    int a=5,b=6;
    swap_callByAddress(&a,&b);
    cout<<a<<" "<<b<<endl;
}

void swap_callByReference(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

void callByReference(){
    int a=5,b=6; 
    swap_callByReference(a,b);
    cout<<a<<" "<<b<<endl;
}

int* arrayFunction(int arr[]){
    for(int i=0;i<5;i++){
        arr[i]+=1;
    }
    return arr;
}

void arrayAsParameter(){

    int arrInStack[5]={1,2,3,4,5};
    int* arrInHeap = new int[5];

    for(int i=0;i<5;i++){
        arrInHeap[i]=i+1;
    }

    arrayFunction(arrInStack);   //Call by address
    arrayFunction(arrInHeap);    //Call by address

    for(int i=0;i<5;i++){
        cout<<arrInStack[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<arrInHeap[i]<<" ";
    }
    cout<<endl;

}

struct Rectangle{
    int length;
    int breadth;
};  

//Below function's return type is struct rectangle
struct Rectangle structureFunction_value(struct Rectangle r1){
    cout<<r1.length<<" "<<r1.breadth<<endl;
    return r1;
}

//Below function's return type is a pointer pointing to struct rectangle
struct Rectangle* structureFunction_address(struct Rectangle* r1){   
    cout<<r1->length<<" "<<r1->breadth<<endl;
    return r1;
}

//Below function's return type is struct rectangle
struct Rectangle structureFunction_reference(struct Rectangle &r1){
    cout<<r1.length<<" "<<r1.breadth<<endl;
    return r1;
}

void structureAsParameter(){

    struct Rectangle r1InStack={10,20};      //call by value,address,refernce

    structureFunction_value(r1InStack);   //Call By Value
    structureFunction_address(&r1InStack);   //Call By Address
    structureFunction_reference(r1InStack);  //Call by reference

    struct Rectangle* r1InHeap = new struct Rectangle;

    r1InHeap->length=5;
    r1InHeap->breadth=10;

    structureFunction_address(r1InHeap);   //Call by address

}

void function1(){
    cout<<"No formal parameter"<<endl;
}

void function1(int a){
    cout<<"Int as formal parameter"<<endl;
}

void function1(double a){
    cout<<"Double as formal parameter"<<endl;
}

void function1(int a,int b){
    cout<<"2 formal parameter as input"<<endl;
}

void functionOverloading(){
    function1();

    int a=2;
    function1(a);

    double b=2.353647;
    function1(b);

    int c=1,d=1;
    function1(c,d);

}

signed main(){
    callByValue();
    callByAddress();
    callByReference();
    arrayAsParameter();
    structureAsParameter();
    functionOverloading();
}