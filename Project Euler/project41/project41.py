from primePy import primes
from itertools import permutations

digits = "123456789"
found = False
for i in range(9,0,-1):
    if(found):
        break
    perms = set([ "".join(x) for x in permutations(digits[:i])])
    for p in sorted(perms,reverse=True):
        if(primes.check(int(p))):
            print(p)
            found = True
            break

