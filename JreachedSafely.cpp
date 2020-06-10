#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	for (int i = 1; i <= T; ++i)
		{
			int M,N,Rx,Ry,n;
			cin>>M>>N>>Rx>>Ry>>n;
			int cx=0,cy=0;
			char a;
			for(int j=0;j<n;j++){
				cin>>a;
				switch(a){
					case 'U': 	cy++;
								break;
					case 'D': 	cy--;
								break;
					case 'L': 	cx--;
								break;
					case 'R': 	cx++;
								break;
				}
			}
			//cout<<cx<<" ";
			//cout<<cy<<" ";
			if(cx<0 || cy<0 || cx>M || cy>N) cout<<"Case "<<i<<": "<<"DANGER"<<endl;
			else if(cx==Rx && cy==Ry) cout<<"Case "<<i<<": "<<"REACHED"<<endl;					//The placement of if & else if are crucial here 
			else if(cx<M || cy<N) cout<<"Case "<<i<<": "<<"SOMEWHERE"<<endl;
		}	


	return 0;
}