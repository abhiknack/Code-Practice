#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> dic = {1, 4, 5, 6, 2, 1,5};
    
    
int max = dic[0];
int min = dic[0];

        
        for (int i = 1; i < dic.size(); i++)
        {
            
            if (dic[i] > max) max = dic[i];

        }
        for (int i = 1; i < dic.size(); i++)
        {
            
            if (dic[i] < min) min = dic[i];

        }
        
    
    
        cout<<max<<min;
    return 0;
}
