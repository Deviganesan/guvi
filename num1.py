n=int(input())
count=0
while(n>0):
  a=n%10
  count=count+a
  n//=10
print(count)  
