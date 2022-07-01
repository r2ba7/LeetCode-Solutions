def minMoves2(nums): 
    # nums = np.array(nums)
    # np.sort(nums)
    nums.sort()
    #mean = np.mean(nums)
    median = np.median(nums)
    moves = 0
    #t1 = 9999
    #argmean = 0
    #d2 = 0
    for i, n in enumerate(nums):
        #if n == median:
            #argmean = i
            #continue
        #d1 = abs(median - n)
        moves += abs(median - n)
        # if d1 < t1:
        #     t1 = d1
        #     argmean = i
    return int(moves)
