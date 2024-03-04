a = list(map(int, input().split()))
for i in range(a[0]-1):
    a[1], a[2] = a[2]-a[1], a[1] 

print(a[1], a[2])

  