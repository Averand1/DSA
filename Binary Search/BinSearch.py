import numpy as np
import random

#Binary search needs a sorted array and what it does it finds the index of our number quickly
#Binary search code
def binary_search(list, item):
  low = 0  
  high = len(list)-1        
  while low <= high: 
    mid = (low + high)/2
    guess = list[mid]
    if guess == item:
      return mid
    if guess > item:     
      high = mid - 1
    else:    
      low = mid + 1
  return None

#Making a list of random integers
RandList = np.random.randint(low=0, high=5000, size=(20));
RandList.sort()
print(binary_search(RandList, random.choice(RandList)))