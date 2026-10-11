Métodos Numéricos en Ingeniería
clave: 1151039
Trimestre 26-O

Ingeniería Mecánica
Nombre: Constanza Casales Avila
Matricula: 2253001260

Profesor: Gabriel Hurtado Aviles
Fecha: Octubre 10, 2026

Ejercicio 1. Configuración del repositorio.
El repositorio contiene las actividades de la materia Métodos Numéricos en Ingeniería del 26-O

Ejercicio 2. README 

1. ¿Qué son los métodos numéricos?

Los métodos numéricos son procedimientos matemáticos que permiten obtener soluciones aproximadas a problemas que pueden ser difíciles de resolver de forma analítica. Una solución analítica busca expresar el resultado mediante una formula o expresión matemática, un método numérico permite calcular valores aproximados mediante una serie de operaciones.

En ingeniería los métodos numéricos son útiles porque muchos problemas tienen ecuaciones complejas que dificultan encontrar una solución analítica. Además, al realizar los cálculos en una computadora pueden aparecer errores de redondeo debido a la precisión limitada con la que se representan los números, por eso estudiar el error permite evaluar qué tan cerca está el resultado calculado del valor exacto o de una solución de referencia, y determinar si la aproximación es adecuada para el problema. (Burden & Faires, 2011; Chapra & Canale, 2015). 

2. ¿Cómo se aplican en Ingeniería Mecánica?
   
En Ingeniería Mecánica, los métodos numéricos se utilizan para analizar el comportamiento de sistemas y componentes cuando las ecuaciones que los describen son difíciles de resolver de forma analítica, tal y como indica el punto anterior. Permiten estudiar problemas relacionados con las estructuras, la transferencia de calor y el movimiento de los mecanismos, entre otros.

Un ejemplo es el análisis de esfuerzos y deformaciones en componentes mecánicos. En este caso, se calculan los desplazamientos y los esfuerzos que experimenta una pieza cuando está sometida a determinadas cargas. En componentes con geometrías complejas o condiciones de carga variadas, puede ser difícil obtener una solución mediante una fórmula cerrada, por lo que se recurre a métodos numéricos, como el método de los elementos finitos, para aproximar su comportamiento.

Otro ejemplo es el análisis de la transferencia de calor en motores. Se busca calcular cómo se distribuye la temperatura en sus componentes durante el funcionamiento. Cuando intervienen geometrías complejas, propiedades de los materiales que cambian con la temperatura o condiciones de operación variables, una solución analítica puede resultar insuficiente o difícil de obtener. Por ello, los métodos numéricos permiten aproximar la distribución de temperaturas y estudiar el comportamiento térmico del sistema. (Chapra & Canale, 2015; Nieves & Domínguez, 2014). 

3. ¿Qué herramientas se usan para trabajar con métodos numéricos?

Existen diferentes herramientas para implementar métodos numéricos, y la elección depende del tipo de problema, la precisión requerida y los recursos disponibles.

Los lenguajes compilados, como C, C++ y Fortran, transforman el código fuente en un programa ejecutable y permiten realizar cálculos con un buen rendimiento. Por otro lado, los lenguajes interpretados facilitan la escritura y prueba de instrucciones sin tener que realizar una compilación tradicional.

Los entornos matriciales, como MATLAB y GNU Octave, están orientados a operaciones con matrices y vectores, por lo que resultan útiles para resolver sistemas de ecuaciones y analizar datos. También se utiliza Python, que cuenta con bibliotecas científicas como NumPy, para realizar operaciones numéricas; SciPy, para cálculos científicos; y Matplotlib, para representar gráficamente los resultados.

Otra herramienta es el álgebra simbólica, que permite manipular expresiones matemáticas de forma exacta y realizar operaciones como la derivación y la integración simbólicas. Finalmente, bibliotecas como BLAS y LAPACK proporcionan rutinas optimizadas para operaciones de álgebra lineal, como la multiplicación de matrices y la solución de sistemas de ecuaciones.

