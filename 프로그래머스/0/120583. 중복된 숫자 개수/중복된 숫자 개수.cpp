#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) 
{
    int answer = 0;
    
    for(int i : array)
    {
        if(n==i)
        ++answer;
    }
    
    return answer;
}