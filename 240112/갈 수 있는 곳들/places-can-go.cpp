#include <iostream>
#include <queue>
using namespace std;

int n;
int board[100][100];
queue<pair<int, int> > q;
bool visited[100][100];

void BFS() {
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();

        int dx[4] = { 1, -1, 0, 0 };
        int dy[4] = { 0, 0, 1, -1 };

        for (int dir = 0; dir < 4; dir++) {

            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n || ny >= n)
            {
                continue;
            }

            if (board[nx][ny] == 0 && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main() {
    int k, sx, sy, cnt = 0;

    cin >> n >> k; // n:행사이즈, m:열사이즈

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < k; i++)
    {
        cin >> sx >> sy;
        q.push(make_pair(sx-1, sy-1));
        visited[sx-1][sy-1] = true;
    }

    BFS();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == true)
            {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}