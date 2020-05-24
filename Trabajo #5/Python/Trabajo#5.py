num=int(input("Digite el numero: "))
factorial =1

for i in range (num):
    print (factorial, " * ",num)
    factorial *= num
    num-=1
print (factorial)
