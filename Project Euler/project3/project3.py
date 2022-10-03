import primefac
N = 600851475143

factors = list( primefac.primefac(N) )
print(max(factors))