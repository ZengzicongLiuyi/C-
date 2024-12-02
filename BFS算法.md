# 预备知识
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731423722523-ab672873-fc0b-4a50-9cb8-397bedff7556.png)![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731423741325-ff5d6125-5728-4080-af29-a6e97e97f25c.png)

# STL中队列的基本用法
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731428537100-69160b9a-025c-4f7c-a082-6f82544f0871.png)

# STL实例介绍
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731479570345-24796832-6aff-4dbd-9110-96385a6050fa.png)

# 二叉树层次遍历
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731479787706-3985dd9e-153d-4728-b3fc-cd9566184bd6.png)

算法思想：维护一个队列，用于存放节点信息。当访问到一个节点的时候先访问该节点，然后将该节点的左右儿子分别入队列。

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731479929994-8ef7dceb-e8e1-4917-bb89-479e4791839c.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731480167986-f8c9d980-9966-4fce-b061-33a7ce7f7fb9.png)

# 图的BFS示意图
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731482931028-ceda7322-dbe4-4c06-9395-a5d48f21e5f9.png)

# 电梯上下问题
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731482963018-98323ce9-c9e5-4e62-bc34-bd40c3266ae4.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731483465165-a4c8547f-32db-446e-90ea-d9efd1b79911.png)

```cpp
#include<bits/stdc++.h>
using namespace std;

int N, Start, End;//楼层数，开始楼层，结束楼层
int a[202];//每楼层的数字保存在A数组里面
int vis[202];//做标记用的

struct pos {//结构体
    int level;  //每个节点有level楼层和steps，走到当前楼层所需要的步数就是level和steps
    int steps;
};

void bfs() 
{
    pos cur, nex;//定义了当前和下一个
    cur.level = Start;//当前的状态就是初始化起点
    cur.steps = 0;//初始化
    queue<pos> qu;//创造队列
    qu.push(cur);//初始起点存入
    vis[Start] = 1;//每进去一个节点，vis复制为1
    while (!qu.empty()) {//当队列不为空
        cur = qu.front();//取出队首
        qu.pop();//删掉
        if (cur.level == End) {//取出的楼层是结束楼层
            printf("%d\n", cur.steps);//输出对应的步数
            return;
        }
        nex.level = cur.level + a[cur.level];//nextlevel记录下一层楼层是多少,cur.level + a[cur.level]当前楼层和这个楼层的数字
        nex.steps = cur.steps + 1;//步数加一
        if (nex.level <= N) {//判断，如果没有超过最高楼层
            if (vis[nex.level] == 0) {//如果没来过这个楼层，
                vis[nex.level] = 1;//做标记
                qu.push(nex);//存到队列里
            }
        }
        nex.steps = cur.steps + 1;//步数加一
        if (nex.level >= 1) {//向下的过程，一样
            if (vis[nex.level] == 0) {
                vis[nex.level] = 1;
                qu.push(nex);
            }
        }
    }
    printf("-1\n");
    return;
}

int main() {
    while (scanf("%d", &N) == 1) {
        if (N == 0) break;
        for(int i = 1; i <= N; i++) {
            scanf("%d%d", &Start, &End);
            scanf("%d", &a[i]);
            vis[i] = 0;
        }
        bfs();
    }
    return 0;
}
```

# 可乐问题
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731490010358-0912cd7e-4210-4b08-a45e-cc4933de5de3.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731490713092-1272f7ea-a03b-47f4-9993-8dc5e4331944.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731490922242-343415b4-ec77-43d2-8345-682cf33d0822.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731491258412-2df084c4-c728-4fd6-9ed1-d55c3ae8a635.png)

