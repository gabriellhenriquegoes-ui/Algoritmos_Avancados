while True:
    n = int(input())
    if n == 0:
        break
    descarte = []
    nums = [int(v+1) for v in range(n)]

    while len(nums)>=2:
        descarte.append(str(nums.pop(0)))
        nums.append(nums.pop(0))

    if descarte:
        print(f"Discarded cards: {', '.join(descarte)}")
    else:
        print(f"Discarded cards:")
    
    print(f"Remaining card: {nums[0]}")
    