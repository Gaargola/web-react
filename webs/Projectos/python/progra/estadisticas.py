import matplotlib.pyplot as plt
import pandas as pd 

langs = ["Python", "Javascript", "Java", "C++"]

data = {
    2016: [20203,13345,123541,15566],
    2017: [30005,15667,123,566767],
    2018: [50001,11467887,1231,1235156]
    
}

df = pd.DataFrame(data, index=langs).transpose()

plt.bar(df.index, df["Python"])
plt.show()