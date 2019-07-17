i1=int(input())
for i in range(0,i1):
  i2=list(map(int,input().split()))
  if(len(i2)==i1):
    print(min(i2) ,max(i2))
