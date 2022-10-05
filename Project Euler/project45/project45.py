from random import triangular


triangular = [int(n*(n+1)/2)   for n in range(286,100000)]
pentagonal = [int(n*(3*n-1)/2) for n in range(166,100000)]
hexagonal  = [int(n*(2*n-1))   for n in range(144,100000)]

for i in triangular:
    if i in pentagonal and i in hexagonal:
        print(i)
        break
