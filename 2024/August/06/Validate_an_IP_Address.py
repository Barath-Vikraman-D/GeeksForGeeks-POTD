#! /usr/bin/env python3

#User function Template for python3
class Solution:
    def isValid(self, str):
        ips = str.split('.')
        if len(ips)!=4:
            return False
        try:
            for ip in ips:
                if ip[0] =='0'  and int(ip)!=0:
                    return False
                if not (0<=int(ip)<=255):
                    return False
            return True
        except:
            return False
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(0, t):
        s = input()
        ob = Solution()
        if (ob.isValid(s)):
            print("true")
        else:
            print("false")

# } Driver Code Ends
