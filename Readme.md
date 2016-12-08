# Quien Quiere Ser Millonario - Who Wants to be Millionare #

Simple pero divertido juego programado en lenguaje c basado en el clásico programa de televisión 
"Who Wants to be Millionare", con preguntas relacionadas a programación estructurada 
y con los típicos comodines de la Audencia, 50/50 y Llamar a un amigo.   
Todos desde una interfaz de terminal que aletoriamente las mostrará para hacer más 
divertido el juego.  
Por ahora el juego está en español pero pronto podrás jugarlo 
en inglés  

### Conocimientos utilizados ###  

- Memoria dinámica
- Archivos
- Apuntadores
- Bibliotecas de usuario
- Estructuras de repetición 
- Estructuras de decisión
- Funciones
- Métodos de ordenamiento
- Aleatoriedad

## Diseño e implementación ##

En el archivo _wwtbm.txt_ están contenidas 21 preguntas y 8 posibles respuestas 
(incluyendo la correcta) del juego, pero en realidad el juego solo mostrará 15 preguntas y 4 
posibles respuestas (incluyendo la correcta) de manera _aleatoria_, todo esto por medio del uso de los conocimientos 
en el lenguaje incluyendo entre ellos el manejo de _archivos_ para leer las preguntas y respuestas, asi mismo, el uso de _memoria 
dinámica_ para reservar el espacio de memoria para cada pregunta y respuesta, _funciones_ 
y _apuntadores_ alojados en _bibliotecas de usuario_ las cuales utilizan los _métodos de ordenamiento_ y 
las _estructuras de repetición y decisión._

## Para comenzar... ##

Puedes **clonar** este repositorio o descargarlo en modo **zip** 
para asi obtener una copia que te permitirá jugar a Quien Quiere Ser Millonario

## Pre-requisitos ##

Tener instalado un compilador de _lenguaje c_

```Recomendación el compilador gcc```

Tener instalado el programa _make_

```Esto no es obligatorio pero si te será útil```

## Instalación ##

Si tu compilador es diferente a gcc debes utilizar la guia de ese compilador para compilar 
los archivos descargados del proyecto.  

En cambio, si tu compilador es gcc 
puedes abrir un terminal en la carpeta raiz de la rama master y ejecutar make, así:

``` make```

Sabrás que todo salió bien si no aparece niguna palabra de _error_ o de _warning_ 
(_precaución_)

## Ejecución ##

En la carpeta raiz de la rama master ejecuta:

``` ./wwtbm.out```

y A Jugar! :D

### Adicional ###

Si no quieres tener todos los archivos que se te crearon al compilar el proyecto 
puedes simplemente borrarlos.  

Y si tienes _make_ puedes ejecutar en tu terminal:

```make clean```

## Anexos ##

Menú del Juego

![Ejecución del juego - Menú](/anexos/img1.png)

Primera pregunta del juego con sus posibles respuestas y comodines

![Primera pregunta del juego con sus posibles respuestas y comodines](/anexos/img2.png)

## Hecho con &#x2764; by [Daniella Zambrano](https://github.com/DaniellaZambrano) ##
