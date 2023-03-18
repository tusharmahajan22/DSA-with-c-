class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        queue<int>q;
        queue<int>qu;
        for(int i=0;i<n;i++){
            int p=students[i];
            q.push(p);
        }
        int l=q.size();
        for(int i=0;i<n;i++){
            qu.push(sandwiches[i]);
        }
        int i=0;
        
         while(i<n){
            int a=q.front();
            int b=q.front();
            if(a==b){
                q.pop();
                qu.pop();
                i++;
            }
            else{
                int c=q.front();
                q.pop();
                q.push(c);
            }

        }
        return q.size();


        
    }
};