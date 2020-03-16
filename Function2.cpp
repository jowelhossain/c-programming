#include<iostream>
using namespace std;
hello()
{

    cout<<"Hello,friend!\n";

}
void show()
{

hello();
}

int main()
{ int i;
for(i=0;i<100;i++)
    show();

}
