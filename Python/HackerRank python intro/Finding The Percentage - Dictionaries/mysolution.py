#My solution, insipired by the guy from HackerRank: 
students= {}
for i in range(int(input("Enter Number Of Students: "))):
    studentName, *marks = input("Enter Student Name And Marks: ").split()
    students[studentName] = [float(x) for x in marks] 
marksList = students[input("Enter Student To Get Avg Score Of: ")]
print("{:.2f}".format(sum(marksList)/len(marksList)))

#Someone from HackerRank's solution:
# data = {}
# for _ in range(int(input())): 
#     name, *marks = input().split()
#     data[name] = [float(m) for m in marks] 
# marks = data[input()]
# print("%.2f" % (sum(marks)/len(marks)))