#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using std::cin;
using std::endl;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

int fact(int n)
{
    int p = 1;
    int i = 1;
    while(i <= n)
    {
        p *= i;
        i++;
    }
    return p;
}

int digit_num(int num)
{
    int i = 0;
    while(num != 0)
    {
        num = num/10;
        i++;
    }
    return i;
}

bool isSimpleNumber(int n)
{
    for(int i = 2; i <= n/i; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");


    for(int i = 0; i < 100; i++)
    {
        if(isSimpleNumber(i))
        {
            cout << i << ' ';
        }
    }

    cout << endl;
    cout << fact(5) << endl;
    cout << digit_num(12334) << endl;
    cout << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "Out" << ' ';
        for(int j = 0; j < 3; j++)
        {
            cout << "In" << ' ';
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i == 0 || j == 0 || j == 9 || i == 9 || i == j || j == 9 - i)
            {
                cout << "*";
            }
            else
            {
                cout << ' ';
            }
        }
        cout <<  endl;
    }

    cout << endl;
    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i <= j)
            {
                cout << "*";
            }
            else
            {
                cout << ' ';
            }
        }
        cout <<  endl;
    }

    cout << endl;
    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(j <= 9 - i)
            {
                cout << "*";
            }
            else
            {
                cout << ' ';
            }
        }
        cout <<  endl;
    }

    cout << endl;
    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(j <= 9 - i && j >= i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << ' ';
            }
        }
        cout <<  endl;
    }

    cout << endl;
    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(j <= 9 - i && j >= i + 1 || j >= 9 - i && j <= i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << ' ';
            }
        }
        cout <<  endl;
    }

    cout << endl;
    cout <<  endl;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i == j || j == 0 || i == 9)
            {
                cout << "*";
            }
            else
            {
                cout << ' ';
            }
        }
        cout <<  endl;
    }

    cout << endl;
    cout <<  endl;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(j % 2 != 0 && i % 2 != 0 || j % 2 == 0 && i % 2 ==0)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout <<  endl;
    }

    int n = 10, m = 3;


    cout << endl << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            for(int k = 1; k <= n; k++)
            {
                for(int z = 1; z <= m; z++)
                {
                    if(j % 2 != 0 && i % 2 != 0 || j % 2 == 0 && i % 2 ==0)
                        cout << "*";
                    else
                        cout << "-";
                }
            }
            cout << endl;
        }
        //cout << endl;
    }

    return 0;
}
