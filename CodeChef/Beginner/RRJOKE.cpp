#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
# define GETCHAR getchar_unlocked
typedef long long ll;

inline ll  readllInt() {
    ll  n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}

inline int readInt() {
    int n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}

int main()
{
  int t=readInt();
  while(t--){
  	int n;
  	cin >> n;
  	int j,xo=1;
  	for(int i=0;i<2*n;i++)
  		cin >> j;
  	for(int i=2;i<=n;i++){
  		xo=xo^i;
  	}
  	printf("%d\n",xo );
  }
	
	return 0;
}
	