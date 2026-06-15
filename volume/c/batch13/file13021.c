// fichero 13021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13021;

Registro13021 crear_registro13021(int id) {
    Registro13021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
