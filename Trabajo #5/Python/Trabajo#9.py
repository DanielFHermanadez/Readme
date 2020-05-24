import random
magia=random.randint(1,10)
intentos=0
while True:
    tunumero=int(input("Introduce un numero entre el 1 y el 10: "))
    if tunumero== magia:
        print("Felicidades, lo lograste")
        break
    else:
        print("Intentalo denuevo")
        intentos+=1
        print("El numero de intentos es: "+str(intentos))
print("Hasta pronto")
