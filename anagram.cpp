bool isAnagram(string a, string b){
        map<char, char> mp;
        
        if(a.length() != b.length()){
            return false;
        }
        
        for(int i = 0; i < a.length(); i++){
            mp[a[i]]++;
        }
        
        for(int i = 0; i < b.length(); i++){
            mp[b[i]]--;
        }
        
        for(auto it : mp){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
