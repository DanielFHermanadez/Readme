n1 = int(input("ingrese el salario: "))
n2 = int(input("ingrese los dias trabajados: "))
print ("Se le hacen dos descuentos uno del 15% y otro por 10%")
print("valor salario por dias: ",(n1*n2))
Suma = n1*n2*15/100
print("El valor del descuento del 15% es: ", Suma)
Suma1 = n1*n2*10/100
print("El valor del descuento del 10% es: ", Suma1)
Resultado = Suma-Suma1
print("El resultado total es de: ",(Resultado))


