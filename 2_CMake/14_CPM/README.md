# CPM

En este ejercicio vemos cómo incluir una librería externa, 
de forma diferente a cómo lo hicimos hasta ahora. 

En este caso se trata del unofficial CMaker Package Manager que nos permite
descargar Librerías externas de una forma diferente a FetchContent()

http://github.com/cpm-cmake/CPM.cmake
Hoy está en versión: v0.38.7

Bajarse el CPM.cmake file desde GitHub: 
https://github.com/cpm-cmake/CPM.cmake/releases/download/v0.38.7/CPM.cmake

Copiarlo en el directorio `cmake` de mi proyecto. 


# Previo: Good programer

### 1. static linter

Permite encontrar problemas antes de la compilación: 

- static linter -> `clang tidy` - Permite encontrar problemas incluso antes de compilar

### 2. Durante la compilación

Gracias al uso de Warnings.

### Sanitizers

Permiten detectar memory leaks o problemas de memoria en el código. Permite encontrar problemas durante el runtime

Ver la sección `option()` en `CMakeLists.txt`

# LTO Link Time Optimizations

## Eliminar un submódulo Git

* Delete the relevant section from the `.gitmodules` file.
* Stage the `.gitmodules` changes `git add .gitmodules`
* Delete the relevant section from `.git/config`.
* Run `git rm --cached path_to_submodule` (no trailing slash).
* Run `rm -rf .git/modules/path_to_submodule` (no trailing slash).
* Commit `git commit -m "Removed submodule "`
* Delete the now untracked submodule files `rm -rf path_to_submodule`
