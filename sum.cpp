#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef std::vector<int> vi;
typedef std::vector<char> vc;
typedef std::vector<long long> vl;
#define f first 
#define s second

//based on Colin
//commented by Mello

using namespace std;


void test(){

	ll n;
	cin >> n;
	
	ll l, r;
	l = -(n-1); //this happens because the sum from -3 to 4 is 4, for example

	r = n;			//so we just know the right limit is n

	cout << l << " " << r << endl;
}

int main(){

  int t;
    cin >> t;
    while(t--){
        
        test();
    }
    

}