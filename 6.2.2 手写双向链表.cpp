#include<iostream>
#include<vector>
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

int n;
int left[MAX];
int right[MAX];

struct Node{
    int index,left,right;
}node[8];

void init(){
    for(int i = 0;i <= 8;i++){
        node[i].index = i;
        node[i].left = i-1;
        node[i].right = i+1;
    }
}

void show(){
    int now = 0;
    while(node[now].right != 9){
        cout << node[now].right << " ";
        now = node[now].right;
    }
    cout << endl;
}

void move(int x){
    int l = node[x].left;
    int r = node[x].right;
    node[l].right = r;
    node[r].left = l;
}

// y 插入 x 后
void insert_back(int x,int y){
    node[y].right = node[x].right;
    node[x].right = y;
    node[node[x].right].left = y;
    node[y].left = x;
}

// y 插入 x 左边
void left_x_y(int x,int y){
    move(y);
    insert_back(node[x].left,y);
}

// y 插入 x 右边
void right_x_y(int x,int y){
    move(y);
    insert_back(x,y);
}

int main() {
    TIME;
    init();
    left_x_y(4,1);
    right_x_y(5,3);
    show();

    system("pause");
    return 0;
}
