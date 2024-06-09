//about post and pre-incrementation
#include<iostream>
using namespace std;
int main()
{
	int i=0;
	int j=0;
	int k=0;
	cout<<i<<" "<<j<<" "<<k<<endl;
	j=i++;
	cout<<i<<" "<<j<<" "<<k<<endl;
	k=++i;
	/*cout<<i++<<endl;//post-increment//took place after it is getting used
	cout<<i<<endl;
	cout<<++j<<endl;//pre-increment//took place before the value is used
	cout<<j;
}*/
