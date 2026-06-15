// fichero 6189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6189;

Registro6189 crear_registro6189(int id) {
    Registro6189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
