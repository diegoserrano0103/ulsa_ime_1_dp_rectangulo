# Receta: Área y perímetro de un rectángulo

<!-- Escribe aquí tu receta completa en pseudocódigo, ANTES de programar.
     El primer paso es solo un ejemplo del formato; el resto de la receta es completamente tuyo.
     Si la corriges después de probarla a mano, deja aquí la versión final. -->
     ancho ← 0.0
alto ← 0.0
area ← 0.0
perimetro ← 0.0

MIENTRAS VERDADERO HACER
ancho ← leerDecimal("Ingresa un valor para el ancho de la figura: ")
SI ancho <= 0 ENTONCES
Mostrar "Ancho Invalido"
SINO
ROMPER_CICLO
FIN SI
FIN MIENTRAS

MIENTRAS VERDADERO HACER
alto ← leerDecimal("Ingrese un valor para el alto de la figura: ")
SI alto <= 0 ENTONCES
Mostrar "Alto Invalido"
SINO
ROMPER_CICLO
FIN SI
FIN MIENTRAS

area ← ancho * alto
perimetro ← 2 * (ancho + alto)

Mostrar "Area: " + area + " cm2"
Mostrar "Perimetro: " + perimetro + " cm"

``` text
1. MOSTRAR "Bienvenido a mi programa de rectangulo"

```