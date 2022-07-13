class Solution {
public:
    string addBinary(string a, string b) {
        int sum,carry=0;
        string out;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0 || j>=0)
        {
            sum=carry;
            if(i>=0)
            {
                sum+=a[i]-'0';
            }
            if(j>=0)
            {
                sum+=b[j]-'0';
            }
            out+=to_string(sum % 2);
            carry=sum/2;
            i--;
            j--;
        }
        if(carry!=0)
        {
            out+='1';
        }
        reverse(out.begin(),out.end());
        return out;
    }
};