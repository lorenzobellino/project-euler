a = 1
b = 1
s=0
m = 4000000

while(a<=m):
    c = a+b
    a = b
    b = c
    if(b%2==0):
        s+=b
    
print(s)