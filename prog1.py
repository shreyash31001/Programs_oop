
print("enter a number")
n = int(input())
print("choose an option for its operation")
op = int(input())
def square(n):
    result = n**2
    print(result)
def cube(n):
    result = n**3
    print("the cube is: " , result)
def palindrome(n):
    sum = 0
    while(n>0):
        div = n%10
        sum = (sum*10) + div
        n = n/10
if(sum == n):
      print("the number is palindrome")
else:
     print("the number is not palindrome")
if(op == 1):
    square(n)
elif(op == 2):
    cube(n)
elif(op == 3):
    palindrome(n)
else:
    print("no options left")


    