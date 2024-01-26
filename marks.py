total_marks = []
marks_count = [] # the marks can range from 0 to 100, so this list will have a total of 101 items.
i = 0
F_std, Aplus_std, A_std, B_std, C_std = [], [], [], [], []

n = int(input("Enter the number of students in the class: "))
print("-------------------\n")

while i < n:#getting the input
    print("Marks of roll no. ", i+ 1, ": ")
    marks = int(input())
    if marks > 100 or marks < 0:
        print('Invalid marks. Try again carfully.')
    else:
        total_marks += [marks]
        i += 1
for i in range(101):#initialization
    marks_count += [0]
for i in range(n):# counting the marks
    marks_count[total_marks[i]] += 1 # when i = 0, then total_marks[i] is total_marks[0], or '98'. we need to increase the value of that cell of marks_count (marks_count[98]) by one.
for i in range(101): # formatting the output
    if marks_count[i] > 0:
        print("Marks: ", i, "\t Count: ", marks_count[i])

print("-------------------\nRolls of failed students: ")
for i in range(n):
    if total_marks[i] < 40:
        F_std += [i+1]
F = len(F_std)
if F == 0:
    print("No students failed! this class Rocks!")
else:
    print(F_std)
    print(F, " students failed. (have skill issues)")

print("Rolls of students who got A+: ")
for i in range(n):
    if total_marks[i] >= 80:
        Aplus_std += [i+1]
if len(Aplus_std) > 0:
    print(Aplus_std)
    Aplus = len(Aplus_std)
    print(Aplus, " students got A+.")

print("Rolls of students who got A: ")
for i in range(n):
    if total_marks[i] < 80 and total_marks[i] >= 70:
        A_std += [i+1]
if len(A_std) > 0:
    print(A_std)
    A = len(A_std)
    print(A, " students got A.")

print("Rolls of students who got B: ")
for i in range(n):
    if total_marks[i] < 70 and total_marks[i] >= 60:
        B_std += [i+1]
if len(B_std) > 0:
    print(B_std)
    B = len(B_std)
    print(B, " students got B.")

print("Rolls of students who got C: ")
for i in range(n):
    if total_marks[i] < 60 and total_marks[i] >= 40:
        C_std += [i+1]
if len(C_std) > 0:
    print(C_std)
    C = len(C_std)
    print(C, " students got C.\n")

max_n, min_n = total_marks[0], total_marks[0]
max_count, min_count = 0, 0
for m in total_marks:
    if m > max_n:
        max_n = m
for m in total_marks:
    if m < min_n:
        min_n = m
for m in total_marks:
    if m == max_n:
        max_count += 1
for m in total_marks:
    if m == min_n:
        min_count += 1
# counting the highest and lowest marks.
print("-------------------\nThe highest mark is: ", max_n, "\t ", max_count, "Students got the highest marks.")
print("The lowest mark is: ", min_n, "\t ", min_count, "Students got the lowest marks.\n-------------------\n")

max_std, min_std = [], []
print("Rolls of students who got the highest marks: ")
for i in range(n):
    if total_marks[i] == max_n:
        max_std += [i + 1]
print(max_std)
print("Rolls of students who got the lowest marks: ")
for i in range(n):
    if total_marks[i] == min_n:
        min_std += [i + 1]
print(min_std)

