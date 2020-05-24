print ("Registradora almacen")
na=int(input("Ingrese el numero de articulos "))
va=int(input("Ingrese el valor de los articulos "))
v=int(input("Desea ingresar otro articulo? \n digite 1 si o 2 para no "))
st=na*va
art=2
while v==1:
    na=int(input("Ingrese para el articulo [art]\n numero de articulos: "))
    va=int(input("Valor de los articulos "))
    v=int(input("Desea ingre otro articulo? \n digite 1 si o 2 para no "))
    st= st + (va*na)
    art+=1
v= int(input("Cual es su forma de pago? \nDigite 1 credito o 2 efectivo"))
iva=st*0.16
print("El valor total de articulos ingresados fue: ",art-1)
if(v==2):
    print(f"su compra fue de {st} \niva = {iva}\nTotal = ",st+iva)
else:
    print(f"su compra fue de {st} \niva = {iva}\nDescuentos: ",(st+iva)*0.1,"\nTotal = ",st+iva-((st+iva)*0.1))
