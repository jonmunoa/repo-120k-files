// fichero 13157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13157;

Registro13157 crear_registro13157(int id) {
    Registro13157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
