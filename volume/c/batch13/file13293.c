// fichero 13293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13293;

Registro13293 crear_registro13293(int id) {
    Registro13293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
