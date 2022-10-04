import numpy as np
import math
numerator = []
denominator = []

for i in range(10,100):
    for j in range(i+1,100):
        i1 = int(str(i)[0])
        i2 = int(str(i)[1])
        j1 = int(str(j)[0])
        j2 = int(str(j)[1])
        if( i != j and i%10!=0 and j%10!=0):
            if( (i1 == j1 and i/j == i2/j2) or 
                (i1 == j2 and i/j == i2/j1) or 
                (i2 == j1 and i/j == i1/j2) or 
                (i2 == j2 and i/j == i1/j1)
                ):
                numerator.append(i)
                denominator.append(j)


print(int(np.prod(denominator) / math.gcd(np.prod(numerator),np.prod(denominator))))



        
            


        
