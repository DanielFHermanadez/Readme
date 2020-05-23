n1 = int(input("ingrese el valor total: "))
n2 = int (input("Ingrese la cantidad: "))

valortotal= n1*n2
if (valortotal<20000)*15/100:
    print("Tiene descuento del 15%")
    print("El valor total es: ",valortotal*15/100)
elif (valortotal>=350000)*35/100:
    print ("El valor total es: ",valortotal*35/100)
else:
    print("El valor total es: ",valortotal*35/100)






