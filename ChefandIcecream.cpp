#include <bits/stdc++.h>
using namespace std;


// break statement generates problem when submitting to codechef  


int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int chng[2]={0};

		int flag=1;
		for (int i = 0; i < N; ++i)
		{
			int a;
			cin>>a;

			if(a==5) chng[0]++;
			
			else if(a==10){
				if(chng[0]==0){
					flag=-1;
					//break;
				}

				else{
					chng[0]--;
					chng[1]++;
				}
			}

			else{
				if(chng[0]<2 && chng[1]==0){
					flag=-1;
					//break;
				}

				else{
					if(chng[1]>0) chng[1]--;
					else chng[0] = chng[0]-2;
				}
			}

		}

		if(flag==-1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}


	return 0;
}