k = ""
for i in range(1,1000000):
    k += str(i)
print(int(k[1-1]) * int(k[10-1]) * int(k[100-1]) * int(k[1000-1]) * int(k[10000-1]) * int(k[100000-1]) * int(k[1000000-1]))