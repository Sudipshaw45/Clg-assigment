def add_polynomials(p1, p2):
    len1, len2 = len(p1), len(p2)
    if len1 < len2:
        p1 += [0] * (len2 - len1)
    else:
        p2 += [0] * (len1 - len2)
    
    return [p1[i] + p2[i] for i in range(max(len1, len2))]