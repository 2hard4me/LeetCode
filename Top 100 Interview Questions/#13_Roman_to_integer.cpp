class Solution {
public:
    int romanToInt(string s) {
        int x = 0;
        map<char,int>m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        s+='Q';
        for(int i  = 0; i < s.size()-1; ++i){
            if(s[i] == 'I'){
                if(s[i+1] == 'V' || s[i+1] == 'X'){
                    x += (m[s[i+1]]-m[s[i]]);
                    ++i;
                }else{
                   x += 1; 
                }
            }else{
                if(s[i] == 'X'){
                    if(s[i+1] == 'L' || s[i+1] == 'C'){
                        x += (m[s[i+1]]-m[s[i]]);
                        ++i;
                    }else{
                        x += 10; 
                    }
                }else{
                    if(s[i] == 'C'){
                       if(s[i+1] == 'D' || s[i+1] == 'M'){
                            x += (m[s[i+1]]-m[s[i]]);
                           ++i;
                        }else{
                            x += 100; 
                        } 
                    }else{
                        x += m[s[i]];
                    }
                }    
            }
        }
        return x;
    }
    
};
