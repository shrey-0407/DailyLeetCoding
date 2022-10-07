class MyCalendar {
public:
      vector<pair<int,int>>vp;
    MyCalendar() {
        
    }
    
    bool book(int s, int e) {
        for(pair<int,int>it:vp)
        {
            if(max(it.first,s)<min(e,it.second))return false;
        }
        vp.push_back({s,e});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */