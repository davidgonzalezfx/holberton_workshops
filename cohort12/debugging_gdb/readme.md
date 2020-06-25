[Revisar en notion](https://www.notion.so/davidgonzalezfx/GDB-d3682b888221465297b0edaf7a370a98)

Debugging:
Es el proceso que consiste en arreglar 'bugs' o problemas en el código. Se trata de identificar, analizar y resolver errores básicamente. Tiene lugar cuando el código no compila pero tambn si en la ejecución del programa, el comportamiento no es el adecuado.

Antes de hacer debugging obviamente es importante tener claro cómo estamos resolviendo determinado problema (el algoritmo) y cómo se esta implementando esa solución en el código.

Estrategias:

- Si es de compilación, leer el mensaje de error y revisar la línea en la que esta el problema
- (Step by step) Whiteboarding o papel y lápiz, línea por línea
- (Breakpoints) Imprimir en pantalla variables o operaciones para ir revisando la ejecución
- Comentar código que se cree es el que causa los problemas y volver a ejecutar para revisar
- Hacer uso de herramientas especificas para debugging

Testing ≠ Debugging:
Testear se trata de buscar bugs o errores, debuggear trata de arreglarlos. El proceso de testing esta más enfocado en asegurarnos de que el programa funciona exactamente como se espera en todos los posibles casos (edge cases)

---

Qué es GDB - GNU Debugger
Es una herramienta que permite ver qué está ocurriendo en un programa mientras se ejecuta.
No funciona únicamente con C, tambn funciona con lenguajes como Go, Rust, Ada, Fortran, etc

Para qué sirve / Por qué usarla
Permite diferentes tipos de tareas como ejecutar línea a línea un programa, ejecutar a través de breakpoints, hacer seguimiento a los valores de las variables.

Cómo usarla:

Primero debemos instarla

```bash
$sudo apt update
$sudo apt-get install gdb
```

Antes de probarla:

```bash
$gcc main.c -o main.exe -g
```

Ejecutar

```bash
$gdb main.exe
```

Comandos básicos:

```bash
(gdb) s - start // inicia la ejecucion en el main
(gdb) r - run // inicia la ejecucion en el primer breakpoint - sino hay, corre todo
(gdb) c - continue // ejecuta hasta que enuentre un breakpoint - sino, hasta el final
(gdb) b 18 - break 18 // establece un breakpoint en la línea 18 del main.c
(gdb) n - next // ejecución línea por línea
(gdb) s - step // ejecución step by step (entra a las funciones)
(gdb) p my_var - print my_var // imprime el valor de my_var
(gdb) display my_var // muestra el valor de my_var en cada paso
(gdb) set my_var = "new" // asigna "new" a my_var

(gdb) layout [src, asm, next, prev, regs, split]
```
