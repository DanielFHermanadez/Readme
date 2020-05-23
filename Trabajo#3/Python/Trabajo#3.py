n1= int(input("Ingrese la cantidad de hombres:"))
n2= int(input("Ingrese la cantidad de mujeres:"))
n3=n1*n2
while n3>=25:
    n3=n3*25/100
    print(n3)
print ("La cantidad de hombres es: ",n3)
print ("La cantidad de mujeres es: ",n3)
