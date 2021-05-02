# Input X as intenger
x =int(input())
# Counter
say = 0
y = 10

# Find the length of X
xLen = len(str(x))

# We have 2 option there | Are xLen even number or odd number
if xLen%2 == 0:   # If xLen even number
  for i in range(xLen//2):           # We need to use // for divide, because of we need int, dont need float number !
    if int(str(x)[i]) == int((x%10)/(y//10)):
      say+=1
    x/=10
    
# We have a small requirement for odd numbers. | Input: 12321  Result: 3
else:   # If xLen odd number
  for i in range(xLen//2): 
    if int(str(x)[i]) == int((x%10)/(y//10)):
      say+=1
    x/=10
    # Same loop as even numbers, but add 1 at the end for the correct answer !
  say+=1
    
print(say)
