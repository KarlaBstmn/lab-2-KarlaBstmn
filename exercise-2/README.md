# Ejercicio de laboratorio 2 – Múltiplos

## Descripción

Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]

```cmd
Ingrese dos enteros: 22 8
22 no es un múltiplo de 8
```

## Contesta las siguientes preguntas

1. ¿Se puede utilizar el operador de módulo con operandos no enteros? ¿Se puede usar con números negativos? Supongamos que el usuario ha introducido los siguientes conjuntos de números. Para cada serie, ¿qué produce en la tercera columna? Si hay un error, explique por qué.

   | Entero 1 | Entero 2 | Expresión        |               Salida             |
   | -------- | -------- | ---------------- | ---------------------------------|
   | 73       | 22       | cout << 73 % 22; |    73 no es un multiplo de 22    |
   | 0        | 100      | cout << 0 % 100; |     0 es un multiplo de 100      |
   | 100      | 0        | cout << 100 % 0; |                                  |
   | -3       | 3        | cout << -3 % 3;  |      -3 es un multiplo de 3      |
   | 9        | 4.5      | cout << 9 % 4.5; |      9 no es un multiplo de 4    |
   | 16       | 2        | cout << 16 % 2;  |       16 es un multiplo de 2     |

2. ¿Qué pasa si colocamos un punto y coma (;) después del final de la expresión de condición de una declaración if?
If finaliza y ya no incluye la condicional else, entonces 
3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]

## ✅ Resultado

(Añadir captura de pantalla del resultado de la ejecución)
