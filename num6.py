n=int(input())
k=0
while(n>0):
  c=n%10
  k=k+1
  n//=10
print(k)  
