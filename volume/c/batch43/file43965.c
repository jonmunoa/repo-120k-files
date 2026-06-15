// fichero 43965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43965;

Registro43965 crear_registro43965(int id) {
    Registro43965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
