// fichero 13433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13433;

Registro13433 crear_registro13433(int id) {
    Registro13433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
