class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        sum = 0
        boxTypes.sort(key=lambda x: x[1], reverse=True)
        for l in boxTypes:
            if (truckSize - l[0]) > 0:
                truckSize = truckSize - l[0]
            else:
                l[0] = truckSize
                truckSize = 0
            sum += (l[1]*l[0])
        return sum
