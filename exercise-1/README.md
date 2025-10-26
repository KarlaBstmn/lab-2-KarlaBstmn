# Ejercicio de laboratorio 1: Suma, Promedio, Máximo y Mínimo

## Descripción

Escriba un programa que lea tres números enteros del teclado e imprima la suma, el promedio, el producto, el más pequeño y el más grande de estos números. El diálogo de la pantalla debería aparecer de la siguiente manera:

```cmd
Ingrese tres enteros diferentes: 13 27 14
La suma es 54
El promedio es 18
El producto es 4914
El más pequeño es 13
El más grande es 27
```

## Contesta las siguientes preguntas

1. Modifique su solución para usar tres declaraciones cin separadas en lugar de una. Escribe un mensaje separado para cada cin.
Realizado.

2. ¿Importa si se usa < o <= al hacer comparaciones para determinar el número entero más pequeño? ¿Cuál usaste y por qué?
No siempre importa, pero si cambia el comportamiento cuando hay números iguales, usé "<" y ">" porque es suficiente para determinar correctamente el valor mínimo o máximo y comparar de forma estricta, en cambio, por como funciona el "<=" y ">=" logicamente es "=" y esto permite incluir empates.

3. En el programa, probablemente usó una variable double o float para almacenar el promedio. Cambie el tipo de esa variable a entero. ¿El resultado es diferente de lo que observó anteriormente?
Sí, cambia el promedio cuando es float o entero, porque si la variable está declarada en entero descarta la parte decimal, en cambio el float incluye los decimales.

## ✅ Resultado

(Añadir captura de pantalla del resultado de la ejecución)
