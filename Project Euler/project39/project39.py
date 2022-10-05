res = {}

for a in range(1000):
    for b in range(a,1000):
        for c in range(b,1000):
            if(a+b+c <= 1000):
                if(a**2 + b**2 == c**2):
                    try:
                        res[a+b+c] += 1
                    except:
                        res[a+b+c] = 1
print(list(res.keys())[list(res.values()).index(max(res.values()))])