s=input()
a=s.split()
for i in range(len(a)):
    print(a[i].capitalize(),end=" ")
    
    
def solve(s):
o = []
s = list(map(str,s.split(' ')))
for i in s:
o.append(i.capitalize())
return ' '.join(o)






print(" ".join(word.capitalize() for word in input().split(' ')))


s = input()
for x in s[:].split():
    s = s.replace(x, x.capitalize())
print(s)





