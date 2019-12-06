#include<iostream>
using namespace std;
int main()
{
    int a,b,i,z;

    cout<<"enter two numbers "<<endl;
    cin>>a;cin>>b;

    while(z==0)
    {
        cout<<"enter 1 to add,2 to sub, 3 to multiply and 4 to divide and 5 to exit"<<endl;
        cin>>i;
        switch(i)
        {
            case 1: cout<<"sum is "<<endl;
                    cout<<a+b;
                    break;

            case 2: cout<<"sub is "<<endl;
                    cout<<a-b;
                    break;

            case 3: cout<<"mul is "<<endl;
                    cout<<a*b;
                    break;

            case 4: cout<<"div is"<<endl;
                    cout<<a/b;
                    break;

            case 5: z=1;
            cout<<"exiting";
        }
    }
}