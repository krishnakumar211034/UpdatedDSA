#include <iostream>
using namespace std;
char Detect(int &rem)
{					
	if(rem<10) return rem+'0';
	switch(rem)
	{
		case 10: return 'A';
		case 11: return 'B';
		case 12: return 'C';
		case 13: return 'D';
		case 14: return 'E';
		case 15: return 'F';
	}
}
string cal(int &num)
{
	string ans="";
	while(num!=0)
	{
		int rem=num%16;
		num=num/16;
		char ch=Detect(rem);
		ans=ch+ans;
	}
	return ans;
}
int main()
{
	int num;
	cout<<"Enter the input in Decimal Format: ";
	cin>>num;
	string ans=cal(num);
	cout<<" "<<ans<<" ";
	return 0;
}