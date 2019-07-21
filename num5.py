n=input()
k=0
l=0
for i in n:
 if i.isdigit():
   k+=1
 else:
   pass
for i in n:
  if i.isalpha():
    l+=1
  else:
    pass
if k>=1 and l>=1:
  print("Yes")
else:
  print("No")     
