// fichero 46481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46481;

Registro46481 crear_registro46481(int id) {
    Registro46481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
