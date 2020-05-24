n1=int(input("Ingrese el numero: "))
n2=int(input("Desea ingresar otro numero? \n digite 1 si o 2 para no "))
n=2
while n2==1:
    n1=int(input("Ingrese el numero:[n1]\n numero: "))
    n2=int(input("Desea ingresar otro numero? \n digite 1 si o 2 para no "))
    n2+=1


print("El valor del cubo es: ",n1**2)
print("La cuarta parte es  : ",n1/4)
print("La quinta parte es: ",n1*5)
