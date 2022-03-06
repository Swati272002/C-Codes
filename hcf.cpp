#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1, n2, hcf;

    cout << "Enter two number of which you want to find HCF : ";
    cin >> n1 >> n2;

    //swapping the values if n2 is greater than n1
    if (n2 > n1)
    {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
    for (int i = 1; i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    cout<<"\nHCF : "<<hcf;
    
    return 0;
}
