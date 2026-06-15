// fichero 44629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44629;

Registro44629 crear_registro44629(int id) {
    Registro44629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
