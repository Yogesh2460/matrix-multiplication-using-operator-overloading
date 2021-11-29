#include <iostream>
#include <iomanip>
using namespace std;

class matrix
{
private:
    int m[2][2];

public:
    void input()
    {
        cout<<"Enter the elements of 2x2 matrix"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>m[i][j];
            }
        }
    }
    matrix operator*(matrix &ob)
    {
        matrix temp;
         for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                temp,m[i][j]=0;
                for(int k=0;k<2;k++)
                {
                    temp.m[i][j]+=m[i][k]*ob.m[k][j];
                }
            }
        }
    return temp;
    }
    void display()
    {
        cout<<"matrix after multiplication is :"<<endl;
         for(int i=0;i<2;i++)
        {
            for(int k=0;k<2;k++)
            {
                cout<<setw(5)<<m[i][k];
            }
            cout<<endl;
        }
    }
};

int main()
{
    matrix ob1,ob2;
    matrix ob3;

    ob1.input();
    ob2.input();

    ob3=ob1*ob2;

    ob3.display();

    return 0;
}

