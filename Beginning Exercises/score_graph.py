import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV file
df = pd.read_csv('scores.csv')

# Extract the data from the columns
names = df['name']  # Extract the 'name' column
scores = df['score']  # Extract the 'score' column

# Plotting
plt.bar(names, scores)  # Create a bar plot with names on the x-axis and scores on the y-axis
plt.xlabel('Name')  # Set the x-axis label
plt.ylabel('Score')  # Set the y-axis label
plt.title('Scores by Name')  # Set the title of the plot
plt.xticks(rotation=70)  # Rotate the x-axis tick labels by 70 degrees
plt.show()  # Display the plot


"""
names = df['name']: This line assigns the values 
from the 'name' column of the DataFrame data to a 
variable called names. 

ages = df['age']: This line assigns the values from 
the 'age' column of the DataFrame data to a variable 
called ages.

scores = df['score']: This line assigns the values 
from the 'score' column of the DataFrame data to a 
variable called scores."""