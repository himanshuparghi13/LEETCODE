class Solution:
    def plusOne(self, a: List[int]) -> List[int]:
        a.reverse()
        a.append(0)
        
        flag =1
        for idx in range(0,len(a)):
            if flag:
                flag =0
                a[idx]+=1
            # a[idx] +=1
            if(a[idx]==10):
                a[idx] =0
                flag =1
        if flag:
            a[-1] =a[-1]+ 1
        if a[-1]==0:
            a.pop()
        a.reverse()
        return a
        