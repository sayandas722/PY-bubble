def bubble(a):
    n=len(a)

    for i in range(n):
        for j in range(n-i-1):
            if(a[j] > a[j+1]):
                temp = a[j]
                a[j] = a[j+1]
                a[j+1]= temp

a = list(map(int, input("Enter the number to be sorted: ").split()))
bubble(a)
for i in a:
    print(i)

            
