// fichero 13601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13601;

Registro13601 crear_registro13601(int id) {
    Registro13601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
