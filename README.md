# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. --> Es un programa que calcula el área y perimetro de un rectangulo y es muy útil para solo meter las medidas de tu rectangulo y que te de el área y perimetro

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->
las entradas son el ancho y largo del rectangulo y las salidas son área y perimetro, son datos con decimales, en centimetros y centimetros cuadrados, el objetivo es dar una unidad a cada elemento del rectangulo

**Entradas:**
1. _____largo
2. _____ancho

**Salidas:**
1. _____área
2. _____perimetro

**Fórmulas** (área y perímetro):
_____área: alto*ancho
perimetro: 2*(alto*ancho)

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _____que los valores no sean 0 
- _____que los valores no sean negativos

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
_____manda el mensaje que el valor es invalido

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
_____leerdecimal detecta unicamente que el valor que metimos sea valido y yo reviso que sea logico el resultado

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
_____que el valor es aceptado

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | _____ | _____ | _____ | _____ |
| 2 (cuadrado) | _____ | _____ | _____ | _____ |
| 3 (con decimales) | _____ | _____ | _____ | _____ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?**  No
**¿Tuve que corregirla?** _____
**¿Cuántas versiones de mi receta escribí hasta la final?** _____

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
_____Area y perimetro de un rectangulo
Ingresa un valor para el ancho de la figura:-6
Ancho Invalido
Ingresa un valor para el ancho de la figura:3
Ingrese un valor para el alto de la figura:-5.5
Alto Invalido
Ingrese un valor para el alto de la figura:3
Resultados
Area 9cm2
Perimetro12cm
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
_____área:15 y perimetro:16

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
_____que el valor -4 es invalido y que vuelva a meter otro valor valido, si tiene sentido

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | _____ | _____ |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | _____ | _____ |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | _____ | _____ |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | _____ | _____ |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | _____ | _____ |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | _____ | _____ |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ | _____ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
_____que no es complejo hacer formulas matematicas

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____la manera en la que el programa te dice que el valor es invalido

**¿Qué fue lo más difícil y cómo lo resolví?**
_____la manera de imprimir los valores

**¿Qué pregunta me quedó sin responder?**
_____

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
_____

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [si ] Escribí mi receta completa en `RECETA.md` antes de programar
- [si ] Mi programa compila sin advertencias
- [si ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [si ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [si ] Hice `git push` y verifiqué mi fork en GitHub
- [si ] Entregué el enlace de mi fork en Classroom