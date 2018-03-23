#include<iostream>
using namespace std;
class Change
{
public:
void swap (int a, int b)
{
int c;
cout<<"\nOriginal value "<<a<<" "<<b<<endl;
c=a;
a=b;
b=c;
cout<<"\nSwapped value "<<a<<" "<<b<<endl;
}
public:
void swap (double a, double b)
{
double c;
cout<<"\nOriginal value "<<a<<" "<<b<<endl;
c=a;
a=b;
b=c;
cout<<"\nSwapped value "<<a<<" "<<b<<endl;
}
};
int main()
{
Change ob;
ob.swap(3,4);
ob.swap(5.0,6.0);
return 0;
}
