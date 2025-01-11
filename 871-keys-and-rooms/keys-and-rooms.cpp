class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       unordered_set<int>visited;
       queue<int>q;
       q.push(0);
       while(!q.empty()){
        int curr = q.front();
        q.pop();
        visited.insert(0);
        for(int neigh : rooms[curr]){
            if(visited.count(neigh)==0){
                q.push(neigh);
                visited.insert(neigh);
            }
        }
       }
       return  visited.size() == rooms.size();
    }
};