// fichero 13945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13945;

Registro13945 crear_registro13945(int id) {
    Registro13945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
