#include <iostream>

using namespace std;
int n;
char tab[21][21];

int main()
{
    start:
    cout << "Christmas tree: give the number of rows the tree(from 1 to 20): ";
    cin>>n;
    if (n>20)
    {
        cout<< "Give the right number of the tree's row!";
        cout<<endl;
        goto start;
    }
    cout<< endl;

    //make array and fill it with "*"
    for(int i=0; i<n+1; i++)
    {
        for(int j=1; j<2*n; j++)
        {
            tab[i][j]='*';
        }
    }

// then we set condition for drawing "*" or gaps (" ")
//and show all on the screen
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*n; j++)
        {
            if(j>=(n-i)&& j<=(n+i))
            {
                cout<<tab[i][j];
            }
            else cout<< " ";
        }
        cout<<endl;
    }

    //the last stage we draw a root of the Christmas tree
    for(int i=n; i<n+1; i++)
    {
        for(int j=0; j<2*n; j++)
        {
            if(j==n)
            {
                cout<<tab[i][j];
            }
            else cout<< " ";
        }
        cout<<endl;
    }

    return 0;
}
