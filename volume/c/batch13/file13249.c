// fichero 13249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13249;

Registro13249 crear_registro13249(int id) {
    Registro13249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
