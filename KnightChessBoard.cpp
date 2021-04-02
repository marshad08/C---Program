/*
  Snake and ladders program
  class Solution {
     public int snakesAndLadders(int[][] board) {
      int n = board.length;
        int steps = 0;
      Queue<Integer> q = new LinkedList<Integer>();
      boolean visited[][] = new boolean[n][n];
       q.add(1);
       visited[n-1][0] = true;
       while(!q.isEmpty()){
         int size = q.size();
        
          for(int i =0; i <size; i++){
              int x = q.poll();
              if(x == n*n) return steps;
              for(int k=1; k <=6; k++){
                  if(k+x > n*n) break;
                  int pos[] = findCoordinates(k+x, n);
                  int r = pos[0];
                  int c = pos[1];
                  if(visited[r][c] == true) continue;
                  visited[r][c] = true;
                  if(board[r][c] == -1){
                      q.add(k+x);
                  }else{
                      q.add(board[r][c]);
                  }
              }
          }
          
        steps++;
       
      }    
        return -1;
    }
    
   public int[] findCoordinates(int curr, int n) {
        int r = n - (curr - 1) / n  -1;
        int c = (curr - 1) % n;
        if (r % 2 == n % 2) {
            return new int[]{r, n - 1 - c};
        } else {
            return new int[]{r, c};
        }
    }
}
*/

/*
   Cheapest Flights Within K Stops.java 
   class Solution {
   public int findCheapestPrice(int n, int[][] flights, int src, int dst, int K) 
    {
        Map<Integer,List<int[]>> map=new HashMap<>();
        for(int[] f:flights)
        {
            map.putIfAbsent(f[0],new ArrayList<>());
            map.get(f[0]).add(new int[]{f[1],f[2]});
        }
        PriorityQueue<int[]> q=new PriorityQueue<>(new Comparator<int[]>() {
            @Override
            public int compare(int[] o1, int[] o2) {
                return Integer.compare(o1[1],o2[1]);
            }
        });
        q.offer(new int[]{src,0 ,K});
        while(!q.isEmpty())
        {
            int[] c=q.poll();
            int curr=c[0];
            int cost=c[1];
            int stop=c[2];
            if(curr==dst)
                return cost;
            if(stop>=0)
            {   
                if(!map.containsKey(curr))
                    continue;
                for(int[] next:map.get(curr))
                {
                    q.add(new int[]{next[0], cost+next[1], stop-1});
                }
            }
        }
        return -1;
    }
}
*/
/*
 			Topological Sorting
   class TopologicalSort {
    static int[] topoSort(ArrayList<ArrayList<Integer>> adj, int N) {

        int ans[] = new int[N];
        Stack<Integer> s = new Stack<>();
        boolean visited[] = new boolean[N];
        for(int i =0; i <N; i++)
          if(visited[i] == false){
           visited[i] = true;
           topo(i, visited, adj, s);
          }
         int k =0;
         while(!s.isEmpty())
          ans[k++] = s.pop();
        return ans;
    }
    
    private static void topo(int i, boolean  visited[], ArrayList<ArrayList<Integer>> adj, Stack<Integer> s){
        for(int x : adj.get(i)){
            if(visited[x] == false){
                visited[x] = true;
                topo(x, visited, adj, s);
            }
        }
        s.push(i);
    }
}
*/
/*
						Is Graph Bipartitie
   class Solution {
    public boolean isBipartite(int[][] graph) {
        int len = graph.length;
        int[] colors = new int[len];
        
        for (int i = 0; i < len; i++) {
            if (colors[i]  == 1 || colors[i]  == -1) continue;
            Queue<Integer> queue = new LinkedList<>();
            queue.add(i);
            colors[i] = 1;  
            
            while (!queue.isEmpty()) {
                int cur = queue.poll();
                for (int next : graph[cur]) {
                    if (colors[next] == 0) {          
                        colors[next] = -colors[cur];  
                        queue.add(next);
                    } 
                    
                    if(colors[next] == colors[cur])  return false;
                    
                }
            }
        }
        
        return true;
    }
}
*/
/*
				Possible Bipartition.java
		class Solution {
    public boolean possibleBipartition(int N, int[][] dislikes) {
       
        int[] color = new int[N+1];
        List<Integer>[] graph = new List[N+1];
        for(int i = 0; i <= N; i++) {
            graph[i] = new ArrayList<>();
        }
        
        for(int[] v: dislikes) {
            graph[v[0]].add(v[1]);
            graph[v[1]].add(v[0]);
        }
        
        for(int i = 1; i <= N; i++) {
            if(color[i] == 0) {
                LinkedList<Integer> queue = new LinkedList<>();
                queue.add(i);
                color[i] = 1;
                while(queue.size() != 0) {
                    int top = queue.removeFirst();
                    for(int neighbor: graph[top]) {
                        if(color[neighbor] == color[top]) return false;
                        if(color[neighbor] == 0) {
                            color[neighbor] = -color[top];
                             queue.add(neighbor);
                        }
                    }
                }
            }
        }
        
        return true;
    }
}
*/
#include<bits/stdc++.h>

using namespace std;
bool isValid(int,int,int,int);
int KnightChess(int n,int m,int sx1,int sy1,int dx1,int dy1)
{
	int dx[]={-1,-2,-1,-2,1,2,2,1};
	int dy[]={-2,-1,2,1,-2,-1,1,2};
	vector <vector <bool>> b(n+1,vector<bool>(m+1));
	queue <pair <int,int>> q;
	int count=0;
	q.push({sx1,sy1});
	b[sx1][sy1]=true;
	while(!q.empty())
	{
		int size=q.size();
		for(int i=0;i<size;i++)
		{
			int q1=q.front().first;
			int q2=q.front().second;
			q.pop();
			if(q1==dx1 && q2==dy1)
			 return count;
			
			for(int j=0;j<8;j++)
			{
				if(isValid(q1+dx[j],q2+dy[j],n,m) && b[q1+dx[j]][q2+dy[j]]==false)
				{
					b[q1+dx[j]][q2+dy[j]]=true;
					q.push({q1+dx[j],q2+dy[j]});
				}
			}
			
		}
		count++;
	}
	return -1;
}
bool isValid(int x,int y,int n,int m)
{
	if(x<=0 || y<=0 || x>n ||y>m)
	  return false;
	return true;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int sx1,sy1,dx1,dy1;
	cin>>sx1>>sy1>>dx1>>dy1;
	cout<<KnightChess(n,m,sx1,sy1,dx1,dy1)<<endl;
	return 0;
	
}
