// fichero 33089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33089;

Registro33089 crear_registro33089(int id) {
    Registro33089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
