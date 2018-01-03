//Reverse

class Solution {
public:
    int reverse(int x) 		{
		int maxInt32 = pow(2, 31) - 1;
		int minInt32 = -1 * pow(2, 31);
		long long temp = x;
		if (x == 0)
		{
			return 0;
		}
		else
		{
			string resultStr;
			string ss = to_string(temp);
			for (int i = ss.length() - 1; i > -1; i--)
			{
				resultStr.push_back(ss[i]);
			}
			temp = atoll(resultStr.c_str());
			temp = temp*(x / abs(x));
			
			if (temp > maxInt32 || temp < minInt32)
			{
				temp = 0;
			}
			return   temp;
		}
	}
};
