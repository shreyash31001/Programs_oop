print("enter the lenght of the list: ")
n = int(input())
list = []
print("enter the number for the list: ")
for i in range(n):
    num = int(input())
    list[i] = list[i] + num
    

for j in range(n):
    print(list[j])
