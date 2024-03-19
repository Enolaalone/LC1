#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include < map >
using namespace std;

vector<int> a;
int book[100];

void DFS(int cur,int n,vector<int> &nums) {

	if (cur==n)
	{
		for (int i = 0; i <a.size(); i++) {
			cout << a[i] ;
		}
		cout << endl;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (!book[nums[i]])
		{
			a.push_back(nums[i]);
			book[nums[i]] = 1;//��Ƿ���
			DFS(cur + 1, n, nums);//�ݹ�
			book[nums[i] ]= 0;//��������
			a.pop_back();
		}

	}


}

int main() {
	vector<int>nums{ 1, 2, 3, 4 };
	DFS(0, 4, nums);
	cout << "12" << endl;

}


/*vector<int> a; // ��¼ÿ������ 
map<int, int> book; //����Ƿ񱻷��� 

void DFS(int cur, int n, vector<int>& nums) {
    if (cur == n) {
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] ;
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (book[nums[i]] == 0) {
            a.push_back(nums[i]);
            book[nums[i]] = 1;
            DFS(cur + 1, n, nums);
            book[nums[i]] = 0;
            a.pop_back();
        }
    }
}

int main() {
    vector<int> nums{ 1,2,3,4 };
    int n = nums.size();
    DFS(0, n, nums);

} */

