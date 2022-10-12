class MyCalendarThree {
public:
    MyCalendarThree() {
        
    }
    map<int,int>mp;
    int mxc=0;
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int c=0;
        for(auto it:mp){
            c+=it.second;
            mxc=max(c,mxc);
        }
        return mxc;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */