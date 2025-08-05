def dynamicArray(n, queries):
    seqList = [[] for _ in range(n)]
    lastAnswer = 0
    result = []

    for query in queries:
        qType, x, y = query
        idx = (x ^ lastAnswer) % n

        if qType == 1:
            seqList[idx].append(y)
        else:  # qType == 2
            value = seqList[idx][y % len(seqList[idx])]
            lastAnswer = value
            result.append(lastAnswer)

    return result