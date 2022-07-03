#Better Solution
class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:
        #points = []
        horizontalCuts.append(h)
        verticalCuts.append(w)
        horizontalCuts.append(0)
        verticalCuts.append(0)
        horizontalCuts.sort()
        verticalCuts.sort()
        # for hc in horizontalCuts:
        #     for vc in verticalCuts:
        #         points.append((hc, vc))
        # for point in points:
        #     pass
        x, y = 0, 0 
        for i in range(1, len(horizontalCuts)):
                x = max(x, abs(horizontalCuts[i] - horizontalCuts[i-1]))
        for i in range(1, len(verticalCuts)):
                y = max(y, abs(verticalCuts[i] - verticalCuts[i-1]))
        return (x*y)%(10**9+7)
# First solution
class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:
        #points = []
        horizontalCuts.append(h)
        verticalCuts.append(w)
        horizontalCuts.append(0)
        verticalCuts.append(0)
        horizontalCuts.sort()
        verticalCuts.sort()
        # for hc in horizontalCuts:
        #     for vc in verticalCuts:
        #         points.append((hc, vc))
        # for point in points:
        #     pass
        x, y = 0, 0 
        for i, hc in enumerate(horizontalCuts):
            try:
                x = max(x, abs(hc - horizontalCuts[i+1]))
            except:
                break
        
        for i, hc in enumerate(verticalCuts):
            try:
                y = max(y, abs(hc - verticalCuts[i+1]))
            except:
                break
        
        return (x*y)%(10**9+7)
