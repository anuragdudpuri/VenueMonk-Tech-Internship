#include <iostream>
using namespace std;

int main()
{
    const int sum = 1000;
    int num1,num2,num3;
    int a;
    for (a = 1; a <= sum/3; a++)
    {
        int b;
        for (b = a + 1; b <= sum/2; b++)
        {
            int c = sum - a - b;
            if ( a*a + b*b == c*c )
               cout<<"vale of a,b and c:"<<a<<" "<<b<<" "<<c<<endl;
                num1=a;
                num2=b;
                num3=c;
        }
    }
    cout<<"value of a*b*c:"<<num1*num2*num3;
    return 0;
}