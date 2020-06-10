#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	for (int i = 0; i < T; ++i)
	{
		float fin,disbolt,tgacc,boltsp;
		cin>>fin;
		cin>>disbolt;
		cin>>tgacc;
		cin>>boltsp;

		float t_bolt,t_tiger;
		t_bolt = fin/boltsp;
		//cout<<t_bolt<<" ";
		fin = fin+disbolt;
		t_tiger = sqrt((2*fin)/tgacc);
		//cout<<t_tiger;
		if(t_tiger<=t_bolt) cout<<"Tiger"<<endl;
		else cout<<"Bolt"<<endl;
	}


	return 0;
}