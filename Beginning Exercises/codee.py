import numpy as np
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn import svm
from PIL import Image

digits = datasets.load_digits()

X_train, X_test, y_train, y_test = train_test_split(digits.data, digits.target, test_size=0.2, random_state=42)

clf = svm.SVC(gamma='scale')

clf.fit(X_train, y_train)

test_image = Image.open("mygoat.jpg")
test_image = test_image.convert("L")
test_image = test_image.resize((8,8))

test_data = np.array(test_image).flatten()
print(len(test_data))
test_data = test_data / 16.0

predicted = clf.predict([test_data])

print("Predicited Digit:", predicted[0])
