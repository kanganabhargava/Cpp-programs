#include<bits/stdc++.h>

using namespace std;
// Create a class for books 
class books
{

public:char tit1e[30];

public:float price ;

public:

void getdata ();

void showdata ();

} ;

void books :: getdata()
{
    cout<<"Title:”;

    cin>>title;

    cout<<"Price:”;

    cin>>price;
}

void books :: showdata ()
{
    cout<<"Title:"<<title<< "\n";
    cout<<"Price:"<<price<< "\n”;
    const int size=3 ;
}
int main ()
{
books book[size] ;
for(int i=0;i<size;i++)
{
    cout<<"Enter details of book "<<(i+1)<<"\n";
    book[i].getdata();
}
for(int i=0;i<size;i++)
{
    cout<<"\nBook "<<(i+l)<<"\n";
    book[i].showdata() ;
}
return 0;
}
