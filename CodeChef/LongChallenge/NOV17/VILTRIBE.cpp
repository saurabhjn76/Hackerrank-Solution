#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define R(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int countA=0,countB=0,countDot=0;
    char lastSeen='a';
    R(i,s.length()){
    	if(s[i]=='A'){
    		if(lastSeen=='A'){
    			countA+=countDot;
    			countDot=0;
    		}
    		if(lastSeen=='B'){
    			countDot=0;
    		}
    		lastSeen='A';
    		countA++;
    	} else if(s[i]=='B'){
    		if(lastSeen=='B'){
    			countB+=countDot;
    			countDot=0;
    		}
    		if(lastSeen=='A'){
    			countDot=0;
    		}
    		countB++;
    		lastSeen='B';
    	} else if(s[i]=='.'){
    		if(lastSeen=='a'){
    			countDot=0;
    			continue;
    		} else {
    			countDot++;
    		}
    		
    	}
    }
    printf("%d %d\n",countA, countB );
  }
	
	return 0;
}