#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    protected:
    int w,h;
    public:
    void display(){
        cout<<w<<" "<<h;
    }
};
class RectangleArea:public Rectangle{
    private:
    int result;
    public:
    void read_input(){
        cin>>w>>h;
    }
    void display(){
        result = w*h;
        cout<<endl<<result;
    }
};
