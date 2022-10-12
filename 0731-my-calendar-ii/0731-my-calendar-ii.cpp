class MyCalendarTwo {
public:
    MyCalendarTwo() {
        
    }
    map<int,int>mp;
    bool book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int s=0;
        for(auto it:mp){
            s+=it.second;
            if(s>=3){
                mp[start]--;
                mp[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */