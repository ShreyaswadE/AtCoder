#include <iostream>
 
using namespace std;
 
int main()
{
    string S;
    cin >> S;
    
    int no_of_1s = 0;
    for(int i = 0; i < S.size(); i++)
        no_of_1s += (S[i] == '1');
    
    cout << no_of_1s;
    return 0;
}
