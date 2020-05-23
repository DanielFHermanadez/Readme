nombre = input("Digite su nombre: ")
materia = input("Digite su materia: ")
n1 = int(input("ingrese la nota 1: "))
n2 = int (input("Ingrese la nota 2: "))
n3 = int(input("ingrese la nota 3: "))

notas= n1+n2+n3/3
print("la definitiva es: ",notas)
if notas>3.5:
    print("Paso la materia")
elif notas<3.5:
    print ("No paso la materia")
else:
    print("Se restan ")

print(f"la materia es: {materia}")
print(f"Su nombre es: {nombre}")


