#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<queue>
#include<sstream>
#include<iterator>
#include<math.h>
#include<malloc.h>
#include<string.h>
#define TIME std::ios::sync_with_stdio(false)
#define LL long long
#define MAX 233
#define INF 0x3f3f3f3f

using namespace std;

int main() {
    TIME;
    int d,n;
    while(cin >> d >> n){
        int k = 1;
        for(int i = 0;i < d-1;i++){
            if(n % 2 == 0){
                k = 2*k+1;
                n /= 2;
            }else{
                k *= 2;
                n = n/2 + 1;
            }
        }
        cout << k << endl;
    }

    system("pause");
    return 0;
}