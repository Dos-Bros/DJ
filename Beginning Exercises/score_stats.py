import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV file
df = pd.read_csv('scores.csv')

# Extract the data from the columns
names = df['name']  # Extract the 'name' column
ages = df['age']  # Extract the 'age' column
scores = df['score']  # Extract the 'score' column

# Calculate the mean score
mean_score = scores.mean()

# Calculate the median score
median_score = scores.median()

# Calculate the mode score
mode_score = scores.mode()

# Calculate the maximum score
max_score = scores.max()

# Calculate the minimum score
min_score = scores.min()

# Print the calculated statistics
print("Mean Score:", mean_score)
print("Median Score:", median_score)
print("Most Common score:", mode_score[0])  # Access the first mode value (if multiple modes exist)
print("Highest Score:", max_score)
print("Lowest Score:", min_score)


