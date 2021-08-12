import copy

x=1
y=x
x=2

print(x, y)

x=[1]
y=x
z=copy.deepcopy(x)
x[0]=2

print(x, y,z)

#name = input('ff')
#print(name)

x=(1,2,3,'r')
print(x)

x=[1,2,3]

for i, val in enumerate(x):
    print(i, '-', val)

for i in x:
    print(i)

mp = map(lambda i: i+2, x)
f = filter(lambda i:i<3,x)
print(list(mp))
print(list(f))

'''how to access items in dict'''
a={1:2, 2:1, 3:4}
for key, val in a.items():
    print(key)
    print(val)
    print('----')

'''how to access keys'''
for i in a:
    print(a[i])

''' how to sort dictionary'''
b = sorted(a.items(), key=lambda x:x[1], reverse=True)
print(b)

"comprehension of list/dictonary"
print([i*i for i in range(10) if i%2==0])
print({i:i*i for i in range(10) if i%2==0})

'''operation of set'''
a = {1,2,3,3}
print(a)
a.add(2)
print(a)

'''zip'''
x=[1,2,3]
y=[i*i for i in x]
y+=[5]
print(y)
for i, j in zip(x,y):
    print(i+j)

'''join, int to str, map, map to list'''
x=[1,2,3]
print(x)
print(' '.join([str(i) for i in x ]))
c=map(str, x)
print(list(c))

'''counter'''
import collections
x=[1,2,3,4]
c= collections.Counter(x)
for i in x:
    print(c[i])

'''priority queue'''
from queue import PriorityQueue
q = PriorityQueue()
for i in range(10,0,-1):
    q.put(i)
while q.empty() is False:
    next_item = q.get()
    print(next_item)


'''stack'''
stack=[]
stack.append(1)
stack.append(2)
print(stack.pop())

'''quque'''
queue=[]
queue.append(1)
queue.append(2)
print(queue.pop(0))