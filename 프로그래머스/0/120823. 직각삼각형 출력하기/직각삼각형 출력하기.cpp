#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
    int n;
    cin >> n;

    for(int i=1; i<=n; ++i)
    {
        cout << string(i,'*') << endl;

    }
    
    return 0;
}