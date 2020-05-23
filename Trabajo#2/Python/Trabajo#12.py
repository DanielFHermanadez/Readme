n1 = int(input("ingrese la edad: "))
n2 = int (input("Ingrese la estatura: "))
n3 = int(input("ingrese el peso: "))

if n1<=18:
    print("Cumple con la edad")
else:
    print("No cumple con la edad")
if n2>180:
    print("Cumple con la estatura")
else:
    print("No cumple con la estatura")
if n3<=80:
    print("Cumple con el peso")
else:
    print("No cumples con el peso")
if (n1<=18 and n2>180 and n3<80):
    print("bienvenido al club")
else:
    print ("Lo sentimos intentalo a la proxima")
