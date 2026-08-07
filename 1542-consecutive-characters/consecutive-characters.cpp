class Solution {
public:
    int maxPower(string s) {
        int count=0,max=0;
        char ch=s[0];
        int i=0;
        while(s[i]){
            
            if(s[i]==ch){
                count++;
                i++;
            }else {
                    count=1;
                    ch=s[i];
                    i++;
            }
            if(count>max)max=count;
        }
    return max;    
    }
};