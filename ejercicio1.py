#ejercicio 1  ⁠Haga un programa para 2 variables que realicen suma, resta, multiplicación, división y modulo (%)

num1 = int(input("ingrese primer digito: ")) 
num2 = int(input("ingrese segundo digito: ")) 

suma = num1 + num2

print(f"suma: {suma}")
resta = num1 - num2

print(f"resta: {resta}")

multiplicación= num1 * num2
print(f"multiplicación: {multiplicación}")

división = num1 / num2
print(f"división: {división}")

modulo = num1 % num2
print(f"modulo: {modulo}")

#ejercicio 2  ⁠Dado un precio de un artículo y un descuento (descuento del 15%), calcular el precio final después de aplicar.

desc = 15 / 100 
prenda = float (input("Dame valor de la prenda")) 

print(prenda)
operacion = prenda * desc

precio_final= prenda - operacion 

print (precio_final)

#3 ⁠Para una variable de valor 10, haga los siguientes pasos Aumentar en 5, reducir en 3, multiplicar por 2, divida entre 4.

variable=10 
suma = variable + 5 
resta = suma - 3
multiplicación = resta * 2
división = multiplicación/ 4

print (división)