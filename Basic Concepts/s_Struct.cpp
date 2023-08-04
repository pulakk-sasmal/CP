#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n' 
#define int long long
using namespace std;

struct Rectangle{
    int length;
    int breadth; 
};

int area(struct Rectangle r1){
    return r1.length*r1.breadth;
}

int perimeter(struct Rectangle r1){
    return 2*(r1.breadth*r1.length);
}

void structExample(){
    
    struct Rectangle r1={2,2};
    struct Rectangle r2={5,5};

    cout<<"Area of r1 and r2 are: "<<area(r1)<<" "<<area(r2)<<endl;

    cout<<"Perimeter of r1 and r2 are: "<<perimeter(r1)<<" "<<perimeter(r2)<<endl;

}

class _Rectangle{

    private:
    int length;
    int breadth;

    public:

    //constructor function
    //non-parameterised constructor
    _Rectangle(){
        length=1;
        breadth=1;
    }
    //parameterised constructor
    _Rectangle(int l,int b){
        length=l;
        breadth=b;
    }

    //accessor function
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    } 

    //mutator function
    void setLength(int l){
        if(l>0) length=l;
    }
    void setBreadth(int b){
        if(b>0) breadth=b;
    }

    //facilitaitor function
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }

    //destructor function
    ~_Rectangle(){ }

};

void classExample(){
    
    _Rectangle r1;
    
    int l,b;
    cout<<"Input length,breadth: ";
    cin>>l>>b;

    r1.setLength(l);
    r1.setBreadth(b);

    cout<<r1.getLength()<<" "<<r1.getBreadth()<<endl;
    
    cout<<"Area:"<<r1.area()<<endl;
    cout<<"Perimeter:"<<r1.perimeter()<<endl;

}

signed main(){
    // structExample();
    classExample();
}