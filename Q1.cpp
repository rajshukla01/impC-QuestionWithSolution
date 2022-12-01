// "private member "of any class can't be access. not even to the child class;

#include <iostream>
using namespace std;
class count
{
    public:
    int counter;


    count()
    {
        counter=0;

    }
    // count(int n)
    // {
    //     counter =n;
    // }
    void getcount()
    {
        cin>>counter;

    }
    void display()
    {
        cout<<counter<<endl;
    }

} ;
    class CountDown:public count //The "public " keyword  denote that the type of inheritane it is.
    {
       int b;
       public:
       CountDown(){
           b=0;
       } 

    };
    class CountTop:public CountDown{
        int c;
        public:
        CountTop(){
            c=0;
        }
    };

int main()
{
    CountDown c1;
    CountTop c2;
    c2.getcount();
    c2.display();
    c1.getcount();
    c1.display();


    return 0;
}