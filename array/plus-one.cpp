class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int i=digits.size()-1;
        bool allnine = true ;
          for(int j=0;j<digits.size()-1;j++){
            if(digits[j]!=9){
                allnine=false;
                break;
        }
        }
        if(digits[i]!=9){
            digits[i]=digits[i]+1;
            return digits;
        }
      
        else{
            for(int k=digits.size()-1;k>=0;k--){
                if(digits[k]==9){
                    digits[k]=0;
                }
             
                
                     else if(digits[k]!=9) {
                        digits[k]+=1;
                        return digits;
                     }
            }
             if(allnine==true){

                    digits.insert(digits.begin(), 1);
                    return digits;
                     }
            
            }
    
        



        
        return {};
        }

    
};