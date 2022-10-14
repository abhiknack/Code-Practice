#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> dic = {1, 4, 5, 6, 2, 1,5};
    if (dic.size() % 2 == 0)
    {

        for (int i = 0; i < dic.size()/2; i++)
        {
            int temp = dic[i];
            dic[i] = dic[dic.size()-1-i];
            dic[dic.size()-1-i] = temp;

        }
    }
    else{
         for (int i = 0; i < (dic.size()-1)/2; i++)
        {
            int temp = dic[i];
            dic[i] = dic[dic.size()-1-i];
            dic[dic.size()-1-i] = temp;
        }
    }
    for (int i = 0; i < dic.size(); i++){
        cout<<dic[i];
    }
    return 0;
}
