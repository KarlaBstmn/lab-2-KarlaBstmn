# Ejercicio de laboratorio 2 – Múltiplos

## Descripción

Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]

```cmd
Ingrese dos enteros: 22 8
22 no es un múltiplo de 8
```

## Contesta las siguientes preguntas

1. ¿Se puede utilizar el operador de módulo con operandos no enteros? No, solo con operandos enteros, sino hay un error de tipo. En mi caso, en la columna 5 de la tabla no hubo error, porque a pesar de insertar decimal en la columna "Entero 2", se definió al segundo valor como int (entero), por esta razón se descarta la parte decimal y en la salida se toma como entero.

2. ¿Se puede usar con números negativos? Sí, se puede usar números negativos, porque si el residuo es 0, es múltiplo sin importar el signo, aunque el signo del resultado será el signo del dividendo.
   
3. Supongamos que el usuario ha introducido los siguientes conjuntos de números. Para cada serie, ¿qué produce en la tercera columna? Si hay un error, explique por qué. En la tercera columna se produce un error y en mi caso no imprime nada, esto se produce porque no se puede dividir o sacar módulo entre 0, ya que una división entre 0 es error matemático.

   | Entero 1 | Entero 2 | Expresión        |               Salida             |
   | -------- | -------- | ---------------- | ---------------------------------|
   | 73       | 22       | cout << 73 % 22; |    73 no es un multiplo de 22    |
   | 0        | 100      | cout << 0 % 100; |     0 es un multiplo de 100      |
   | 100      | 0        | cout << 100 % 0; |                                  |
   | -3       | 3        | cout << -3 % 3;  |      -3 es un multiplo de 3      |
   | 9        | 4.5      | cout << 9 % 4.5; |      9 no es un multiplo de 4    |
   | 16       | 2        | cout << 16 % 2;  |       16 es un multiplo de 2     |

4. ¿Qué pasa si colocamos un punto y coma (;) después del final de la expresión de condición de una declaración if?
Usando un (;) termina la instrucción de if inmediatamente, en consecuencia ya no incluye la condicional else en caso de no cumplir la condición if.

5. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.] Realizado en otro archivo cpp.

## ✅ Resultado

(Añadir captura de pantalla del resultado de la ejecución)
