import numpy as np
class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        ip = np.array(matrix)
        ans = ip[ip > 0]
        ans2 = ip[ip <= 0]
        ans3 =np.abs(ip)
        # ans3= ip[(lambda ip:abs(ip))]
        # print(ans3)
        # print(ans, ans2)
        if np.shape(ans2)[0] % 2 == 0:
            return int(ans.sum() + abs(ans2.sum()))
        else:
            # min =np.array(abs(ans2.max()),ans.min())
            # print(min)
            
            return int(ans.sum() + abs(ans2.sum()) - (2 *ans3.min() ))
