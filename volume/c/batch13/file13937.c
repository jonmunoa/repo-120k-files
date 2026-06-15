// fichero 13937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13937;

Registro13937 crear_registro13937(int id) {
    Registro13937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
