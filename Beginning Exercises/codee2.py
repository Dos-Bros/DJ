import pandas as pd
import matplotlib.pyplot as pyplot

df = pd.read_csv('scores.csv')

names = df['name']
scores = df['score']

plt.bar(names, scores)
plt.xlabel('Name')
plt.ylabel('Score')
plt.title('Scores by Name')
plt.xticks(rotation=70)
plt.show()
