// fichero 13521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13521;

Registro13521 crear_registro13521(int id) {
    Registro13521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
