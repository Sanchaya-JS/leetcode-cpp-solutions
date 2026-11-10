class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows==1 || numRows>=s.length())
        return s;

      vector<string>rows(numRows);
      int currrow=0;
      bool down=false;

      for(char c:s){
        rows[currrow]+=c;

        if(currrow==0 || currrow==numRows-1)
            down=!down;

        currrow+=down?1:-1;
      }  
      string result="";

      for(string row:rows){
        result+=row;
      }
      return result;
    }
};
