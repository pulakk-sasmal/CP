#include <bits/stdc++.h>
using namespace std;

//call by refernce
void referenceConcept(){

    int a=10;
    int &b=a; //Now b and a is same. Change is one reflects on the othr
    
    cout<<"Value of a:"<<a<<endl;
    b++;
    cout<<"Value of a after b++:"<<a<<endl;
    cout<<"Value of b:"<<b<<endl;
    a++;
    cout<<"Value of b after a++:"<<b<<endl;

}

struct Student{
    int rollNo;
    int regdNo;
};

void structInHeap(){

    //Student structure in heap
    struct Student* s1 = new Student;

    //Assigning value to student
    (*s1).rollNo=1;
    s1->regdNo=3114;

    //Printing Value of stuct student
    cout<<"Roll Number:"<<s1->rollNo<<endl;
    cout<<"Regd Number:"<<s1->regdNo<<endl;
}

void structInStack(){ //Structure in c

    //Create array of pointers pointing at struct student
    struct Student* arr[5];

    //Create 5 different student struct
    struct Student s1={1,21130}; 
    struct Student s2={2,21131}; 
    struct Student s3={3,21132}; 
    struct Student s4={4,21133}; 
    struct Student s5={5,21134}; 

    //Create 5 differnt pointers for all 5 student student 
    struct Student* p1=&s1;
    struct Student* p2=&s2;
    struct Student* p3=&s3;
    struct Student* p4=&s4;
    struct Student* p5=&s5;

    //Store pointers that are pointing to struct student in array
    arr[0]=p1;
    arr[1]=p2;
    arr[2]=p3;
    arr[3]=p4;
    arr[4]=p5;

    //Access to roll number & regd number of student 2

    //In Detail
    struct Student* ptr2=arr[1];    //removed the role of arr
    struct Student student_2=*ptr2;   //removed the role of pointer
    cout<<"Roll Number:"<<student_2.rollNo<<endl;
    cout<<"Regd Number:"<<student_2.regdNo<<endl;

    //In one line
    cout<<"Roll Number:"<<(*arr[1]).rollNo<<endl;
    cout<<"Regd Number:"<<(*arr[1]).regdNo<<endl;

    //Improvement to above code
    cout<<"Roll Number:"<<arr[1]->rollNo<<endl;
    cout<<"Regd Number:"<<arr[1]->regdNo<<endl;

}

signed main(){
    structInStack();
    structInHeap();
    referenceConcept();
}