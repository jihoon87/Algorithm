# 1차 배열
# students= [ 'A', 'C', 'B']
# a. 오름차수 정렬
students.sort()
sorted(students)

# n차 배열
# students = [('john', 'A', 15),
#			  ('jane', 'B', 12),
#			  ('dave', 'B', 10)]
# 1번째 기준 정렬 안에서 0번째 기준 정렬
students.sort(key=lambda student: (students[1],students[0]))
