from itertools import permutations

digits = "0123456789"
primes = [2,3,5,7,11,13,17]
perms = set([ "".join(x) for x in permutations(digits)])
res = []
for p in perms:
    if(int(p[1:4]) % primes[0] == 0 and
       int(p[2:5]) % primes[1] == 0 and
       int(p[3:6]) % primes[2] == 0 and
       int(p[4:7]) % primes[3] == 0 and
       int(p[5:8]) % primes[4] == 0 and
       int(p[6:9]) % primes[5] == 0 and
       int(p[7:10]) % primes[6] == 0):
        res.append(int(p))
print(sum(res))
