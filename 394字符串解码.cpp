#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        //建立两个栈
        stack<int> nums;
        stack<string> str;
        int num=0;
        string res="";

        for (auto ch:s)
        {
            if (ch >= '0' && ch <= '9') {//数字

                num = 10 * num + (int)(ch - '0');//将数字全部读取
            }
            else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
                res += ch;//字母
            }
            else if (ch=='[')
            {
                str.push(res);//字符串入栈
                res = "";
                nums.push(num);//次数入栈
                num = 0;
            }
            else if(ch==']')
            {
                int times = nums.top();//弹出次数
                nums.pop();

                for (int i = 0; i < times; i++)
                {
                    str.top() += res;//重复times次[]中内容

                }
                res = str.top();
                str.pop();

            }
            

        }
        return res;

    }
};



int main() {
    Solution solution;
    string k = "3[a2[c]b]";
    k = solution.decodeString(k);



}