// fichero 46369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46369;

Registro46369 crear_registro46369(int id) {
    Registro46369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
