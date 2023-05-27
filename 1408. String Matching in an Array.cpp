class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        n=len(words)
        ans=[]
        for i in range(n):
            for j in range(n):
                if i!=j:
                    if words[j] in words[i]:
                        if words[j] not in ans:
                            ans.append(words[j])
        return ans