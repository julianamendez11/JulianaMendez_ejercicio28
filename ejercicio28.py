    
import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt("temperaturas.dat")
plt.show(data)
plt.savefig("calor.png")