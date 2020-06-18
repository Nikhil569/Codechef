#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
		string S;
		cin>>S;
		int N = S.size();
		int a[N];

		for (int i = 0; i < N; ++i)
		{
			if(S[i]=='x') a[i] = 1;
			else a[i] = -1;
		}

		int j=0,count=0;
		while(j<N-1){
			if(a[j]+a[j+1]==0){
				count++;
				j = j+2;
			}

			else j++;
		}

		cout<<count<<endl;

	}


	return 0;
}