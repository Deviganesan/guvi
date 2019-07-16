test_string=input(" ")
c=0
for word in test_string:
  
  if word=='.'or word=='@'or word=='%'or word=='&'or word=='*'or word=='6'or word=='#'or word=='!'or word=='$' or word=='_':
    c+=1
  
print(c) 
