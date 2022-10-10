#include<iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int r){radius=r;}
    int getRadius(){return radius;}
    void setRadius(int r){radius=r;}
    void show(){cout<<"반지름이 "<<radius<<"인 원"<<endl;}
};

void increaseBy(Circle &a,Circle &b){
    int r=a.getRadius()+b.getRadius();
    a.setRadius(r);
}

int main(){
    Circle x(10),y(5);
    x.show();
    y.show();
    increaseBy(x,y);
    cout<<endl<<"함수 실행 후"<<endl<<endl;
    x.show();
    y.show();
    return 0;
}