En los libros consultados se encuentran diferentes herramientas para estudiar e implementar métodos numéricos. Burden y Faires (2011) presentan los algoritmos principalmente mediante pseudocódigo y ofrecen programas complementarios en distintos lenguajes, como C, Fortran y Java, además de herramientas como MATLAB. Chapra y Canale (2015) incluyen el uso de MATLAB, Excel con VBA y Mathcad. Kincaid y Cheney (2012) presentan algoritmos mediante pseudocódigo y abordan herramientas de programación para su implementación. Por su parte, Nieves y Domínguez (2014) se enfocan en la descripción de algoritmos y pseudocódigo, mientras que Quarteroni y Saleri (2009) desarrollan los métodos de cálculo científico mediante MATLAB y GNU Octave. Estos ejemplos muestran que los métodos numéricos pueden implementarse con diferentes herramientas según las necesidades del problema y el enfoque de cada obra.

4. ¿Qué herramientas usamos en este curso?

Docker: Docker permite crear y ejecutar contenedores que incluyen los elementos necesarios para ejecutar programas. En este curso lo utilizamos para trabajar con un entorno de desarrollo que reúne las herramientas de programación y permite ejecutar los ejercicios sin tener que configurar cada una por separado en la computadora.

Docker frente a una máquina virtual: Una máquina virtual ejecuta un sistema operativo invitado sobre un entorno de virtualización, mientras que los contenedores de Docker comparten el kernel del sistema operativo que los aloja, mediante el mecanismo de contenedores de la plataforma. Es por eso que los contenedores suelen requerir menos recursos y pueden iniciarse más rápido que una máquina virtual completa.

Archivos y comandos de Docker: El archivo Dockerfile contiene las instrucciones para construir una imagen, mientras que compose.yaml permite definir y configurar los servicios que se ejecutan mediante Docker Compose.

Entre los comandos utilizados se encuentran docker compose up -d, que inicia los servicios en segundo plano; docker compose exec, que permite ejecutar comandos dentro de un contenedor en funcionamiento; docker compose ps, que muestra el estado de los contenedores; y docker compose logs, que permite consultar sus registros. Por su parte, docker compose stop detiene los servicios sin eliminar los contenedores, mientras que docker compose down detiene y elimina los contenedores y las redes creadas por Compose. La diferencia es importante porque detener un contenedor no es lo mismo que eliminarlo, y los datos guardados en volúmenes pueden persistir incluso después de eliminarlo.

GNU Octave: GNU Octave es un lenguaje de programación y entorno de cálculo numérico que permite realizar operaciones matemáticas, trabajar con matrices y resolver problemas de ingeniería. Su sintaxis es compatible en gran medida con MATLAB, lo que facilita la implementación de algoritmos numéricos.

Python: Python es un lenguaje de programación de alto nivel utilizado en diferentes áreas de la ingeniería. En este curso permite desarrollar programas y resolver problemas mediante instrucciones claras y una amplia variedad de bibliotecas. La versión instalada en el contenedor se puede consultar mediante el comando python3 --version.
C y el compilador gcc: C es un lenguaje de programación compilado que permite desarrollar programas para realizar cálculos y resolver problemas numéricos. Para ejecutar un programa escrito en C, se utiliza gcc, un compilador de la colección GNU Compiler Collection. La versión disponible en el entorno se puede consultar con gcc --version.

Las versiones de GNU Octave, Python y gcc se registrarán a partir de los resultados obtenidos dentro del contenedor del curso, en lugar de asignarles valores sin comprobarlos.

Referencias:

Burden, R. L., & Faires, J. D. (2011). *Análisis numérico* (9.ª ed.). Cengage Learning.

Chapra, S. C., & Canale, R. P. (2015). *Métodos numéricos para ingenieros* (7.ª ed.). McGraw-Hill.

Nieves, A., & Domínguez, F. C. (2014). *Métodos numéricos aplicados a la ingeniería*. Grupo Editorial Patria.

Quarteroni, A., & Saleri, F. (2009). *Cálculo científico con MATLAB y Octave*. Springer.

Kincaid, D., & Cheney, W. (2012). *Análisis numérico y computación* (6.ª ed.). Cengage Learning.

Uso de herramientas de inteligencia artificial.

Se utilizaron ChatGPT y Gemini como herramientas de apoyo para organizar la estructura del README, aclarar conceptos relacionados con los métodos numéricos y revisar la redacción y la información sobre las herramientas de programación mencionadas en los libros. El contenido se revisó y ajustó durante la elaboración del trabajo.

