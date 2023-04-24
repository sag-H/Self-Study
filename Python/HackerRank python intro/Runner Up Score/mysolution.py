#Mandatory input from question but it's useless so commented out.
# n = int(input("Enter amount of scores: ")) 

arr = list(map(int,input("Enter scores: ").split()))

#Using arr.sort() instead of sorted(arr) because sorted() makes a new list while sort() sorts 
# the current list, which is what's needed here.
arr.sort()

#Turning a list to a dict with .fromkeys() removes duplicates due to the nature of a dictionary
#and also keeps the order of the list, compared to list(set(arr)) which would not.
noDuplicatesList = list(dict.fromkeys(arr))  
runnerUpScore = noDuplicatesList[-2]
print(f'Runner Up Score: {runnerUpScore}')