```cpp
#include <iostream>
#include <queue>
#include <unordered_set>

struct State {
    int s, n, m, step;
};

bool isDivided(int s, int n, int m) {
    return ((s % 2 == 0) && (n == s / 2 && m == s / 2)) || (n == s / 2 && m == s - s / 2) || (n == s - s / 2 && m == s / 2);
}

int pourCola(int s, int n, int m) {
    std::queue<State> q;
    std::unordered_set<int> visited;
    q.push({s, 0, 0, 0});
    visited.insert(s << 16 | 0 << 8 | 0);
    while (!q.empty()) {
        State cur = q.front();
        q.pop();
        if (isDivided(cur.s, cur.n, cur.m)) {
            return cur.step;
        }
        // 将第一个杯子倒满
        if (cur.n < n &&!visited.count(cur.s << 16 | n << 8 | cur.m)) {
            q.push({cur.s, n, cur.m, cur.step + 1});
            visited.insert(cur.s << 16 | n << 8 | cur.m);
        }
        // 将第二个杯子倒满
        if (cur.m < m &&!visited.count(cur.s << 16 | cur.n << 8 | m)) {
            q.push({cur.s, cur.n, m, cur.step + 1});
            visited.insert(cur.s << 16 | cur.n << 8 | m);
        }
        // 将第一个杯子倒空
        if (cur.n > 0 &&!visited.count(cur.s << 16 | 0 << 8 | cur.m)) {
            q.push({cur.s, 0, cur.m, cur.step + 1});
            visited.insert(cur.s << 16 | 0 << 8 | cur.m);
        }
        // 将第二个杯子倒空
        if (cur.m > 0 &&!visited.count(cur.s << 16 | cur.n << 8 | 0)) {
            q.push({cur.s, cur.n, 0, cur.step + 1});
            visited.insert(cur.s << 16 | cur.n << 8 | 0);
        }
        // 将第一个杯子的可乐倒入第二个杯子，直到第二个杯子满或者第一个杯子空
        if (cur.n > 0 && cur.m < m) {
            int pour = std::min(cur.n, m - cur.m);
            if (!visited.count(cur.s << 16 | cur.n - pour << 8 | cur.m + pour)) {
                q.push({cur.s, cur.n - pour, cur.m + pour, cur.step + 1});
                visited.insert(cur.s << 16 | cur.n - pour << 8 | cur.m + pour);
            }
        }
        // 将第二个杯子的可乐倒入第一个杯子，直到第一个杯子满或者第二个杯子空
        if (cur.m > 0 && cur.n < n) {
            int pour = std::min(cur.m, n - cur.n);
            if (!visited.count(cur.s << 16 | cur.n + pour << 8 | cur.m - pour)) {
                q.push({cur.s, cur.n + pour, cur.m - pour, cur.step + 1});
                visited.insert(cur.s << 16 | cur.n + pour << 8 | cur.m - pour);
            }
        }
    }
    return -1;
}

int main() {
    int s, n, m;
    std::cin >> s >> n >> m;
    int result = pourCola(s, n, m);
    if (result == -1) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << result << std::endl;
    }
    return 0;
}
```

# 国际象棋（典型的搜索）
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731491322530-ed4c0169-dd09-4ba6-9198-6cc1ee1877ff.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731491497471-4d9da27f-617c-4f34-86b3-fdeb1d802704.png)

```cpp
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

struct KnightPosition {
    string position;
    int moves;
};

// 检查位置是否在棋盘内
bool isValidPosition(const string& pos) {
    int row = pos[1] - '0';
    int col = pos[0] - 'a' + 1;
    return row >= 1 && row <= 8 && col >= 1 && col <= 8;
}

// 获取骑士从当前位置可以到达的所有有效位置
vector<string> getNextPositions(const string& currentPos) {
    int row = currentPos[1] - '0';
    int col = currentPos[0] - 'a' + 1;
    vector<string> nextPositions;
    // 骑士的八种可能移动
    int dr[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dc[] = {1, 2, 2, 1, -1, -2, -2, -1};
    for (int i = 0; i < 8; i++) {
        int newRow = row + dr[i];
        int newCol = col + dc[i];
        string newPos = string(1, newCol - 1 + 'a') + to_string(newRow);
        if (isValidPosition(newPos)) {
            nextPositions.push_back(newPos);
        }
    }
    return nextPositions;
}

int knightMovesBFS(const string& start, const string& end) {
    queue<KnightPosition> q;
    unordered_map<string, bool> visited;
    q.push({start, 0});
    visited[start] = true;
    while (!q.empty()) {
        KnightPosition current = q.front();
        q.pop();
        if (current.position == end) {
            return current.moves;
        }
        vector<string> nextPositions = getNextPositions(current.position);
        for (const string& nextPos : nextPositions) {
            if (!visited[nextPos]) {
                q.push({nextPos, current.moves + 1});
                visited[nextPos] = true;
            }
        }
    }
    return -1;
}

int main() {
    string start, end;
    cout << "Enter start position: ";
    cin >> start;
    cout << "Enter end position: ";
    cin >> end;
    int moves = knightMovesBFS(start, end);
    if (moves!= -1) {
        cout << "To get from " << start << " to " << end << " takes " << moves << " knight moves." << endl;
    } else {
        cout << "No path found." << endl;
    }
    return 0;
}
```

# BFS基本思想
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731496630462-c1a68692-038a-4d2c-a994-a4cd6604b128.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731496799903-c54efe9a-527d-44be-bba0-8a55db136dfc.png)

# 关于网络地图得四方访问：
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1731497052327-6690e67d-2cf8-4edc-952d-cdcf619f445e.png)



























































































