def multiplos_hasta_limite(numero,limite):
    '''Halla la cantidad dada de multiplos'''
    multiplos =[]
    i=1
    multiplo=numero
    while multiplo<=limite:
        multiplos.append(multiplo)
        i+=1
        multiplo=numero*i

    return multiplos
m = multiplos_hasta_limite(6,100)
print(m)

