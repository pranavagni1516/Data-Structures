class Solution:
    def getAverages(self, nums: List[int], k: int) -> List[int]:
        
        res,left,totalsum,diameter = [-1]*len(nums),0,0,2*k+1

        for right in range(len(nums)):
            totalsum+=nums[right]

            if right-left+1 == diameter :
                res[left+k] = totalsum // diameter
                totalsum   -= nums[left]
                left+=1
            
        
        return res