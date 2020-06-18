#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;

	while(T--){
		int N,K;
		cin>>N>>K;

		int a[N];
		for (int i = 0; i < N; ++i)
		{
			cin>>a[i];
		}

		int diff=0;
		for (int i = 0; i < N; ++i)
		{
			if(a[i]>K) diff = diff+(a[i]-K);
		}

		cout<<diff<<endl;
	}


	return 0;
}