#include<iostream>
#include <ctime> 
using namespace std;

int  fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x)
{
    if (x == 1 || x == 0 ) return x;
    else if (x>1)
    {
        return fibonacci(x-1)+fibonacci(x-2);
    }
    else return 0;
}

/*F_0 = 0
F_1 = 1
F_2 = F_1+F_0 =1
F_3 = F_2+F_1 = 1+1 =2
F_4 = F_3+F_2 = 2+1 =3 
... */