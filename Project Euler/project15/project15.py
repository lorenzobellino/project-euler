import re
import numpy

h = 20
w = 20

numerator = numpy.math.factorial(h+w)
denominator = numpy.math.factorial(h)*(numpy.math.factorial(h+w-h))

res = numerator/denominator
print(int(res))