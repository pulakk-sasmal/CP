#include <bits/stdc++.h>
using namespace std;

template<typename dataType>  //dataType=int,float,double,long,char,etc
class Rectangle{

    private:
    dataType length;
    dataType breadth;

    public:

    //constructor function
    //non-parameterised constructor
    Rectangle(){
        length=1;
        breadth=1;
    }
    //parameterised constructor
    Rectangle(dataType l,dataType b){
        length=l;
        breadth=b;
    }

    //accessor function
    dataType getLength(){
        return length;
    }
    dataType getBreadth(){
        return breadth;
    } 

    //mutator function
    void setLength(dataType l){
        if(l>0) length=l;
    }
    void setBreadth(dataType b){
        if(b>0) breadth=b;
    }

    //facilitaitor function
    dataType area(){
        return length*breadth;
    }
    dataType perimeter(){
        return 2*(length+breadth);
    }

    //destructor function
    ~Rectangle(){ }

};


void templateExample(){

    Rectangle<float> r1(4.1f,4.1f);
    Rectangle<int> r2(4,4);

    cout<<"Float data type's area: "<<r1.area()<<endl;
    cout<<"int data type's area: "<<r2.area()<<endl;
}

signed main(){
    templateExample();
}